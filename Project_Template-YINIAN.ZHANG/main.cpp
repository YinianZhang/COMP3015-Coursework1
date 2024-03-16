#include "helper/scene.h"
#include "helper/scenerunner.h"
#include "scenebasic_uniform.h"


int main(int argc, char* argv[])
{
	SceneRunner runner("Shader_Basics");

	unique_ptr<Scene> scene;

	scene = unique_ptr<Scene>(new SceneBasic_Uniform());


	return runner.run(*scene);
}