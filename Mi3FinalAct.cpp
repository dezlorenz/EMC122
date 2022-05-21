#include <GL/glut.h>
#include <stdlib.h>

void display(void)
{
    glClearColor(1,1,1,1);

    glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_QUADS);
		glColor3f(0.0f, 0.0f, 1.0f);
		glVertex2f(-1.0f, 1.0f);
		glVertex2f(0.0f, 0.0f);
		glVertex2f(1.0f, 0.0f);
		glVertex2f(1.0f, 1.0f);

	glBegin(GL_QUADS);
		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex2f(0.0f, 0.0f);
		glVertex2f(-1.0f, -1.0f);
		glVertex2f(1.0f, -1.0f);
		glVertex2f(1.0f, 0.0f);

	glBegin(GL_QUADS);
		glColor3f(1.0f, 1.0f, 0.0f);
		glVertex2f(-0.8f, 0.1f);
		glVertex2f(-0.8f, -0.1f);
		glVertex2f(-0.6f, -0.1f);
		glVertex2f(-0.6f, 0.1f);

	glBegin(GL_QUADS);
		glColor3f(1.0f, 1.0f, 0.0f);
		glVertex2f(-0.9f, 0.7f);
		glVertex2f(-0.9f, 0.6f);
		glVertex2f(-0.8f, 0.6f);
		glVertex2f(-0.8f, 0.7f);

	glBegin(GL_QUADS);
		glColor3f(1.0f, 1.0f, 0.0f);
		glVertex2f(-0.9f, -0.7f);
		glVertex2f(-0.9f, -0.6f);
		glVertex2f(-0.8f, -0.6f);
		glVertex2f(-0.8f, -0.7f);

	glBegin(GL_QUADS);
		glColor3f(1.0f, 1.0f, 0.0f);
		glVertex2f(-0.2f, 0.05f);
		glVertex2f(-0.2f, -0.05f);
		glVertex2f(-0.1f, -0.05f);
		glVertex2f(-0.1f, 0.05f);

    glEnd();

    glFlush();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(750,500);
    glutInitWindowPosition(1,1);

    glutCreateWindow("Flag");

    glutDisplayFunc(display);


    glutMainLoop();

    return EXIT_SUCCESS;
}