#pragma once

#include <glm/glm.hpp>

class Camera {
public:
    Camera() = delete;
    Camera(glm::mat4* view, float width, float height, float fov, float near, float far);
    void rotate(float dAzimuth, float dAltitude);
    void pan(float dX, float dY);
    void zoom(float factor);
    const glm::mat4& view();
    glm::mat4 getPerspectiveMatrix();
    float getAspectRatio();
    float getFOV();
    glm::mat4 getCamMatrix();

private:
    void recalculate();

    float _azimuth;
    float _altitude;
    float _radius;
    glm::vec3 _center;
    glm::vec3 _eyeDir;
    bool _dirty;
    glm::mat4& _view;

    float _width;
    float _height; 
    float _fov;
    float _near;
    float _far;
};