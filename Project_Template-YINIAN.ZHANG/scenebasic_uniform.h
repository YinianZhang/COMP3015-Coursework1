#ifndef SCENEBASIC_UNIFORM_H
#define SCENEBASIC_UNIFORM_H

#include "helper/scene.h"

#include <glad/glad.h>
#include "helper/glslprogram.h"

#include "camera.h"

class SceneBasic_Uniform : public Scene
{
private:
    GLuint vaoHandle;
    GLSLProgram prog;
    float angle;
    bool isStartRotate;
    Camera camera;

    GLuint skyboxVAO;
    GLuint skyboxVBO;
    GLSLProgram skyboxProj;
    unsigned int cubemapTexture;
    unsigned int woodTexture;
    void compile();

public:
    SceneBasic_Uniform();

    void initScene();
    void update( float t );
    void render();
    void resize(int, int);
    bool processKey(int value);
};

#endif // SCENEBASIC_UNIFORM_H
