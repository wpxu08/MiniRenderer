#include <GL/glut.h>

void Display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(5);
	glBegin(GL_POINTS);
	glColor3f(1.0f, 0.0f, 0.0f);   glVertex2f(200.0f, 200.0f);
	glEnd();

	glFlush();
}

void Init(int width, int height)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, width, 0.0, height);
}

int main(int argc, char *argv[])
{
	int width = 600, height = 600;
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);
	glutInitWindowPosition(50, 50);
	glutInitWindowSize(width, height);
	glutCreateWindow("Hello World!");	
	Init(width, height);
	glutDisplayFunc(Display);
	glutMainLoop();
	return 0;
}