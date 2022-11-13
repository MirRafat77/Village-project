#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include<math.h>
# define PI 3.14159265358979323846


float windowHeight = 500;
float windowWidth = 500;

void circle(float a, float b, float r)
{

    int i;
    int triangleAmount = 100;
    GLfloat twicePi = 2.0f * PI;
    GLfloat x=a;
    GLfloat y=b;
    GLfloat radius =r;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}


void sun()
{
    glColor3f(1.0, 1.0, 0.15);
    circle(.2,.2,.2);

}


//sun Anemtion
GLfloat sunX=-10.0f;
GLfloat sunA=0.01f;

void sunTR(int value){

    if(sunX > 40)
        sunX=-7;
        sunX+=sunA;
        glutPostRedisplay();
        glutTimerFunc(7,sunTR,0);

}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(0, 36, 0, 32);
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();

    glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.1176,0.5647,1.0);
        glVertex2f(0,32);
        glVertex2f(0,16);
        glVertex2f(56,16);
        glVertex2f(56,32);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.098,1.0,0.314);
        glVertex2f(0,16);
        glVertex2f(0,0);
        glVertex2f(56,0);
        glVertex2f(56,16);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(1.0,1.0,0.0);
        glVertex2f(8,20);
        glVertex2f(12,16);
        glVertex2f(17,16);
        glVertex2f(13,20);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(1.0,1.0,0.0);
        glVertex2f(18,19);
        glVertex2f(20,17);
        glVertex2f(23,17);
        glVertex2f(21,19);
    glEnd();
    glPopMatrix();
        glPushMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.9804,0.898,0.0);
        glVertex2f(8.5,19.5);
        glVertex2f(5,16);
        glVertex2f(11,16);
        glVertex2f(11,17);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.9804,0.898,0.0);
        glVertex2f(18.5,18.5);
        glVertex2f(17,17);
        glVertex2f(19.5,17);
        glVertex2f(19.5,17.5);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.9804,0.898,0.0);
        glVertex2f(5,16);
        glVertex2f(5,12);
        glVertex2f(11,11);
        glVertex2f(11,16);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.9804,0.898,0.0);
        glVertex2f(17,17);
        glVertex2f(17,15);
        glVertex2f(19.5,14);
        glVertex2f(19.5,17);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.902,0.8235,0.0);
        glVertex2f(11,16);
        glVertex2f(11,11);
        glVertex2f(16,12);
        glVertex2f(16,16);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.902,0.8235,0.0);
        glVertex2f(19.5,17);
        glVertex2f(19.5,14);
        glVertex2f(22.5,15);
        glVertex2f(22.5,17);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.4471,0.149,0.0);
        glVertex2f(8,20);
        glVertex2f(4,16);
        glVertex2f(5,16);
        glVertex2f(8.5,19.5);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.4471,0.149,0.0);
        glVertex2f(18,19);
        glVertex2f(16,17);
        glVertex2f(17,17);
        glVertex2f(18.5,18.5);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_TRIANGLES);
        glColor3f(0.902,0.8235,0.0);
        glVertex2f(11,17);
        glVertex2f(11,16);
        glVertex2f(12,16);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
        glColor3f(0.902,0.8235,0.0);
        glVertex2f(19.5,17.5);
        glVertex2f(19.5,17);
        glVertex2f(20,17);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.4471,0.149,0.0);
        glVertex2f(7,14);
        glVertex2f(7,11.65);
        glVertex2f(9,11.32);
        glVertex2f(9,14);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.4471,0.149,0.0);
        glVertex2f(17.75,16);
        glVertex2f(17.75,14.68);
        glVertex2f(18.75,14.28);
        glVertex2f(18.75,16);
    glEnd();
    glPopMatrix();
        glPushMatrix();

         glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.4471,0.149,0.0);
        glVertex2f(12.5,14);
        glVertex2f(12.5,11.32);
        glVertex2f(14.5,11.68);
        glVertex2f(14.5,14);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.4471,0.149,0.0);
        glVertex2f(20.5,16);
        glVertex2f(20.5,14.32);
        glVertex2f(21.5,14.68);
        glVertex2f(21.5,16);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.349,0.349,0.349);
        glVertex2f(16,15);
        glVertex2f(16,14);
        glVertex2f(24,10);
        glVertex2f(28,10);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.349,0.349,0.349);
        glVertex2f(24,10);
        glVertex2f(14,6);
        glVertex2f(20,6);
        glVertex2f(28,10);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.349,0.349,0.349);
        glVertex2f(14,6);
        glVertex2f(9,0);
        glVertex2f(17,0);
        glVertex2f(20,6);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.4471,0.149,0.0);
        glVertex2f(1,22);
        glVertex2f(1,11);
        glVertex2f(3,11);
        glVertex2f(3,22);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.4471,0.149,0.0);
        glVertex2f(0,23);
        glVertex2f(0,22);
        glVertex2f(2,21);
        glVertex2f(1,23);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.4471,0.149,0.0);
        glVertex2f(3,23);
        glVertex2f(2,21);
        glVertex2f(3,21);
        glVertex2f(5,23);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.4471,0.149,0.0);
        glVertex2f(0,11.5);
        glVertex2f(0,11);
        glVertex2f(1,11);
        glVertex2f(1,12);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_TRIANGLES);
        glColor3f(0.4471,0.149,0.0);
        glVertex2f(1.5,11);
        glVertex2f(1,10);
        glVertex2f(3,11);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
        glColor3f(0.4471,0.149,0.0);
        glVertex2f(3,12);
        glVertex2f(3,11);
        glVertex2f(6,11);
    glEnd();
    glPopMatrix();

    ///translate sun
    glPushMatrix();
    glTranslatef(sunX,24,0);
    glScalef(12,12,0);
    sun();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
        glColor3f(0.1412,0.7373,0.0);
        glVertex2f(1,23);
        glVertex2f(2,21);
        glVertex2f(3,23);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
        glColor3f(0.1412,0.7373,0.0);
        glVertex2f(3,20);
        glVertex2f(5,19);
        glVertex2f(5,20);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
        glColor3f(0.1412,0.7373,0.0);
        glVertex2f(0,20);
        glVertex2f(0,19);
        glVertex2f(1,20);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
        glColor3f(0.1412,0.7373,0.0);
        glVertex2f(3,31.25);
        glVertex2f(1,31);
        glVertex2f(5,31);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
        glColor3f(0.1412,0.7373,0.0);
        glVertex2f(5,31);
        glVertex2f(5,29);
        glVertex2f(9,29);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.1412,0.7373,0.0);
        glVertex2f(0,22);
        glVertex2f(0,20);
        glVertex2f(1,20);
        glVertex2f(1,21.5);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.1412,0.7373,0.0);
        glVertex2f(3,21);
        glVertex2f(3,20);
        glVertex2f(5,20);
        glVertex2f(5,23);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.1412,0.7373,0.0);
        glVertex2f(5,20);
        glVertex2f(5,19);
        glVertex2f(7,19);
        glVertex2f(8,20);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.1412,0.7373,0.0);
        glVertex2f(5,23);
        glVertex2f(5,20);
        glVertex2f(12,20);
        glVertex2f(12,23);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.1412,0.7373,0.0);
        glVertex2f(12,23);
        glVertex2f(12,20);
        glVertex2f(13,21);
        glVertex2f(13,22);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.1412,0.7373,0.0);
        glVertex2f(0,26);
        glVertex2f(0,23);
        glVertex2f(11,23);
        glVertex2f(11,26);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.1412,0.7373,0.0);
        glVertex2f(11,26);
        glVertex2f(11,23);
        glVertex2f(12,24);
        glVertex2f(12,25);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.1412,0.7373,0.0);
        glVertex2f(0,29);
        glVertex2f(0,26);
        glVertex2f(9,26);
        glVertex2f(9,29);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.1412,0.7373,0.0);
        glVertex2f(9,29);
        glVertex2f(9,26);
        glVertex2f(10,27);
        glVertex2f(10,28);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.1412,0.7373,0.0);
        glVertex2f(1,31);
        glVertex2f(1,29);
        glVertex2f(5,29);
        glVertex2f(5,31);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.1412,0.7373,0.0);
        glVertex2f(0,30);
        glVertex2f(0,29);
        glVertex2f(1,29);
        glVertex2f(1,31);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.0,0.0,0.0);
        glVertex2f(15,10);
        glVertex2f(15,9);
        glVertex2f(16,9);
        glVertex2f(16,10);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(1.0,0.0,0.0);
        glVertex2f(14,9);
        glVertex2f(14,7);
        glVertex2f(17,7);
        glVertex2f(17,9);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.0,0.0,1.0);
        glVertex2f(14,7);
        glVertex2f(14,4);
        glVertex2f(17,4);
        glVertex2f(17,7);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.4471,0.149,0.0);
        glVertex2f(11,9.20);
        glVertex2f(11,9);
        glVertex2f(20,9);
        glVertex2f(20,9.20);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.4471,0.149,0.0);
        glVertex2f(19,6);
        glVertex2f(19,5);
        glVertex2f(21,5);
        glVertex2f(21,6);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.4471,0.149,0.0);
        glVertex2f(10,6);
        glVertex2f(10,5);
        glVertex2f(12,5);
        glVertex2f(12,6);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_TRIANGLES);
        glColor3f(0.4471,0.149,0.0);
        glVertex2f(11,9);
        glVertex2f(10,6);
        glVertex2f(10.20,6);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
        glColor3f(0.4471,0.149,0.0);
        glVertex2f(11,9);
        glVertex2f(11.80,6);
        glVertex2f(12,6);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
        glColor3f(0.4471,0.149,0.0);
        glVertex2f(20,9);
        glVertex2f(19,6);
        glVertex2f(19.20,6);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
        glColor3f(0.4471,0.149,0.0);
        glVertex2f(20,9);
        glVertex2f(20.80,6);
        glVertex2f(21,6);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(1.0,0.898,0.6039);
        glVertex2f(17,9);
        glVertex2f(17,8.5);
        glVertex2f(18,7.5);
        glVertex2f(18,8);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(1.0,0.898,0.6039);
        glVertex2f(18,9);
        glVertex2f(18,7.5);
        glVertex2f(18.5,8);
        glVertex2f(18.5,9);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(1.0,0.898,0.6039);
        glVertex2f(12.5,9);
        glVertex2f(12.5,8);
        glVertex2f(13,7.5);
        glVertex2f(13,9);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(1.0,0.898,0.6039);
        glVertex2f(13,8);
        glVertex2f(13,7.5);
        glVertex2f(14,8.5);
        glVertex2f(14,9);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(1.0,0.898,0.6039);
        glVertex2f(14.75,4);
        glVertex2f(14.75,3.5);
        glVertex2f(15,3.5);
        glVertex2f(15,4);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(1.0,0.898,0.6039);
        glVertex2f(14.75,3.5);
        glVertex2f(14,3);
        glVertex2f(15,3);
        glVertex2f(15,3.5);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(1.0,0.898,0.6039);
        glVertex2f(16,4);
        glVertex2f(16,3.5);
        glVertex2f(16.25,3.5);
        glVertex2f(16.25,4);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glPushMatrix();
    glBegin(GL_QUADS);
        glColor3f(1.0,0.898,0.6039);
        glVertex2f(16,3.5);
        glVertex2f(16,3);
        glVertex2f(17,3);
        glVertex2f(16.25,3.5);
    glEnd();
    glPopMatrix();
        glPushMatrix();

        glFlush();
    glutSwapBuffers();

}

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

    glutInitWindowPosition(100,100);
    glutInitWindowSize(windowWidth, windowHeight);
    glutCreateWindow(" VILLAGE ");

    glutDisplayFunc(display);
    glutTimerFunc(7,sunTR,0);

    glutMainLoop();

    return 0;
}
