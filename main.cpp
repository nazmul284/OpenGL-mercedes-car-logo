#include<windows.h>
#include <GL/glut.h>
#include <math.h>

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.1);	// Set display window colour to white

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 600.0, 0.0, 600.0);
}

void display()
{
    float theta;
    int i;
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window
    //Set colour to red
	glColor3f(0.2, 0.2, 0.2);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(250+235*cos(theta),250+235*sin(theta));  // here (250,250) is the center and 150 is the radius
	}
	glEnd();

    float theta4;
    int l;
    //Set colour to red
	glColor3f(0.5, 0.5, 0.5);
	glBegin(GL_POLYGON);
	for(l=0;l<360;l++)
	{
	  theta4=l*3.142/180;
	  glVertex2f(250+225*cos(theta4),250+225*sin(theta4));  // here (250,250) is the center and 150 is the radius
	}
	glEnd();

    float theta2;
    int j;


	glBegin(GL_POLYGON);
	for(j=0;j<360;j++)
	{
     glColor3f(0.4, 0.4, 0.4);
	  theta2=j*3.142/180;
	  glVertex2f(250+220*cos(theta2),250+220*sin(theta2));  // here (250,250) is the center and 220 is the radius
	}
	glEnd();



    float theta3;
    int k;
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(k=0;k<360;k++)
	{
	  theta3=k*3.142/180;
	  glVertex2f(250+205*cos(theta3),250+205*sin(theta3));  // here (250,250) is the center and 205 is the radius
	}
	glEnd();



	// 1
	glBegin(GL_TRIANGLES);
        glColor3f(0.4, 0.4, 0.4);
		glVertex2i(250, 250);
        glColor3f(0.7, 0.7, 0.7);
		glVertex2i(281.25, 274.99);
        glColor3f(0.3, 0.3, 0.3);
		glVertex2i(250, 458.35);
	glEnd();


		glColor3f(0.0, 0.0, 3.0);
	// 6
	glBegin(GL_TRIANGLES);
        glColor3f(0.7, 0.7, 0.7);
		glVertex2i(250, 250);
        glColor3f(0.7, 0.7, 0.7);
		glVertex2i(250, 458.35);
        glColor3f(0.5, 0.5, 0.5);
		glVertex2i(218.75, 274.99);
	glEnd();

	///


	// 2
	glBegin(GL_TRIANGLES);
        glColor3f(0.4, 0.4, 0.4);
		glVertex2i(250, 250);
        glColor3f(0.7, 0.7, 0.7);
		glVertex2i(281.25, 274.99);
        glColor3f(0.3, 0.3, 0.3);
		glVertex2i(435, 150);
	glEnd();

    glColor3f(1.0, 0.0, 3.0);

	// 3
	glBegin(GL_TRIANGLES);
        glColor3f(0.4, 0.4, 0.4);
		glVertex2i(250, 250);
        glColor3f(0.7, 0.7, 0.7);
		glVertex2i(435, 150);
        glColor3f(0.3, 0.3, 0.3);
		glVertex2i(255, 213);
	glEnd();


	///

	    glColor3f(1.0, 0.5, 3.0);

	// 4
	glBegin(GL_TRIANGLES);
        glColor3f(0.3, 0.3, 0.3);
		glVertex2i(250, 250);
        glColor3f(0.6, 0.6, 0.6);
		glVertex2i(255, 213);
        glColor3f(0.5, 0.5, 0.5);
		glVertex2i(93, 110);
	glEnd();


	    glColor3f(1.0, 0.5, 3.0);

	// 5
	glBegin(GL_TRIANGLES);
        glColor3f(0.7, 0.7, 0.7);
		glVertex2i(250, 250);
        glColor3f(0.7, 0.7, 0.7);
		glVertex2i(218.75, 274.99);
        glColor3f(0.6, 0.6, 0.6);
		glVertex2i(93, 110);
	glEnd();






glFlush();
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						// Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

	glutInitWindowPosition(100, 100);				// Set window position
	glutInitWindowSize(600, 600);					// Set window size
	glutCreateWindow("An Example OpenGL Program");	// Create display window

	init();							// Execute initialisation procedure
	glutDisplayFunc(display);		// Send graphics to display window
	glutMainLoop();					// Display everything and wait

	return 0;
}


