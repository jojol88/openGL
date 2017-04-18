#include <GL\glut.h>


void Render()
{
   glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
   glClear(GL_COLOR_BUFFER_BIT);

   glFlush();
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
   glutInitWindowSize(600, 600);
   glutInitWindowPosition(0, 0);
   glutCreateWindow("lesson");
   glutDisplayFunc(Render);
   Init();
   glutMainLoop();

   return 0;
}
