#include <stdio.h>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplayBoat();
float transFactor = 0.0f;

float getX(int val)
{
    int width = glutGet(GLUT_WINDOW_WIDTH);
    float frac = (float)val/((float)width/2);
    return frac;
}
float getY(int val)
{
    int height = glutGet(GLUT_WINDOW_HEIGHT);
    float frac = (float)val/((float)height/2);
    return frac;
}
void update(int value)
{
    transFactor+=0.01f;
    if(transFactor>getX(glutGet(GLUT_WINDOW_WIDTH)))
       transFactor = -1 * getX(100 * 2);
    glutPostRedisplay();
    glutTimerFunc(20,update,0);
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (1024, 768);
    glutInitWindowPosition (0, 0);
    glutCreateWindow ("Ship");
    glutDisplayFunc(myDisplayBoat);
    glutTimerFunc(20,update,0);
    glutMainLoop();
    return 0;
}


void myDisplayBoat()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(255,255,0);
    glPushMatrix();
    glTranslatef(transFactor,-0.5,0);

    glBegin(GL_POLYGON);
    glVertex2f(getX(-310),getY(100));
    glVertex2f(getX(-340),getY(200));
    glVertex2f(getX(-70),getY(200));
    glVertex2f(getX(-100),getY(100));
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(getX(-150),getY(200));
    glVertex2f(getX(-150),getY(300));
    glVertex2f(getX(-100),getY(300));
    glVertex2f(getX(-100),getY(200));
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(getX(-230),getY(200));
    glVertex2f(getX(-230),getY(300));
    glVertex2f(getX(-180),getY(300));
    glVertex2f(getX(-180),getY(200));
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(getX(-310),getY(200));
    glVertex2f(getX(-310),getY(300));
    glVertex2f(getX(-260),getY(300));
    glVertex2f(getX(-260),getY(200));
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(getX(-130),getY(330));
    glVertex2f(getX(-130),getY(360));
    glVertex2f(getX(-100),getY(360));
    glVertex2f(getX(-100),getY(330));
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(getX(-160),getY(390));
    glVertex2f(getX(-160),getY(420));
    glVertex2f(getX(-130),getY(420));
    glVertex2f(getX(-130),getY(390));
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(getX(-190),getY(450));
    glVertex2f(getX(-190),getY(480));
    glVertex2f(getX(-160),getY(480));
    glVertex2f(getX(-160),getY(450));
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(getX(-180),getY(330));
    glVertex2f(getX(-210),getY(330));
    glVertex2f(getX(-210),getY(360));
    glVertex2f(getX(-180),getY(360));
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(getX(-210),getY(390));
    glVertex2f(getX(-240),getY(390));
    glVertex2f(getX(-240),getY(420));
    glVertex2f(getX(-210),getY(420));
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(getX(-240),getY(450));
    glVertex2f(getX(-270),getY(450));
    glVertex2f(getX(-270),getY(480));
    glVertex2f(getX(-240),getY(480));
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(getX(-260),getY( 330));
    glVertex2f(getX(-290),getY( 330));
    glVertex2f(getX(-290),getY( 360));
    glVertex2f(getX(-260),getY(360));
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(getX(-290),getY(390));
    glVertex2f(getX(-320),getY(390));
    glVertex2f(getX(-320),getY(420));
    glVertex2f(getX(-290),getY(420));
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(getX(-320),getY(450));
    glVertex2f(getX(-350),getY(450));
    glVertex2f(getX(-350),getY(480));
    glVertex2f(getX(-320),getY(480));
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(getX(-100),getY(280));
    glVertex2f(getX(-150),getY(280));
    glVertex2f(getX(-150),getY(300));
    glVertex2f(getX(-100),getY(300));
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(getX(-180),getY(280));
    glVertex2f(getX(-230),getY(280));
    glVertex2f(getX(-230),getY(300));
    glVertex2f(getX(-180),getY(300));
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(getX(-260),getY(280));
    glVertex2f(getX(-310),getY(280));
    glVertex2f(getX(-310),getY(300));
    glVertex2f(getX(-260),getY(300));
    glEnd();
    glPopMatrix();
    glutSwapBuffers();
}

