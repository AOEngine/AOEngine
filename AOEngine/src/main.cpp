#include "Graphics.h"

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif


/******************************************************************************/
/*!
\fn     CreateGLContext
\brief
Create the context for OpenGL commands to work.
\param  int argc
Use argc from main function
\param  char **argv
Use argv from main function
*/
/******************************************************************************/
void CreateGLContext(int argc, char **argv)
{
	/* GLUT Window Creation & Initialization */
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE);
	glutInitWindowSize(width, height);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Rolling");

	glutInitContextVersion(3, 3);
	glutInitContextFlags(GLUT_FORWARD_COMPATIBLE);
	glutInitContextProfile(GLUT_CORE_PROFILE);
}


int main(int argc, char ** argv)
{
	CreateGLContext(argc, argv);
}