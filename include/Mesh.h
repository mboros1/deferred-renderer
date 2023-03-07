//
// Created by martin on 11/30/20.
//

#ifndef OPENGLFROMSCRATCH_MESH_H
#define OPENGLFROMSCRATCH_MESH_H

#include <glm/glm.hpp>
#include <string>
#include <vector>
#include "Shader.h"

struct Vertex {
    glm::vec3 Position;
    glm::vec3 Normal;
    glm::vec2 TexCoords;
    glm::vec3 Tangent;
    glm::vec3 Bitangent;
};

struct Texture {
    unsigned int id;
    std::string type;
    std::string path;
};

class Mesh {
public:
    std::vector<Vertex> vertices;
    std::vector<unsigned int> indices;
    std::vector<Texture> textures;

    Mesh(std::vector<Vertex>& vertices,
         std::vector<unsigned int>& indices,
         std::vector<Texture>& textures);

    void Draw(Shader& shader);

private:
    unsigned int VAO, VBO, EBO;

    void setupMesh();
};


#endif //OPENGLFROMSCRATCH_MESH_H
