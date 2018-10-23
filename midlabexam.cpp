#include <bits/stdc++.h>
#include <stdio.h>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);

    glColor3f (1.0, 1.0, 0.0);//whole yellow
    glPointSize(5.0);
    glBegin(GL_POLYGON);
    glVertex2i(0,0);
    glVertex2i(400,0);
    glVertex2i(400,200);
    glVertex2i(0,200);
    glEnd();


    glColor3f (1, 0.87, 0.02);//deep yellow of upper left
    glPointSize(5.0);
    glBegin(GL_POLYGON);
    glVertex2i(0,100);
    glVertex2i(100,100);
    glVertex2i(100,200);
    glVertex2i(0,200);
    glEnd();

    glColor3f (1, 0.87, 0.02);//deep yellow of middle lower
    glPointSize(5.0);
    glBegin(GL_POLYGON);
    glVertex2i(100,0);
    glVertex2i(200,0);
    glVertex2i(200,100);
    glVertex2i(100,100);
    glEnd();

    glColor3f (1, 0.87, 0.02);//deep yellow of middle upper
    glPointSize(5.0);
    glBegin(GL_POLYGON);
    glVertex2i(200,100);
    glVertex2i(300,100);
    glVertex2i(300,200);
    glVertex2i(200,200);
    glEnd();

    glColor3f (1, 0.87, 0.02);//deep yellow of upper right
    glPointSize(5.0);
    glBegin(GL_POLYGON);
    glVertex2i(300,0);
    glVertex2i(400,0);
    glVertex2i(400,100);
    glVertex2i(300,100);
    glEnd();

    glColor3f (0.0, 0.0, 0.0);//The whole black I
    glPointSize(5.0);
    glBegin(GL_POLYGON);
    glVertex2i(40,20);
    glVertex2i(60,20);
    glVertex2i(60,180);
    glVertex2i(40,180);
    glEnd();

    glColor3f (0.0, 0.0, 0.0);//Right side of U
    glPointSize(5.0);
    glBegin(GL_POLYGON);
    glVertex2i(360,40);
    glVertex2i(380,40);
    glVertex2i(380,180);
    glVertex2i(360,180);
    glEnd();

    glColor3f (0.0, 0.0, 0.0);//Left side of U
    glPointSize(5.0);
    glBegin(GL_POLYGON);
    glVertex2i(300,40);
    glVertex2i(320,40);
    glVertex2i(320,180);
    glVertex2i(300,180);
    glEnd();

    glColor3f (0.0, 0.0, 0.0);//Bottom of U
    glPointSize(5.0);
    glBegin(GL_POLYGON);
    glVertex2i(320,20);
    glVertex2i(360,20);
    glVertex2i(360,40);
    glVertex2i(320,40);
    glEnd();


    glColor3f (0.0, 0.0, 0.0);//left side of bottom of U
    glPointSize(5.0);
    glBegin(GL_POLYGON);
    glVertex2i(310,30);
    glVertex2i(330,30);
    glVertex2i(330,50);
    glVertex2i(310,50);
    glEnd();


    glColor3f (0.0, 0.0, 0.0);//right side of bottom of U
    glPointSize(5.0);
    glBegin(GL_POLYGON);
    glVertex2i(350,30);
    glVertex2i(370,30);
    glVertex2i(370,50);
    glVertex2i(350,50);
    glEnd();

    glColor3f (1.0, 0.0, 0.0);//left upper love
    glPointSize(5.0);
    glBegin(GL_POLYGON);
    glVertex2i(120,170);
    glVertex2i(150,170);
    glVertex2i(150,180);
    glVertex2i(120,180);
    glEnd();

    glColor3f (1.0, 0.0, 0.0);//right upper love
    glPointSize(5.0);
    glBegin(GL_POLYGON);
    glVertex2i(200,170);
    glVertex2i(230,170);
    glVertex2i(230,180);
    glVertex2i(200,180);
    glEnd();

    glColor3f (1.0, 0.0, 0.0);//middle cube of love
    glBegin(GL_POLYGON);
    glVertex2i(110,90);
    glVertex2i(240,90);
    glVertex2i(240,170);
    glVertex2i(110,170);
    glEnd();

    glColor3f (1.0, 0.0, 0.0);//bottom of love
    glPointSize(5.0);
    glBegin(GL_POLYGON);
    glVertex2i(170,20);
    glVertex2i(180,20);
    glVertex2i(180,30);
    glVertex2i(170,30);
    glEnd();

    int xx1=160,xx2=170,yy1=30,yy2=40;
    while(xx1>=110)
    {
        glColor3f (1.0, 0.0, 0.0);//bottom left angular border of love
        glPointSize(5.0);
        glBegin(GL_POLYGON);
        glVertex2i(xx1,yy1);
        glVertex2i(xx2,yy1);
        glVertex2i(xx2,yy2);
        glVertex2i(xx1,yy2);
        glEnd();

        xx1=xx1-10;
        xx2=xx2-10;
        yy1=yy1+10;
        yy2=yy2+10;
    }
    xx1=180;
    xx2=190;
    yy1=30;
    yy2=40;
    while(xx2<=240)
    {
        glColor3f (1.0, 0.0, 0.0);//bottom right angular border of love
        glPointSize(5.0);
        glBegin(GL_POLYGON);
        glVertex2i(xx1,yy1);
        glVertex2i(xx2,yy1);
        glVertex2i(xx2,yy2);
        glVertex2i(xx1,yy2);
        glEnd();

        xx1=xx1+10;
        xx2=xx2+10;
        yy1=yy1+10;
        yy2=yy2+10;
    }

    glColor3f (1.0, 0.0, 0.0);//bottom triangle of love filled color
    glPointSize(5.0);
    glBegin(GL_POLYGON);
    glVertex2i(170,30);
    glVertex2i(180,30);
    glVertex2i(240,90);
    glVertex2i(110,90);
    glEnd();

    glColor3f (1.0, 1.0, 1.0);//white shade on love
    glPointSize(5.0);
    glBegin(GL_POLYGON);
    glVertex2i(130,150);
    glVertex2i(140,150);
    glVertex2i(140,160);
    glVertex2i(130,160);
    glEnd();

    glColor3f (1.0, 1.0, 1.0);//white shade on love
    glPointSize(5.0);
    glBegin(GL_POLYGON);
    glVertex2i(120,140);
    glVertex2i(130,140);
    glVertex2i(130,150);
    glVertex2i(120,150);
    glEnd();

    glColor3f (1.0, 1.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POLYGON);
    glVertex2i(150,160);
    glVertex2i(200,160);
    glVertex2i(200,170);
    glVertex2i(150,170);
    glEnd();

    glFlush ();
}
void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(0.0, 400.0, 0.0, 200.0);
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (400, 200);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("I love U !");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();
    return 0;
}
