#include<GL/glut.h>

void Display(void)
{
  //clear all pixels with the specified clear color
  glClear(GL_COLOR_BUFFER_BIT);
  //don't wait, start flushing OpenGL calls to display buffer
  glFlush();
}

void init(void)
{
  //set clear color to be red
  glClearColor(1.0, 0.0, 1.0, 0.0);
  //set the viewport to be 320 by 240, the initial size of the window
  glViewport(0, 0, 320, 240);
  //set the 2D clipping area
  gluOrtho2D(0.0, 160.0, 0.0, 120.0);
}

int main(int argc, char* argv0[])
{
  glutInit(&argc, argv0);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize(320, 240);
  glutCreateWindow("My First OpenGL Window");
  init();
  glutDisplayFunc(Display);
  glutMainLoop();

  return 0;
}
