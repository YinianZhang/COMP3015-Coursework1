# COMP3015-Coursework1

## Project Development Environment

- **Visual Studio Version:** [17.1.2]
- **Operating System:** [Windows 10 Home Chinese Version]

## 1. How to Control

To run the program, double-click on the executable file (exe). Ensure that complete documentation, including images and OBJ file documentation, is available. Once the program is running, you can use the keyboard to navigate the 3D room and interact with it.

Users can control actions using the following keys:

- **A, D, S, W**: Move the viewer left, right, backward, and forward, respectively.
- **Z**: Move the viewer down.
- **X**: Move the viewer up.
- **Q**: Reset the viewer's position and orientation.
- **V**: Open the door.
- **C**: Close the door.
- **1**: TV displays the developer's signature.
- **2**: TV displays the TV interface.

## 2. How it Works and Details
  
- opengl.cpp: This is the main program file responsible for several crucial tasks. It handles the initialization of GLFW and GLAD, ensuring that the OpenGL environment is set up correctly. Additionally, it takes charge of loading texture images and OBJ models. Furthermore, it kickstarts the primary loop responsible for user interaction and real-time rendering.

- Utils.cpp: In this file, you'll find the Utils class, which plays a pivotal role in the project. Its responsibilities include shader loading, compiling, and linking. Moreover, it handles the critical task of texture loading, ensuring that textures are applied accurately.

- Sphere.cpp: This file defines two essential classes, namely Box3D and Sphere. These classes are responsible for managing 3D vertices and creating box-shaped objects. These objects are specifically designed for seamless integration into OpenGL's Vertex Buffer Object (VBO), facilitating efficient rendering.

- ImportedModel.cpp: Within this file, you'll discover the ImportedModel and ModelImporter classes. These classes serve a crucial function by enabling the reading of OBJ files and subsequently loading them into OpenGL's VBO. This process is essential for incorporating external 3D models into the project seamlessly.

## 3. Idea

- The 3D room project involves the download and integration of pre-existing OBJ models, such as tables and chairs, from online sources. These models are then enhanced by applying carefully selected textures, resulting in a visually appealing environment. The initial inspiration for this project came from a 3D room demonstration by a teacher, which served as a creative spark.

- One of the standout features of the Snail Dwelling project is the TV display, which showcases the author's unique signature rendering. This not only adds a personal touch but also highlights the project's individuality. Additionally, the project includes a door mechanism, allowing users to open and close it, adding a layer of realism to the virtual room.

- While the project has come a long way, there is still room for aesthetic improvements when compared to other 3D environments. Continuous refinement is an ongoing goal, with opportunities for further enhancement. The journey began with downloading Visual Studio 2022, followed by the meticulous setup of the OpenGL environment, incorporating essential libraries such as GLFW, GLAD, and glm. Furthermore, 3D models and high-quality textures were acquired and integrated into the scene.

- The development process included creating windows, constructing detailed room layouts, loading intricate 3D models, and achieving realistic rendering of both the room and its contents. Finally, interactive elements were implemented, allowing users to engage with the virtual environment.

- In summary, the 3D room project blends creativity, technical skill, and a commitment to continuous improvement, resulting in a captivating digital experience.

## Video Link

https://youtu.be/y8KYysSkAFM

## Project Git Repository

https://github.com/YinianZhang/Coursework2-COMP3016
