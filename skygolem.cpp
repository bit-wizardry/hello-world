#include "SOIL/SOIL.h"
#include <GL/freeglut.h> 
#include <stdlib.h> 
#include <stdio.h>
#include "Sprite.h"
#include "Sprite.cpp"

Sprite* background;
Sprite* player;
GLuint texture;

#pragma warning(disable: 4996)

const bool LoadTextures()
{
  background = new Sprite(1);
  background->SetFrameSize(1877.0f, 600.0f);
  background->SetNumberOfFrames(1);
  background->AddTexture("background.gif", false);
  background->IsVisible(true);
  background->IsActive(true);
  background->SetVelocity(-50.0f);
  
  return true;
}

void initGL() {
    glClearColor(0.0f, 0.0f ,0.0f , 1.0f);
    glEnable(GL_TEXTURE_2D);
    glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
}

void Render() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    background->Render();
    glutSwapBuffers(/*hDC*/);
}

void Update(const float p_deltaTime) {
    background->Update(p_deltaTime);
}

void StartGame() {
    LoadTextures();
}
void GameLoop(const float p_deltatTime) {
    Update(p_deltatTime);
    Render();
}
int main(int argc, char** argv)
{   
    glutInit(&argc, argv);
    glutCreateWindow("Sky Golem");
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(50, 50);
	//glutDisplayFunc(Update, 1.1f);
    initGL();
    glutMainLoop();
	return 0;
}
