#include <windows.h>
#include <GL/glut.h>
void init() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glOrtho(-4, 4, -4, 4, -4, 4);
}

void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glOrtho(-4, 4, -4, 4, -4, 4);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_TRIANGLES);

    //Roof Top
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-7, 7);
    glVertex2f(0, 15);
    glVertex2f(7, 7);
    glEnd();




    //body
    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(7, 7, -7, -7);

    //Left Window
    glColor3f(0.5f, 0.0f, 0.0f);
    glRectf(-6, 3, -2, -1);

    //Right Window
    glColor3f(0.5f, 0.0f, 0.0f);
    glRectf(6, 3, 2, -1);

    //Door
    glColor3f(0.0f, 0.0f, 1.0f);
    glRectf(-0.9, 4, 0.9, -7);


    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    init();
    glutCreateWindow("Home Design_ 191-15-12961");
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(50, 50);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}