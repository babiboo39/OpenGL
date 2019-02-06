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
  /***awal nilai koordinat dalam array***/
  int p1 [] = {50, 100};
  int p2 [] = {60, 100};
  int p3 [] = {70, 100};
  int p4 [] = {80, 100};
  int p5 [] = {90, 100};
  int p6 [] = {100, 100};
  int p7 [] = {110, 100};
  int p8 [] = {120, 100};
  int p9 [] = {130, 100};
  int p10 [] = {140, 100};
  int p11 [] = {150, 100};
  /***akhir nilai koordinat dalam aray***/
  glClear(GL_COLOR_BUFFER_BIT);

  glColor3f(0.0, 0.4, 0.2);
  glBegin(GL_LINES);
    glVertex2iv(p1);
    glVertex2iv(p2);
    glVertex2iv(p3);
    glVertex2iv(p4);
    glVertex2iv(p5);
    glVertex2iv(p6);
    glVertex2iv(p7);
    glVertex2iv(p8);
    glVertex2iv(p9);
    glVertex2iv(p10);
    glVertex2iv(p11);
  glEnd();

  glFlush();
}

int main(int argc, char** argv)
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowPosition(550, 200);
  glutInitWindowSize(400, 300);
  glutCreateWindow("OpenGL GL_LINES");

  init();
  glutDisplayFunc(lineSegment);
  glutMainLoop();
  return 0;
}
