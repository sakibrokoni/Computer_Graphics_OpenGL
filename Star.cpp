#include <windows.h>
#include <GL/glut.h>


void initGL() {

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(-0.8f, 0.0f);
    glVertex2f(-0.2f, 0.0f);
    glVertex2f(-0.4f, -0.4f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(-0.2f, 0.0f);
    glVertex2f(0.0f, 0.6f);
    glVertex2f(0.2f, -0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.2f, 0.0f);
    glVertex2f(0.8f, 0.0f);
    glVertex2f(0.4f, -0.4f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.4f, -0.4f);
    glVertex2f(0.6f, -0.9f);
    glVertex2f(0.0f, -0.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.0f, -0.5f);
    glVertex2f(-0.6f, -0.9f);
    glVertex2f(-0.4f, -0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(-0.2f, 0.0f);
    glVertex2f(0.2f, 0.0f);
    glVertex2f(0.4f, -0.4f);
    glVertex2f(0.0f, -0.5f);
    glVertex2f(-0.4f, -0.4f);


    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Star");
    glutInitWindowSize(320, 320);
    glutDisplayFunc(display);
    initGL();
    glutMainLoop();
    return 0;
}