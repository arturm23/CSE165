
//
#define GL_SILENCE_DEPRECATION
#include <iostream>
#include <OpenGL/gl.h>
#include <OpenGl/glu.h>
#include <GLUT/glut.h>

void display(){
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
    glBegin( GL_LINES );
    glColor3f( 1.0f, 0.0f, 0.0f );
    glVertex2f( -0.5f, 0.0f );
    glColor3f( 0.0f, 1.0f, 0.0f );
    glVertex2f( 0.5f, 0.0f );
    glEnd();
    glColor3f( 0.0f, 0.0f, 1.0f );
    glBegin( GL_LINES );
    glVertex2f( 0.0f, -0.5f );
    glVertex2f( 0.0f, 0.5f );
    glEnd();
    glColor3f( 1.0f, 1.0f, 1.0f );
    glBegin( GL_TRIANGLES );
    glVertex2f( 0.1f, 0.1f );
    glVertex2f( 0.4f, 0.1f );
    glVertex2f( 0.25f, 0.4f );
    glEnd();
    
    
    glutSwapBuffers();
    
}

int main(int argc, char * argv[]) {
    
    glutInit( &argc, argv );
    glutInitWindowPosition( 100, 100 );
    glutInitWindowSize( 800, 600 );
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH );
    glutCreateWindow( "Basic OpenGL Project" );
    
    glutDisplayFunc( display );
    glutMainLoop();
    return EXIT_SUCCESS;
   
}
