
//
#define GL_SILENCE_DEPRECATION
#include <iostream>
#include <OpenGL/gl.h>
#include <OpenGl/glu.h>
#include <GLUT/glut.h>
#include <vector>

#include "Tile.h"
#include "Empty.h"
#include "Floor.h"
#include "Background.h"
#include "Tube.h"
#include "Flag.h"


Tile* board[200][200];
vector<Tile*> init;


void display(){
    // top left, top right, bottom right, bottom left
    init.push_back(new Background());
    init.push_back(new Floor());
    init.push_back(new Tube());
    init.push_back(new Flag());
   
   
    for(int i = 0; i < init.size(); i++){
        init[i]->draw();
    }
    
    glutSwapBuffers();
}

void myKey(unsigned char key, int x, int y){
    if(key == 'B' | key == 'b'){
        if(dynamic_cast<Flag*>(init[3])->offset > -1){
            for(int i = 0; i < 10; i++){
                glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
                for(int i = 0; i < init.size(); i++){
                    if(i != 3){
                        init[i]->draw();
                    }
                }
                dynamic_cast<Flag*>(init[3])->move();
                glutSwapBuffers();
            }
        }
    }
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
    glutKeyboardFunc( myKey );
    glutMainLoop();
    return EXIT_SUCCESS;
   
}
