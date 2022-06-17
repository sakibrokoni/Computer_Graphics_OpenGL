#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>


static float tx = -90, ty = 0;

void quad_move()
{
    tx += .1;
    //ty+=.01;
    if (tx > 200)
    {
        tx = -90;
    }

    glutPostRedisplay();
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glTranslatef(tx, ty, 0);
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 1.0f);
    glVertex2f(10.0f, 4.0f);
    glVertex2f(6.0f, -4.0f);
    glVertex2f(-6.0f, -4.0f);
    glVertex2f(-10.0f, 4.0f);
    glEnd();

    glPopMatrix();


    //glutPostRedisplay();

    quad_move();

    glFlush();
}


void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Transformation");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}