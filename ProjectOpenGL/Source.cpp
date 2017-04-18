#include <GL\glut.h>


void Render()
{
   glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
   glClear(GL_COLOR_BUFFER_BIT);

   glBegin(GL_QUADS);
   glColor3f(0.0f, 1.0f, 0.0f);
   glVertex3f(-20, -20, 0);
   glVertex3f(20, -20, 0);
   glVertex3f(20, 20, 0);
   glVertex3f(-20, 20, 0);
   glEnd();

   glutSwapBuffers();
}


void Init()
{
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   glOrtho(-200, 200, -200, 200, -5, 5);
}


int main()
{
   glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
   glutInitWindowSize(800, 600);
   glutInitWindowPosition(0, 0);
   glutCreateWindow("OpenGL example");
   
   glutDisplayFunc(Render);
   Init();
   glutMainLoop();

   return 0;
}
;