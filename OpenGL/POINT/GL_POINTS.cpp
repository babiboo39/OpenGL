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
  glBegin(GL_POINTS);
    glVertex2i(50, 100);
    glVertex2i(60, 100);
    glVertex2i(70, 100);
    glVertex2i(80, 100);
    glVertex2i(90, 100);
    glVertex2i(100, 100);
    glVertex2i(110, 100);
    glVertex2i(120, 100);
    glVertex2i(130, 100);
    glVertex2i(140, 100);
    glVertex2i(150, 100);
  glEnd();

  glFlush();
}

int main(int argc, char** argv)
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowPosition(550, 200);
  glutInitWindowSize(400, 300);
  glutCreateWindow("OpenGL GL_POINTS");

  init();
  glutDisplayFunc(lineSegment);
  glutMainLoop();
  return 0;
}
