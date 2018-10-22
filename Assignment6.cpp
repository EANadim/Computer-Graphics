#include <bits/stdc++.h>
#include <stdio.h>
#include<GL/gl.h>
#include <GL/glut.h>

using namespace std;

double x[1000],y[1000],dx,dy,p[1000][1000],q[1000][1000],sx,sy,theta,shearx,sheary;
int n,choice,shxFlag=0,shyFlag=0,shxyFlag=0;
char axis,shear[1000];

void myDisplayTranslation(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_LINE_LOOP);
    for(int i=0;i<n;i++)
    {
        glVertex2i(x[i],y[i]);
    }
    glEnd();
    glBegin(GL_LINE_LOOP);

    memset(p,0,sizeof(p));
    memset(q,0,sizeof(q));
    p[0][0]=1;
    p[0][1]=0;
    p[0][2]=dx;
    p[1][0]=0;
    p[1][1]=1;
    p[1][2]=dy;
    p[2][0]=0;
    p[2][1]=0;
    p[2][2]=1;
    for(int i=0;i<n;i++)
    {
        q[0][0]=x[i];
        q[1][0]=y[i];
        q[2][0]=1;
        glVertex2i(p[0][0]*q[0][0]+p[0][1]*q[1][0]+p[0][2]*q[2][0],p[1][0]*q[0][0]+p[1][1]*q[1][0]+p[1][2]*q[2][0]);
    }
    glEnd();
    glFlush ();
}
void myDisplayScaling(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_LINE_LOOP);
    for(int i=0;i<n;i++)
    {
        glVertex2i(x[i],y[i]);
    }
    glEnd();
    glBegin(GL_LINE_LOOP);

    memset(p,0,sizeof(p));
    memset(q,0,sizeof(q));
    p[0][0]=sx;
    p[0][1]=0;
    p[0][2]=0;
    p[1][0]=0;
    p[1][1]=sy;
    p[1][2]=0;
    p[2][0]=0;
    p[2][1]=0;
    p[2][2]=1;
    for(int i=0;i<n;i++)
    {
        q[0][0]=x[i];
        q[1][0]=y[i];
        q[2][0]=1;
        glVertex2i(p[0][0]*q[0][0]+p[0][1]*q[1][0]+p[0][2]*q[2][0],p[1][0]*q[0][0]+p[1][1]*q[1][0]+p[1][2]*q[2][0]);
    }
    glEnd();
    glFlush ();
}
void myDisplayRotation(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_LINE_LOOP);
    for(int i=0;i<n;i++)
    {
        glVertex2i(x[i],y[i]);
    }
    glEnd();
    glBegin(GL_LINE_LOOP);

    memset(p,0,sizeof(p));
    memset(q,0,sizeof(q));
    p[0][0]=cos(theta);
    p[0][1]=-sin(theta);
    p[0][2]=0;
    p[1][0]=sin(theta);
    p[1][1]=cos(theta);
    p[1][2]=0;
    p[2][0]=0;
    p[2][1]=0;
    p[2][2]=1;
    for(int i=0;i<n;i++)
    {
        q[0][0]=x[i];
        q[1][0]=y[i];
        q[2][0]=1;
        glVertex2i(p[0][0]*q[0][0]+p[0][1]*q[1][0]+p[0][2]*q[2][0],p[1][0]*q[0][0]+p[1][1]*q[1][0]+p[1][2]*q[2][0]);
    }
    glEnd();
    glFlush ();
}
void myDisplayMirror(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_LINE_LOOP);
    for(int i=0;i<n;i++)
    {
        glVertex2i(x[i],y[i]);
    }
    glEnd();
    glBegin(GL_LINE_LOOP);

    memset(p,0,sizeof(p));
    memset(q,0,sizeof(q));
    if(axis=='x')
    {
        p[0][0]=1;
        p[0][1]=0;
        p[0][2]=0;
        p[1][0]=0;
        p[1][1]=-1;
        p[1][2]=0;
        p[2][0]=0;
        p[2][1]=0;
        p[2][2]=1;
    }
    else if(axis=='y')
    {
        p[0][0]=-1;
        p[0][1]=0;
        p[0][2]=0;
        p[1][0]=0;
        p[1][1]=1;
        p[1][2]=0;
        p[2][0]=0;
        p[2][1]=0;
        p[2][2]=1;
    }
    for(int i=0;i<n;i++)
    {
        q[0][0]=x[i];
        q[1][0]=y[i];
        q[2][0]=1;
        glVertex2i(p[0][0]*q[0][0]+p[0][1]*q[1][0]+p[0][2]*q[2][0],p[1][0]*q[0][0]+p[1][1]*q[1][0]+p[1][2]*q[2][0]);
    }
    glEnd();
    glFlush ();
}
void myDisplayShear(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_LINE_LOOP);
    for(int i=0;i<n;i++)
    {
        glVertex2i(x[i],y[i]);
    }
    glEnd();
    glBegin(GL_LINE_LOOP);

    memset(p,0,sizeof(p));
    memset(q,0,sizeof(q));
    p[0][0]=1;
    p[0][1]=0;
    if(shxFlag==1 || shxyFlag==1)
    {
        p[0][1]=shearx;
    }
    p[0][2]=0;
    p[1][0]=0;
    if(shxFlag==1 || shxyFlag==1)
    {
        p[1][0]=0;
    }
    p[1][1]=1;
    p[1][2]=0;
    p[2][0]=0;
    p[2][1]=0;
    p[2][2]=1;
    for(int i=0;i<n;i++)
    {
        q[0][0]=x[i];
        q[1][0]=y[i];
        q[2][0]=1;
        glVertex2i(p[0][0]*q[0][0]+p[0][1]*q[1][0]+p[0][2]*q[2][0],p[1][0]*q[0][0]+p[1][1]*q[1][0]+p[1][2]*q[2][0]);
    }
    glEnd();
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

    cout<<"1. Translation"<<endl<<"2. Scaling"<<endl<<"3. Rotation"<<endl<<"4. Mirror Reflection"<<endl<<"5. Shearing"<<endl<<"6. Exit"<<endl;
    cout<<"Enter your choice : "<<endl;
    cin>>choice;
    /*cout<<"Enter Number of edges"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter number of coordinate of vertex "<<i+1<<" :";
        cin>>x[i];
        cin>>y[i];
        cout<<endl;
    }*/
    if(choice==1)
    {
        cout<<"Enter Number of edges"<<endl;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cout<<"Enter number of coordinate of vertex "<<i+1<<" :";
            cin>>x[i];
            cin>>y[i];
            cout<<endl;
        }

        cout<<"Enter the Translation factor for x and y : ";
        cin>>dx>>dy;
        cout<<endl;
        glutInitWindowSize (640, 480);
        glutInitWindowPosition (100, 150);
        glutCreateWindow ("Translation");
        glutDisplayFunc(myDisplayTranslation);
    }
    else if(choice==2)
    {
        cout<<"Enter Number of edges"<<endl;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cout<<"Enter number of coordinate of vertex "<<i+1<<" :";
            cin>>x[i];
            cin>>y[i];
            cout<<endl;
        }

        cout<<"Enter the Scaling factor for x and y : ";
        cin>>sx>>sy;
        cout<<endl;
        glutInitWindowSize (640, 480);
        glutInitWindowPosition (100, 150);
        glutCreateWindow ("Scaling");
        glutDisplayFunc(myDisplayScaling);
    }
    else if(choice==3)
    {
        cout<<"Enter Number of edges"<<endl;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cout<<"Enter number of coordinate of vertex "<<i+1<<" :";
            cin>>x[i];
            cin>>y[i];
            cout<<endl;
        }

        cout<<"Enter the Rotation factor for x & y : ";
        cin>>theta;
        cout<<endl;
        glutInitWindowSize (640, 480);
        glutInitWindowPosition (100, 150);
        glutCreateWindow ("Rotation");
        glutDisplayFunc(myDisplayRotation);
    }
    else if(choice==4)
    {
        cout<<"Enter Number of edges"<<endl;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cout<<"Enter number of coordinate of vertex "<<i+1<<" :";
            cin>>x[i];
            cin>>y[i];
            cout<<endl;
        }

        cout<<"Enter the reflection about axis (x or y) : "<<endl;
        cin>>axis;
        cout<<endl;
        cout<<axis<<endl;

        glutInitWindowSize (640, 480);
        glutInitWindowPosition (100, 150);
        glutCreateWindow ("Mirror");
        glutDisplayFunc(myDisplayMirror);
    }
    else if(choice==5)
    {
        cout<<"Enter Number of edges"<<endl;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cout<<"Enter number of coordinate of vertex "<<i+1<<" :";
            cin>>x[i];
            cin>>y[i];
            cout<<endl;
        }

        cout<<"Enter shearing for which axis :"<<endl;
        cin>>shear;
        if(strcmp(shear,"x")==0)
        {
            cout<<"Enter shearing factor for x"<<endl;
            cin>>shearx;

            shxFlag=1;
            shyFlag=0;
            shxyFlag=0;

            glutInitWindowSize (640, 480);
            glutInitWindowPosition (100, 150);
            glutCreateWindow ("Shear");
            glutDisplayFunc(myDisplayShear);
        }
        else if(strcmp(shear,"y")==0)
        {
            cout<<"Enter shearing factor for y"<<endl;
            cin>>sheary;

            shxFlag=0;
            shyFlag=1;
            shxyFlag=0;

            glutInitWindowSize (640, 480);
            glutInitWindowPosition (100, 150);
            glutCreateWindow ("Shear");
            glutDisplayFunc(myDisplayShear);
        }
        else if(strcmp(shear,"xy")==0)
        {
            cout<<"Enter shearing factor for x"<<endl;
            cin>>shearx;
            cout<<"Enter shearing factor for y"<<endl;
            cin>>sheary;

            shxFlag=0;
            shyFlag=0;
            shxyFlag=1;

            glutInitWindowSize (640, 480);
            glutInitWindowPosition (100, 150);
            glutCreateWindow ("Shear");
            glutDisplayFunc(myDisplayShear);
        }
        else
        {
            cout<<"Invalid request"<<endl;
            return 0;
        }
    }
    else
    {
        return 0;
    }
    myInit ();
    glutMainLoop();
}
