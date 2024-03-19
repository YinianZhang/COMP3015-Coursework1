# COMP3015-Coursework1

## Project Development Environment

- **Visual Studio Version:** [17.1.2]
- **Operating System:** [Windows 10 Home Chinese Version]

## 1. How to Control?

To run the program, double-click on the executable file (exe). Ensure that complete documentation, including images and OBJ file documentation, is available. Once the program is running, you can use the keyboard to navigate and interact with the scenarios.

Users can control actions using the following keys:

- **A, D, S, W**: The viewpoint moves on left, right, backward, and forward, respectively.
- **Q**: The viewpoint begins to rotate.
- **E**: The viewpoint stops to rotate.


## 2. How does it work?
   - The `SceneBasic_Uniform` class serves as the main control class for the entire scene, containing methods for initializing the scene, compiling shader programs, updating the scene, rendering the scene, and handling window resize events.
   - The `loadTexture` function loads texture images, while the `loadCubemap` function loads cube maps for the skybox textures.
   - The `initScene` method is called during program initialization to set up the initial state of the scene, including compiling shader programs, generating and binding buffer objects, loading textures, etc.
   - The `update` method updates the scene, such as updating rotation angles.
   - The `processKey` method handles keyboard input, such as controlling camera movement or starting/stopping rotation.
   - The `render` method performs the actual rendering of the scene, including setting lighting properties, projection matrix, view matrix, drawing models, and the skybox.
   - The `resize` method handles window resize events by resizing the viewport.

## 3. How does your code fit together and how should a programmer navigate it?
   - The `SceneBasic_Uniform` class encapsulates the rendering logic of the entire scene, with its methods organized into functional modules for easy understanding and maintenance.
   - Programmers can navigate through the various methods of the `SceneBasic_Uniform` class to understand the rendering flow of the entire scene, such as initializing the scene in the `initScene` method, updating the scene in the `update` method, and rendering the scene in the `render` method.
   - Shader program loading and compilation are handled in the `compile` method, where developers can inspect the specific implementations to understand how shader programs work.
   - By examining the method call relationships and parameter passing in each method, developers can gain a clear understanding of how the entire rendering process is accomplished, allowing for necessary debugging and modifications.


## Video Link

https://youtu.be/PYJDEDQ-qzg

## Project Git Repository

https://github.com/YinianZhang/COMP3015-Coursework1
