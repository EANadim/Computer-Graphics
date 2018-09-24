#include <stdio.h>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplayWithColorTriangle();
void myDisplayWithColorRectangle();
void myDisplayWithoutColorTriangle();
void myDisplayWithoutColorRectangle();
void myDisplayBoat();
void myInit1();
void myInit2();
void myInit3();
void myInit4();
void myInit5();

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_MULTISAMPLE | GLUT_RGB);
    glutInitWindowSize (1024, 768);
    glutInitWindowPosition (0, 0);
    glutCreateWindow ("Triangle with color");
    glutDisplayFunc(myDisplayWithColorTriangle);
    myInit1 ();

    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_MULTISAMPLE | GLUT_RGB);
    glutInitWindowSize (1024, 768);
    glutInitWindowPosition (0, 0);
    glutCreateWindow ("Rectangle with color");
    glutDisplayFunc(myDisplayWithColorRectangle);
    myInit2 ();

    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_MULTISAMPLE | GLUT_RGB);
    glutInitWindowSize (1024, 768);
    glutInitWindowPosition (0, 0);
    glutCreateWindow ("Triangle without color");
    glutDisplayFunc(myDisplayWithoutColorTriangle);
    myInit3 ();

    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_MULTISAMPLE | GLUT_RGB);
    glutInitWindowSize (1024, 768);
    glutInitWindowPosition (0, 0);
    glutCreateWindow ("Rectangle without color");
    glutDisplayFunc(myDisplayWithoutColorRectangle);
    myInit4 ();

    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_MULTISAMPLE | GLUT_RGB);
    glutInitWindowSize (1024, 768);
    glutInitWindowPosition (0, 0);
    glutCreateWindow ("Ship");
    glutDisplayFunc(myDisplayBoat);
    myInit5 ();

    glutMainLoop();
    return 0;
}
void myDisplayWithColorTriangle(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_TRIANGLES);
    glVertex2i(100, 50);
    glVertex2i(100, 130);
    glVertex2i(150, 130);
    glEnd();
    glFlush ();
}
void myDisplayWithColorRectangle()
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POLYGON);
    glVertex2i(200, 100);
    glVertex2i(200, 200);
    glVertex2i(100, 200);
    glVertex2i(100,100);
    glEnd();
    glFlush ();
}
void myDisplayWithoutColorTriangle()
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex2i(200, 100);
    glVertex2i(200, 200);
    glVertex2i(100, 200);
    glEnd();
    glFlush ();
}
void myDisplayWithoutColorRectangle()
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex2i(200, 100);
    glVertex2i(200, 200);
    glVertex2i(100, 200);
    glVertex2i(100,100);
    glEnd();
    glFlush ();
}
void myDisplayBoat()
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);
    glPointSize(5.0);

    glBegin(GL_POLYGON);
    glVertex2i(310, 100);
    glVertex2i(340, 200);
    glVertex2i(70, 200);
    glVertex2i(100,100);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2i(150, 200);
    glVertex2i(150, 300);
    glVertex2i(100, 300);
    glVertex2i(100,200);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2i(230, 200);
    glVertex2i(230, 300);
    glVertex2i(180, 300);
    glVertex2i(180,200);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2i(310, 200);
    glVertex2i(310, 300);
    glVertex2i(260, 300);
    glVertex2i(260,200);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(130, 330);
    glVertex2i(130, 360);
    glVertex2i(100, 360);
    glVertex2i(100,330);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(160, 390);
    glVertex2i(160, 420);
    glVertex2i(130, 420);
    glVertex2i(130,390);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(190, 450);
    glVertex2i(190, 480);
    glVertex2i(160, 480);
    glVertex2i(160,450);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(180, 330);
    glVertex2i(210, 330);
    glVertex2i(210, 360);
    glVertex2i(180,360);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(210, 390);
    glVertex2i(240, 390);
    glVertex2i(240, 420);
    glVertex2i(210,420);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(240, 450);
    glVertex2i(270, 450);
    glVertex2i(270, 480);
    glVertex2i(240,480);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(260, 330);
    glVertex2i(290, 330);
    glVertex2i(290, 360);
    glVertex2i(260,360);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(290, 390);
    glVertex2i(320, 390);
    glVertex2i(320, 420);
    glVertex2i(290,420);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(320, 450);
    glVertex2i(350, 450);
    glVertex2i(350, 480);
    glVertex2i(320,480);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(100, 280);
    glVertex2i(150, 280);
    glVertex2i(150, 300);
    glVertex2i(100,300);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(180, 280);
    glVertex2i(230, 280);
    glVertex2i(230, 300);
    glVertex2i(180,300);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(260, 280);
    glVertex2i(310, 280);
    glVertex2i(310, 300);
    glVertex2i(260,300);
    glEnd();

    glFlush ();
}
void myInit1 (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
void myInit2 (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
void myInit3 (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
void myInit4 (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
void myInit5 (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
