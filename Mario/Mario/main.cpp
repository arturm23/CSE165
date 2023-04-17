
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
#include "Goomba.h"
#include "Mario.h"


Tile* board[200][200];
vector<Tile*> init;



void redraw(){
    for(int i = 0; i < init.size(); i++){
        init[i]->draw();
    }
}



void goombaUpdate(){
    if(init[4]->dir){
        init[4]->offsetx -= 0.004;
    } else {
        init[4]->offsetx += 0.004;
    }
    if(init[4]->offsetx < -0.4){
        init[4]->dir = false;
    }
    if(init[4]->offsetx > 0){
        init[4]->dir = true;
    }
}

void flagUpdate(){
    if(init[3]->offsety > init[3]->next_offsety){
        init[3]->offsety -= 0.008;
    }
}

void marioUpdate(){
    if(init[5]->dir){
        if(init[5]->offsetx < init[5]->next_offsetx){
            init[5]->offsetx += 0.008;
        }
    } else {
        if(init[5]->offsetx > init[5]->next_offsetx){
            init[5]->offsetx -= 0.008;
        }
    }
    
}


void myIdle(){
    goombaUpdate();
    flagUpdate();
    marioUpdate();
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
    redraw();
    glutSwapBuffers();
    
}



void display(){
    // top left, top right, bottom right, bottom left
    init.push_back(new Background());  // 0
    init.push_back(new Floor());       // 1
    init.push_back(new Tube());        // 2
    init.push_back(new Flag());        // 3
    init.push_back(new Goomba());      // 4
    init.push_back(new Mario());       // 5
   
    for(int i = 0; i < init.size(); i++){
        init[i]->draw();
    }
    glutSwapBuffers();
}

void myKey(unsigned char key, int x, int y){
    switch (key) {
        case 'B':
        case 'b':
            if((init[3])->offsety > -0.5){
                init[3]->next_offsety = -0.99;
            }
            break;
        case 'D':
        case 'd':
            init[5]->next_offsetx += 0.1;
            init[5]->dir = true;
            break;
        case 'A':
        case 'a':
            init[5]->next_offsetx -= 0.1;
            init[5]->dir = false;
            break;
        default:
            break;
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
    glutIdleFunc( myIdle );
    glutMainLoop();
    
    return EXIT_SUCCESS;
   
}
