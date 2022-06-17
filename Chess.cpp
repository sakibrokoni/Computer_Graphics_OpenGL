#include <windows.h>
#include <GL/glut.h>


void init(void) {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 8.0, 0.0, 8.0);
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    bool color_change = false;
    for (int x = 0; x <= 8; x += 1) {
        for (int y = 0; y <= 8; y += 1) {
            if (color_change) {
                glColor3f(1.0, 1.0, 1.0);
                color_change = !color_change;
            }
            else {
                glColor3f(0.0, 0.0, 0.0);
                color_change = !color_change;
            }
            glBegin(GL_QUADS);
            glVertex2i(x, y);
            glVertex2i(x, y + 1);
            glVertex2i(x + 1, y + 1);
            glVertex2i(x + 1, y);

            glEnd();
            glFlush();
        }
    }

}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Chess");
    glutInitWindowSize(320, 320);
    glutDisplayFunc(display);
    init();
    glutMainLoop();
    return 0;
}