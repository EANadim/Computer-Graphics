#include <stdio.h>
#include<math.h>
#include<GL/gl.h>
#include <GL/glut.h>

int xx1=0,xx2=0,yy1=0,yy2=0;

int abs(int x)
{
    if(x<=0)
    {
        x=x*(-1);
    }
    return x;
}
void myDisplayDDA(void)
{
    int m=0,dx=0,dy=0,x=0,y=0,xend=0,yend=0;
    int xf=0,yf=0;

    yf=yy1;
    xf=xx1;

    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);
    glPointSize(5.0);
    dx=xx2-xx1;
    dy=yy2-yy1;
    m=abs(dy/dx);

    if(abs(m)<=1)
    {
        if(dx>0)
        {
            x=xx1;
            y=yy1;
            xend=xx2;
        }
        else
        {
            x=xx2;
            y=yy2;
            xend=xx1;
        }
        while(x<=xend)
        {
            glBegin(GL_POINTS);
            glVertex2i(x,y);
            glEnd();

            yf=yf+m;
            y=round(yf);
            x++;
        }
    }
    if(abs(m)>1)
    {
        if(dy>0)
        {
            y=yy1;
            x=xx1;
            yend=yy2;
        }
        else
        {
            y=yy2;
            x=xx2;
            yend=yy1;
        }
        while(y<=yend)
        {
            glBegin(GL_POINTS);
            glVertex2i(x,y);
            glEnd();

            xf=xf+(1/m);
            x=round(xf);
            y++;
        }
    }
    glFlush ();
}
void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
int main(int argc, char** argv)
{
    int n;
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (640, 480);
    glutInitWindowPosition (200, 150);
    glutCreateWindow ("Hello World");
    printf("1. DDA Algorithms\n2. Bresenham \n3. Exit\n");
    scanf("%d",&n);
    if(n==1)
    {
        printf("Enter an initial point : \n");
        scanf("%d%d",&xx1,&xx2);
        printf("Enter an End point : \n");
        scanf("%d%d",&yy1,&yy2);
        glutDisplayFunc(myDisplayDDA);
    }
    else if(n==2)
    {

    }
    else if(n==3)
    {
        return 0;
    }
    else
    {
        printf("INVALID COMMAND");
    }
    myInit ();
    glutMainLoop();
    return 0;
}

