#include <stdio.h>
#include<GL/gl.h>
#include <GL/glut.h>

int a=320,b=250,x,y,R=0;

void draw(int x,int y)
{
    glBegin(GL_POINTS);
    glVertex2i(x+a,y+b);
    glVertex2i(x+a,-y+b);
    glVertex2i(-x+a,y+b);
    glVertex2i(-x+a,-y+b);
    glVertex2i(y+a,x+b);
    glVertex2i(y+a,-x+b);
    glVertex2i(-y+a,x+b);
    glVertex2i(-y+a,-x+b);
    glEnd();
}
void midPointCircle(int R)
{
   int d=1-R;
   x=0;
   y=R;
   while(x<=y)
    {
        draw(x,y);
        if(d<0)
        {
            d=d+2*x+3;
            x++;
        }
        else
        {
            d=d+(2*(x-y))+5;
            x++;
            y--;
        }
    }
}
void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);
    glPointSize(5.0);
    midPointCircle(R);
    glFlush ();
}
void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
main(int argc, char** argv)
{

    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (640, 480);
    glutInitWindowPosition (100, 150);
    printf("Enter the radius of the circle \n");
    scanf("%d",&R);
    glutCreateWindow ("Hello World");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();
}
