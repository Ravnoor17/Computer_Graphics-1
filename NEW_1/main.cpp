#include<windows.h>
#include<GL/GLU.h>
#include<GL/glut.h>

void myInit(void)
{
    glClearColor(0.0,0.0,0.0,0);
    glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-780 , 780 , -420 , 420);
}

void display_points(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2i(100,200);
    glEnd();
    glFlush();
}

void display_lines(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	glPointSize(10);
	glBegin(GL_LINES);
	glVertex2i(100,100);
	glVertex2i(200,200);
    glEnd();
    glFlush();
}

void display_triangle(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(100,100);
	glVertex2i(200,200);
	glVertex2i(300,100);
    glEnd();
    glFlush();
}

void display_rectangle(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(100,100);
	glVertex2i(100,200);
	glVertex2i(200,200);
	glVertex2i(200,100);
    glEnd();
    glFlush();
}

int main(int argc, char **argv)
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize(1000, 768);
  glutInitWindowPosition(100, 100);
  glutCreateWindow("Window");
  myInit();
  glutDisplayFunc(display_rectangle);
  glutMainLoop();
  return 0;
}
