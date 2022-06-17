#include <math.h>
#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

void init()
{
    glClearColor(0, 0, 1, 0.0f);
    glOrtho(-70, 70, -70, 70, -70, 70);


}

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1, 1, 1);
    int a = 10, b = 5, c = 0, d = 5;
    for (int i = 0; i < 15; i++) {
        if (i % 2 == 0) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0, 0, 0);
        }
        glRectf(a, c, b, d);
        a = a + 5;
        b = b + 5;
        c = c + 5;
        d = d + 5;
    }

    glFlush();

}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("191-15-12961");
    init();
    glutDisplayFunc(myDisplay);
    glutMainLoop();
    return 0;
}