#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

static float tx = 0.0;
static float ty = 0.0;

float _angle = 30.0f;
float _cameraAngle = 0.0f;
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    //glTranslatef(0.0f, -1.0f, 0.0f);
    //glRotatef(_cameraAngle, 0.0f, 0.0f, -1.0f);

    glTranslatef(tx, ty, 0);
    //glTranslatef(0.0f, -1.0f, 0.0f);
    glRotatef(_angle, 0.0f, 0.0f, -1.0f);

    //1st square
    glColor3f(1.0, 1.0, 1.0);
    glRectf(-25.0, -25.0, 25.0, 25.0);

    //2nd square
    glColor3f(0.0, 0.0, 0.0);
    glRectf(-25.0 + 10, -25.0 + 10, 25.0 - 10, 25.0 - 10);

    //3RD SQUARE
    glColor3f(1.0, 1.0, 1.0);
    glRectf(-25.0 + 15, -25.0 + 15, 25.0 - 15, 25.0 - 15);

    //
    glPopMatrix();

    glFlush();
    glutSwapBuffers();
}

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);
}

void spe_key(int key, int x, int y)
{

    switch (key)
    {

    case GLUT_KEY_LEFT:
        tx -= 5;
        glutPostRedisplay();
        break;

    case GLUT_KEY_RIGHT:
        tx += 5;
        glutPostRedisplay();
        break;

    case GLUT_KEY_DOWN:
        ty -= 5;
        glutPostRedisplay();
        break;

    case GLUT_KEY_UP:
        ty += 5;
        glutPostRedisplay();
        break;

        //mouse
    case GLUT_RIGHT_BUTTON:
        _angle += 5;
        glutPostRedisplay();
        break;

    case GLUT_LEFT_BUTTON:
        _angle -= 5;
        glutPostRedisplay();
        break;

    default:
        break;
    }
}
void update(int value)
{
    _angle += 2.0f;
    if (_angle > 360)
    {
        _angle -= 360;
    }

    glutPostRedisplay();
    glutTimerFunc(25, update, 0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Transformation");
    init();
    glutDisplayFunc(display);
    glutSpecialFunc(spe_key);
    glutTimerFunc(30, update, 0);
    glutMainLoop();
    return 0;
}
