#include<windows.h>
#include <math.h>
#include <GL/glut.h>
#include <stdlib.h>
float tx = 0;
float ty = 0;
float spin = 0.0;
void init()
{
    glClearColor(0.5f, 0.5f, 0.5f, 0.0f);
    glOrtho(-85, 85, -85, 85, 0, 100);
}
void keyPressed(unsigned char key, int x, int y) {
    if (key == 'l')
        spin += 4;
    else if (key == 'r')
        spin -= 4;
    glutPostRedisplay();
}

void myKeyboard(int key, int x, int y) {

    switch (key)
    {
    case GLUT_KEY_LEFT:
        tx = tx - 5;
        glutPostRedisplay();
        break;

    case GLUT_KEY_RIGHT:
        tx = tx + 5;
        glutPostRedisplay();
        break;

    case GLUT_KEY_DOWN:
        ty = ty - 5;
        glutPostRedisplay();
        break;

    case GLUT_KEY_UP:
        ty = ty + 5;
        glutPostRedisplay();
        break;

    default:
        break;

    }
}
void right_up()
{
    int x1 = 45, x2 = 55, y1 = 45, y2 = 55;
    int i;
    for (i = 0;i < 4;i++)
    {
        if (i % 2 == 0) {
            glColor3ub(0, 0, 0);
        }
        else {
            glColor3ub(255, 255, 255);
        }
        glRectf(x1, y1, x2, y2);
        x1 = x1 + 10;
        x2 = x2 + 10;
        y1 = y1 + 10;
        y2 = y2 + 10;

    }

}
void left_down()
{
    int x1 = -45, x2 = -55, y1 = -45, y2 = -55;
    int i;
    for (i = 0;i < 4;i++)
    {
        if (i % 2 == 0) {
            glColor3ub(0, 0, 0);
        }
        else {
            glColor3ub(255, 255, 255);
        }
        glRectf(x1, y1, x2, y2);
        x1 = x1 - 10;
        x2 = x2 - 10;
        y1 = y1 - 10;
        y2 = y2 - 10;

    }

}
void left_up()
{

    int x1 = -45, x2 = -55, y1 = 45, y2 = 55;
    int i;
    for (i = 0;i < 4;i++)
    {
        if (i % 2 == 0) {
            glColor3ub(0, 0, 0);
        }
        else {
            glColor3ub(255, 255, 255);
        }
        glRectf(x1, y1, x2, y2);
        x1 = x1 - 10;
        x2 = x2 - 10;
        y1 = y1 + 10;
        y2 = y2 + 10;

    }
}
void right_down()
{

    int x1 = 45, x2 = 55, y1 = -45, y2 = -55;
    int i;
    for (i = 0;i < 4;i++)
    {
        if (i % 2 == 0) {
            glColor3ub(0, 0, 0);
        }
        else {
            glColor3ub(255, 255, 255);
        }
        glRectf(x1, y1, x2, y2);
        x1 = x1 + 10;
        x2 = x2 + 10;
        y1 = y1 - 10;
        y2 = y2 - 10;

    }
}

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);


    glPushMatrix();
    glTranslatef(tx, ty, 0);
    glRotatef(spin, 0.0, 0.0, 1.0);
    glColor3ub(255, 255, 255);
    glRectf(-25, -25, 25, 25);
    glColor3ub(0, 0, 0);
    glRectf(-20, -20, 20, 20);
    glColor3ub(255, 255, 255);
    glRectf(-10, -10, 10, 10);
    glColor3ub(0, 0, 0);
    glRectf(25, 25, 35, 35);
    glColor3ub(0, 0, 0);
    glRectf(-25, -25, -35, -35);
    glColor3ub(0, 0, 0);
    glRectf(-25, 25, -35, 35);
    glColor3ub(0, 0, 0);
    glRectf(25, -25, 35, -35);

    glPopMatrix();
    right_down();
    right_up();
    left_up();
    left_down();


    glFlush();
}



int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("LAB");
    init();
    glutDisplayFunc(myDisplay);
    glutSpecialFunc(myKeyboard);
    glutKeyboardFunc(keyPressed);
    glutMainLoop();

    return 0;


}
