/*
  Code Modified by :
  Name  : Anggiat Maruli Tua M
  ID    : 11S16051
*/
#include<GL/glut.h>

void init(void)
{
  glClearColor(1.0, 1.0, 1.0, 0.0);
  glMatrixMode(GL_PROJECTION);
  gluOrtho2D(0.0, 200.0, 0.0, 150.0);
}

void lineSegment(void)
{
  glClear(GL_COLOR_BUFFER_BIT);

  glColor3f(0.0, 0.4, 0.2);
  glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(50, 50);
    glVertex2f(70, 90);
    glVertex2f(90, 50);
    glVertex2f(65, 145);
  glEnd();

  glFlush();
}

int main(int argc, char** argv)
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowPosition(550, 200);
  glutInitWindowSize(400, 300);
  glutCreateWindow("OpenGL GL_TRIANGLE_STRIP");

  init();
  glutDisplayFunc(lineSegment);
  glutMainLoop();
  return 0;
}
