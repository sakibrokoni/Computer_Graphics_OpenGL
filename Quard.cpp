#include <math.h>
#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

void init()
{
    glClearColor(0, 1, 1, 0.0f);
    glOrtho(-30, 30, -30, 30, -30, 30);


}

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0, 0, 0);
    glRectf(3, 0, 7, 5);


    glFlush();

}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("191-15-12961");
    init();
    glutDisplayFunc(myDisplay);
    glutMainLoop();
    return 0;
}