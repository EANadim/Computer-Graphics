#include <stdio.h>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplayChessboard(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);
    glPointSize(5.0);
    int i=1;
    for(int x=0;x<400;x=x+50)
    {
        for(int y=0;y<400;y=y+50)
        {
            if(i%2!=0)
            {
                glColor3f (0.0, 0.0, 0.0);
                glPointSize(5.0);
                glBegin(GL_QUADS);
                glVertex2i(x+0,y+0);
                glVertex2i(x+50,y+0);
                glVertex2i(x+50,y+50);
                glVertex2i(x+0,y+50);
                glEnd();
                i++;
            }
            else if(i%2==0)
            {
                glColor3f (1.0, 1.0, 1.0);
                glPointSize(5.0);
                glBegin(GL_QUADS);
                glVertex2i(x+0,y+0);
                glVertex2i(x+50,y+0);
                glVertex2i(x+50,y+50);
                glVertex2i(x+0,y+50);
                glEnd();
                i++;
            }
        }
        i++;
    }
    glFlush ();
}

void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(0.0, 400.0, 0.0, 400.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_MULTISAMPLE | GLUT_RGB);
    glutInitWindowSize (400,400);
    glutInitWindowPosition (0, 0);
    glutCreateWindow ("Chess Board");
    glutDisplayFunc(myDisplayChessboard);
    myInit ();

    glutMainLoop();
    return 0;
}
