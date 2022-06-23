#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (1.0, 1.0, 1.0);
glBegin(GL_QUADS);
glColor3f (0.5, 0.3, 1.0);
glVertex3f(3.0f, 0.0f, 0.0f);
glVertex3f(15.0f, 0.0f, 0.0f);
glVertex3f(15.0f, 10.0f, 0.0f);
 glVertex3f(3.0f, 10.0f, 0.0f);
glEnd();
glBegin(GL_QUADS);
glColor3f (1.0, 0.3, 1.0);
glVertex3f(8.0f, 14.0f, 0.0f);
glVertex3f(19.0f, 14.0f, 0.0f);
glVertex3f(22.0f, 20.0f, 0.0f);
 glVertex3f(12.0f, 20.0f, 0.0f);
glEnd();
glBegin(GL_TRIANGLES);
 glColor3f (0.8, 0.5, 0.0);
glVertex3f(18.0f, 0.0f, 0.0f);
glVertex3f(30.0f, 0.0f, 0.0f);
glVertex3f(24.0f, 10.0f, 0.0f);
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
glOrtho(-1.0, 30, -1.0, 30, -10.0, 10.0);
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

