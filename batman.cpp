#include <stdio.h>
#include <GL/glut.h>
void myDisplay(void)
{
    int xx1,yy1,xx2,yy2;
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (0.0, 0.0, 0.0);
    glPointSize(5.0);

    glBegin(GL_POLYGON);//bottom border
    glVertex2i(70,0);
    glVertex2i(310,0);
    glVertex2i(310,10);
    glVertex2i(70,10);
    glEnd();

    glBegin(GL_POLYGON);//top border
    glVertex2i(70,240);
    glVertex2i(310,240);
    glVertex2i(310,250);
    glVertex2i(70,250);
    glEnd();

    glBegin(GL_POLYGON);//left straight border
    glVertex2i(0,70);
    glVertex2i(10,70);
    glVertex2i(10,180);
    glVertex2i(0,180);
    glEnd();

    glBegin(GL_POLYGON);//right straight border
    glVertex2i(370,70);
    glVertex2i(380,70);
    glVertex2i(380,180);
    glVertex2i(370,180);
    glEnd();

    glBegin(GL_POLYGON);//left straight wing
    glVertex2i(30,80);
    glVertex2i(40,80);
    glVertex2i(40,170);
    glVertex2i(30,170);
    glEnd();

    glBegin(GL_POLYGON);//right straight wing
    glVertex2i(340,80);
    glVertex2i(350,80);
    glVertex2i(350,170);
    glVertex2i(340,170);
    glEnd();

    xx1=10;
    xx2=20;
    yy1=180;
    yy2=190;
    while(yy2<=250)
    {
        glBegin(GL_POLYGON);//upper left angular border
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

    xx1=10;
    xx2=20;
    yy1=60;
    yy2=70;
    while(yy1>=0)
    {
        glBegin(GL_POLYGON);//bottom left angular border
        glVertex2i(xx1,yy1);
        glVertex2i(xx2,yy1);
        glVertex2i(xx2,yy2);
        glVertex2i(xx1,yy2);
        glEnd();

        xx1=xx1+10;
        xx2=xx2+10;
        yy1=yy1-10;
        yy2=yy2-10;
    }

    xx1=360;
    xx2=370;
    yy1=180;
    yy2=190;
    while(yy2<=250)
    {
        glBegin(GL_POLYGON);//upper right  angular border
        glVertex2i(xx1,yy1);
        glVertex2i(xx2,yy1);
        glVertex2i(xx2,yy2);
        glVertex2i(xx1,yy2);
        glEnd();

        xx1=xx1-10;
        xx2=xx2-10 ;
        yy1=yy1+10;
        yy2=yy2+10;
    }

    xx1=310;
    xx2=320;
    yy1=10;
    yy2=20;
    while(xx2<=380)
    {
        glBegin(GL_POLYGON);//bottom right  angular border
        glVertex2i(xx1,yy1);
        glVertex2i(xx2,yy1);
        glVertex2i(xx2,yy2);
        glVertex2i(xx1,yy2);
        glEnd();

        xx1=xx1+10;
        xx2=xx2+10 ;
        yy1=yy1+10;
        yy2=yy2+10;
    }

    xx1=30;
    xx2=40;
    yy1=160;
    yy2=170;
    while(yy2<=220)
    {
        glBegin(GL_POLYGON);//upper left angular wing
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

    xx1=30;
    xx2=40;
    yy1=80;
    yy2=90;
    while(yy1>=20)
    {
        glBegin(GL_POLYGON);//bottom left angular wing
        glVertex2i(xx1,yy1);
        glVertex2i(xx2,yy1);
        glVertex2i(xx2,yy2);
        glVertex2i(xx1,yy2);
        glEnd();

        xx1=xx1+10;
        xx2=xx2+10;
        yy1=yy1-10;
        yy2=yy2-10;
    }

    xx1=280;
    xx2=290;
    yy1=20;
    yy2=30;
    while(xx2<=350)
    {
        glBegin(GL_POLYGON);//bottom right angular wing
        glVertex2i(xx1,yy1);
        glVertex2i(xx2,yy1);
        glVertex2i(xx2,yy2);
        glVertex2i(xx1,yy2);
        glEnd();

        xx1=xx1+10;
        xx2=xx2+10 ;
        yy1=yy1+10;
        yy2=yy2+10;
    }

    xx1=340;
    xx2=350;
    yy1=160;
    yy2=170;
    while(yy2<=220)
    {
        glBegin(GL_POLYGON);//upper right  angular wing
        glVertex2i(xx1,yy1);
        glVertex2i(xx2,yy1);
        glVertex2i(xx2,yy2);
        glVertex2i(xx1,yy2);
        glEnd();

        xx1=xx1-10;
        xx2=xx2-10 ;
        yy1=yy1+10;
        yy2=yy2+10;
    }
    glFlush ();
}
void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(0.0, 380.0, 0.0, 250.0);
}
main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (380, 270);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Batman !");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();
}
