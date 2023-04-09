
//
#define GL_SILENCE_DEPRECATION
#include <iostream>
#include <OpenGL/gl.h>
#include <OpenGl/glu.h>
#include <GLUT/glut.h>
#include "Tile.h"
#include "Empty.h"
#include "Floor.h"

Tile* board[200][200];

void display(){
    // top left, top right, bottom right, bottom left
    Floor f;
    f.draw();
}


int main(int argc, char * argv[]) {
    
    
    for(int i = 0; i < 200; i++){
        for(int j = 0; j < 200; j++){
            board[i][j] = new Empty();
        }
    }
    int offset = 100;
    
    
    glutInit( &argc, argv );
    glutInitWindowPosition( 100, 100 );
    glutInitWindowSize( 2400, 600 );
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH );
    glutCreateWindow( "Basic OpenGL Project" );
    
    
    glutDisplayFunc( display );
    glutMainLoop();
    return EXIT_SUCCESS;
   
}
