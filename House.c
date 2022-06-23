
#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
glClear (GL_COLOR_BUFFER_BIT);

glColor3f (1.0, 1.0, 1.0);


	glBegin(GL_QUADS); //Begin quadrilateral coordinates

	//Trapezoid

	glColor3f (0.5, 0.3, 1.0);
	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(15.0f, 0.0f, 0.0f);
	glVertex3f(15.0f, 10.0f, 0.0f);
    glVertex3f(0.0f, 10.0f, 0.0f);


//window1
    glColor3f (1.0, 0.2, 0.50);
    glVertex3f(1.0f, 3.0f, 0.0f);
	glVertex3f(4.0f, 3.0f, 0.0f);
	glVertex3f(4.0f, 6.0f, 0.0f);
    glVertex3f(1.0f, 6.0f, 0.0f);



//window2
    glColor3f (1.0, 0.2, 0.50);

    glVertex3f(11.0f, 3.0f, 0.0f);
	glVertex3f(14.0f, 3.0f, 0.0f);
	glVertex3f(14.0f, 6.0f, 0.0f);
    glVertex3f(11.0f, 6.0f, 0.0f);

//Door
    glColor3f (0.56, 0.25, 0.8);
    glVertex3f(6.0f, 0.0f, 0.0f);
	glVertex3f(9.0f, 0.0f, 0.0f);
	glVertex3f(9.0f, 5.0f, 0.0f);
    glVertex3f(6.0f, 5.0f, 0.0f);

    glColor3f (0.20, 0.7, 1.0);
    glVertex3f(7.0f, 1.0f, 0.0f);
	glVertex3f(8.0f, 1.0f, 0.0f);
	glVertex3f(8.0f, 4.0f, 0.0f);
    glVertex3f(7.0f, 4.0f, 0.0f);


    glColor3f (0.5, 0.8, 0.78);
    glVertex3f(6.0f, 0.0f, 0.0f);
	glVertex3f(9.0f, 0.0f, 0.0f);
	glVertex3f(8.0f, 1.0f, 0.0f);
    glVertex3f(7.0f, 1.0f, 0.0f);


    glColor3f (0.5, 0.8, 0.78);
    glVertex3f(6.0f, 5.0f, 0.0f);
	glVertex3f(7.0f, 4.0f, 0.0f);
	glVertex3f(8.0f, 4.0f, 0.0f);
    glVertex3f(9.0f, 5.0f, 0.0f);

    //floor

    glColor3f (0.5, 0.5, 0.4);
    glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glVertex3f(16.0f, -1.0f, 0.0f);
    glVertex3f(15.0f, 0.0f, 0.0f);


	glEnd(); //End quadrilateral coordinates

    glBegin(GL_TRIANGLES); //Begin triangle coordinates

    glColor3f (0.8, 0.5, 0.0);
	glVertex3f(0.0f, 10.0f, 0.0f);
	glVertex3f(15.0f, 10.0f, 0.0f);
	glVertex3f(7.0f, 16.0f, 0.0f);
	glEnd();

glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-1.0, 20, -1.0, 20, -10.0, 10.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (600, 600);
glutInitWindowPosition (100, 100);
glutCreateWindow ("House");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0;
}

