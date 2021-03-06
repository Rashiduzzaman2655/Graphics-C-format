#include<GL/gl.h>
#include <GL/glut.h>

int posx=0;

void boat()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);

    glVertex3i(10,100,0);
    glVertex3i(150+50,100,0);
    glVertex3i(120+50,50,0);
    glVertex3i(30,50,0);
    glEnd();

    glColor3f(1.0, 0.3, 1.0);
    glBegin(GL_POLYGON);

    glVertex3i(50,100,0);
    glVertex3i(150,100,0);
    glVertex3i(150,150,0);
    glVertex3i(50,150,0);
    glEnd();

}

void display(void)
{

glClear(GL_COLOR_BUFFER_BIT);



  glPushMatrix();
    glTranslatef(posx,0,0);
    boat();
    glPopMatrix();

glFlush();
}

void update(int value) {


    if(posx>=1200)
    {
        posx=0;
    }
    else{
        posx++;
    }
    glutPostRedisplay();
	glutTimerFunc(10, update, 0);
}
void init(void)
{

glClearColor(0.0,1.0, 0.9,0.0);

glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1200.0, 0, 1200.0);


}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(1000, 600);
glutInitWindowPosition(500, 200);
glutCreateWindow("Title");


glutDisplayFunc(display);

init();
glutTimerFunc(25, update, 0);
glutMainLoop();
return 0;
}

