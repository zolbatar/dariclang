#include <vector>
#include <iostream>
#include "Graphics3D/Engine.h"
#include <assimp/Importer.hpp>      // C++ importer interface
#include <assimp/scene.h>           // Output data structure
#include <assimp/postprocess.h>     // Post processing flags
#include <glm/gtc/quaternion.hpp>
#include <glm/ext/quaternion_transform.hpp>
#include "Types.h"

typedef const aiScene *pScene;
extern World world;

std::vector<PosColorVertex> vertices;
std::vector<MeshTriangle> faces;

extern "C" void gfx3d_camera(T_F x, T_F y, T_F z, T_F rx, T_F ry, T_F rz, T_F lx, T_F ly, T_F lz) {
	world.Camera(x, y, z, rx, ry, rz, lx, ly, lz);
}

extern "C" T_I gfx3d_object(T_I id, T_F x, T_F y, T_F z, T_F rx, T_F ry, T_F rz, T_F scale, T_I render_type) {
	return world.CreateObject(id, x, y, z, rx, ry, rz, scale, render_type);
}

extern "C" void gfx3d_translate(T_I id, T_F x, T_F y, T_F z) {
	world.ObjectTranslate(id, x, y, z);
}

extern "C" void gfx3d_rotate(T_I id, T_F x, T_F y, T_F z) {
	world.ObjectRotate(id, x, y, z);
}

extern "C" void gfx3d_scale(T_I id, T_F scale) {
	world.ObjectScale(id, scale);
}

extern "C" void gfx3d_deleteobject(T_I id) {
	world.ObjectDelete(id);
}

extern "C" void gfx3d_deleteallobjects() {
	world.ObjectDeleteAll();
}

extern "C" void gfx3d_shadowson() {
	world.shadows = true;
}

extern "C" void gfx3d_shadowsoff() {
	world.shadows = false;
}

extern "C" void gfx3d_render() {
	world.Render();
}

extern "C" void gfx3d_vertex(T_F x, T_F y, T_F z) {
	PosColorVertex pcv;
	pcv.position.x = x;
	pcv.position.y = y;
	pcv.position.z = z;
//	std::cout << "x:" << x << " y:" << y << " z:" << z << std::endl;
	vertices.push_back(std::move(pcv));
}

extern "C" void gfx3d_vertexc(T_F x, T_F y, T_F z, T_I colour) {
	PosColorVertex pcv;
	pcv.position.x = x;
	pcv.position.y = y;
	pcv.position.z = z;
	pcv.colour = colour;
	vertices.push_back(std::move(pcv));
}

extern "C" void gfx3d_face(T_I v1, T_I v2, T_I v3) {
	MeshTriangle t;
	t.vertex1 = v1;
	t.vertex2 = v2;
	t.vertex3 = v3;
	t.solid = false;
	faces.push_back(std::move(t));
}

extern "C" void gfx3d_facec(T_I v1, T_I v2, T_I v3, T_I colour) {
	MeshTriangle t;
	t.vertex1 = v1;
	t.vertex2 = v2;
	t.vertex3 = v3;
	t.solid = true;
	t.colour = colour;
	faces.push_back(std::move(t));
}

extern "C" T_I gfx3d_shape() {
	auto index = world.CreateShape();
//    std::cout << "Shape index: " << index << std::endl;
	return index;
}

extern "C" void gfx3d_shapedelete(T_I id) {
	world.DeleteShape(id);
}

extern "C" T_I gfx3d_loadmesh(T_S file) {
	std::string path(file);
	std::string root = path;
	root = root.substr(0, path.find_last_of("\\/")) + "/";

	Assimp::Importer importer;
	pScene scene = importer.ReadFile(file, aiProcessPreset_TargetRealtime_MaxQuality);

	// If the import failed, report it
	if (!scene || scene->mFlags & AI_SCENE_FLAGS_INCOMPLETE || !scene->mRootNode) {
		std::cout << "Importer error:" << importer.GetErrorString() << std::endl;
		exit(1);
	}

	// Create one of our own objects to store all this in
	Shape shape;

	for (auto i = 0; i < scene->mNumMeshes; i++) {
		auto m = scene->mMeshes[i];

		// Material
		auto matIndex = m->mMaterialIndex;

		// Set default colour, then get actual colour
		aiColor3D color(0.f, 0.f, 0.f);
		assert(matIndex < scene->mNumMaterials);
		auto material = scene->mMaterials[matIndex];
		material->Get(AI_MATKEY_COLOR_DIFFUSE, color);
		/*		aiString path;
				if (material->GetTexture(aiTextureType_DIFFUSE, 0, &path, NULL, NULL, NULL, NULL, NULL)==AI_SUCCESS) {
					int a = 1;
				}
				//m_Textures[MaterialIndex]->Bind(GL_TEXTURE0);*/

		// New section
		auto ss = shape.CreateShapeSection();

		// Add vertices
		for (auto j = 0; j < m->mNumVertices; j++) {
			auto v = m->mVertices[j];
			PosColorVertex pcv;
			pcv.position.x = v.x;
			pcv.position.y = v.y;
			pcv.position.z = v.z;
			pcv.normal.x = m->mNormals[j].x;
			pcv.normal.y = m->mNormals[j].y;
			pcv.normal.z = m->mNormals[j].z;
			pcv.colour = ImGui::ColorConvertFloat4ToU32(ImVec4(color.r, color.g, color.b, 1.0));
			ss->AddVertex(std::move(pcv));
		}

		// Add Faces
		for (auto j = 0; j < m->mNumFaces; j++) {
			auto f = m->mFaces[j];
			if (f.mNumIndices == 2) {
				// Don't want
				continue;
			}
			if (f.mNumIndices != 3) {
				std::cout << "Only triangles supported currently\n";
				exit(1);
			}
			MeshTriangle tri;
			tri.vertex3 = f.mIndices[2];
			tri.vertex2 = f.mIndices[1];
			tri.vertex1 = f.mIndices[0];
			tri.colour = ImGui::ColorConvertFloat4ToU32(ImVec4(color.r, color.g, color.b, 1.0));
			//tri.solid = true;
			ss->AddTri(std::move(tri));
		}

		ss->CreateNormals();
	}

	// Now add and return the index
	uint32_t index = world.AddShape(std::move(shape));
	return index;
}

extern "C" void gfx3d_ambient(T_F r, T_F g, T_F b) {
	world.SetAmbient(r, g, b);
}

extern "C" void gfx3d_directional(T_F x, T_F y, T_F z, T_F r, T_F g, T_F b, T_F c, T_F l, T_F q) {
	world.SetDirectional(x, y, z, r, g, b, c, l, q);
}

glm::vec3 xx(1.0f, .0f, .0f);
glm::vec3 yy(.0f, 1.0f, .0f);
glm::vec3 zz(.0f, .0f, 1.0f);
glm::vec3 out;

constexpr float toRad(float v) { return (v / 180.0 * M_PI); }

extern "C" void gfx3d_setrotate(T_F x, T_F y, T_F z, T_F vx, T_F vy, T_F vz) {
	glm::mat4 m(1.0f);
	m = glm::rotate(m, toRad(x), xx);
	m = glm::rotate(m, toRad(y), yy);
	m = glm::rotate(m, toRad(z), zz);
	glm::vec4 v(vx, vy, vz, 1);
	v = m * v;
	out = v;
}

extern "C" T_F gfx3d_getrotatex() {
	return out.x;
}

extern "C" T_F gfx3d_getrotatey() {
	return out.y;
}

extern "C" T_F gfx3d_getrotatez() {
	return out.z;
}

