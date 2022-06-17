#include <windows.h>
#include <GL/glut.h>

void display() {
  glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
  glOrtho(-4, 4, -4, 4, -4, 4);
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(1.0f, 0.0f, 1.0f);
  glRectf(5, 3, 5, 3);
  glColor3f(0.0f, 1.0f, 0.0f);
  glRectf(4, 2, 6, 5);
  glColor3f(1.0f, 0.0f, 1.0f);
  glRectf(6, 2, 8, 5);
  glColor3f(0.0f, 1.0f, 0.0f);
  glRectf(8, 2, 10, 5);

  glFlush();
}

int main(int argc, char** argv) {
  glutInit(&argc, argv);
  glutCreateWindow("191-15-12961");
  glutInitWindowSize(320, 320);
  glutInitWindowPosition(50, 50);
  glutDisplayFunc(display);
  glutMainLoop();

  return 0;
}