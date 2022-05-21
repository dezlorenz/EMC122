#include <GL/glut.h>
#include <stdlib.h>

void display(void)
{
    glClearColor(0,0,0,1);

    glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_TRIANGLES);	//first tri
		glColor3f(1.0f, 1.0f, 1.0f);
		glVertex2f(-0.2f, 0.2f);
		glVertex2f(0.2f, 0.2f);
		glVertex2f(0.0f, 0.6f);

	glBegin(GL_TRIANGLES);	//second tri
		glColor3f(1.0f, 1.0f, 1.0f);
		glVertex2f(-0.4f, -0.2f);
		glVertex2f(0.0f, -0.2f);
		glVertex2f(-0.2f, 0.2f);

	glBegin(GL_TRIANGLES);	//third tri
		glColor3f(1.0f, 1.0f, 1.0f);
		glVertex2f(0.0f, -0.2f);
		glVertex2f(0.4f, -0.2f);
		glVertex2f(0.2f, 0.2f);

	glBegin(GL_TRIANGLES);	//fourth tri
		glColor3f(1.0f, 1.0f, 1.0f);
		glVertex2f(-0.6f, -0.6f);
		glVertex2f(-0.2f, -0.6f);
		glVertex2f(-0.4f, -0.2f);

	glBegin(GL_TRIANGLES);	//fifth tri
		glColor3f(1.0f, 1.0f, 1.0f);
		glVertex2f(-0.2f, -0.6f);
		glVertex2f(0.2f, -0.6f);
		glVertex2f(0.0f, -0.2f);

	glBegin(GL_TRIANGLES);	//sixth tri
		glColor3f(1.0f, 1.0f, 1.0f);
		glVertex2f(0.2f, -0.6f);
		glVertex2f(0.6f, -0.6f);
		glVertex2f(0.4f, -0.2f);

    glEnd();

    glFlush();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,500);
    glutInitWindowPosition(1,1);

    glutCreateWindow("Triangles");

    glutDisplayFunc(display);


    glutMainLoop();

    return EXIT_SUCCESS;
}