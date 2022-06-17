#include <windows.h>
#include <GL/glut.h>
#include<Math.h>
void simple_circle()
{
    int i = 0, r = 3;
    float x = 0, y = 0;

    glBegin(GL_TRIANGLE_FAN);

    for (i = 0;i < 360;i++)
    {
        x += cos(i * 3.14 / 180) * r;
        y += sin(i * 3.14 / 180) * r;
        glVertex2f(x, y);
    }

    glEnd();
}


void display() {

    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0, 0.0, 0.0);
    simple_circle();


    glFlush();
}
void init() {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glOrtho(-800.0, 800.0, -800.0, 800.0, -1.0, 1.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Circle");
    glutInitWindowSize(800, 500);
    glutInitWindowPosition(100, 100);
    init();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}