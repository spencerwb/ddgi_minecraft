#pragma once
#include <glm/glm.hpp>
#include <vector>

class Cube
{
public:
    Cube translate(glm::mat4);

    std::vector<glm::vec4> pos = {
        // front face
        { -0.5f, -0.5f,  0.5f, 1.f },
        {  0.5f, -0.5f,  0.5f, 1.f },
        {  0.5f,  0.5f,  0.5f, 1.f },
        { -0.5f,  0.5f,  0.5f, 1.f },
        // back face
        { -0.5f, -0.5f, -0.5f, 1.f },
        { -0.5f,  0.5f, -0.5f, 1.f },
        {  0.5f,  0.5f, -0.5f, 1.f },
        {  0.5f, -0.5f, -0.5f, 1.f },
        // top face
        { -0.5f,  0.5f, -0.5f, 1.f },
        { -0.5f,  0.5f,  0.5f, 1.f },
        {  0.5f,  0.5f,  0.5f, 1.f },
        {  0.5f,  0.5f, -0.5f, 1.f },
        // bottom face
        { -0.5f, -0.5f, -0.5f, 1.f },
        {  0.5f, -0.5f, -0.5f, 1.f },
        {  0.5f, -0.5f,  0.5f, 1.f },
        { -0.5f, -0.5f,  0.5f, 1.f },
        // right face
        {  0.5f, -0.5f, -0.5f, 1.f },
        {  0.5f,  0.5f, -0.5f, 1.f },
        {  0.5f,  0.5f,  0.5f, 1.f },
        {  0.5f, -0.5f,  0.5f, 1.f },
        // left face
        { -0.5f, -0.5f, -0.5f, 1.f },
        { -0.5f, -0.5f,  0.5f, 1.f },
        { -0.5f,  0.5f,  0.5f, 1.f },
        { -0.5f,  0.5f, -0.5f, 1.f }
    };

    std::vector<glm::vec4> col = {
        // front face
        { 1.0f, 0.0f, 0.0f, 1.f },
        { 1.0f, 0.0f, 0.0f, 1.f },
        { 1.0f, 0.0f, 0.0f, 1.f },
        { 1.0f, 0.0f, 0.0f, 1.f },
        // back face
        { 1.0f, 0.0f, 0.0f, 1.f },
        { 1.0f, 0.0f, 0.0f, 1.f },
        { 1.0f, 0.0f, 0.0f, 1.f },
        { 1.0f, 0.0f, 0.0f, 1.f },
        // top face
        { 0.0f, 1.0f, 0.0f, 1.f },
        { 0.0f, 1.0f, 0.0f, 1.f },
        { 0.0f, 1.0f, 0.0f, 1.f },
        { 0.0f, 1.0f, 0.0f, 1.f },
        // bottom face
        { 0.0f, 1.0f, 0.0f, 1.f },
        { 0.0f, 1.0f, 0.0f, 1.f },
        { 0.0f, 1.0f, 0.0f, 1.f },
        { 0.0f, 1.0f, 0.0f, 1.f },
        // right face
        { 0.0f, 0.0f, 1.0f, 1.f },
        { 0.0f, 0.0f, 1.0f, 1.f },
        { 0.0f, 0.0f, 1.0f, 1.f },
        { 0.0f, 0.0f, 1.0f, 1.f },
        // left face
        { 0.0f, 0.0f, 1.0f, 1.f },
        { 0.0f, 0.0f, 1.0f, 1.f },
        { 0.0f, 0.0f, 1.0f, 1.f },
        { 0.0f, 0.0f, 1.0f, 1.f }
    };

    std::vector<unsigned int> ind = { // front face
                                          0, 1, 2,
                                          0, 2, 3,

                                          // back face
                                          4, 5, 6,
                                          4, 6, 7,

                                          // top face
                                          8, 9, 10,
                                          8, 10, 11,

                                          // bottom face
                                          12, 13, 14,
                                          12, 14, 15,

                                          // right face
                                          16, 17, 18,
                                          16, 18, 19,

                                          // left face
                                          20, 21, 22,
                                          20, 22, 23 };
};

