
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


Tile* board[200][200];
vector<Tile*> init;
bool dir = true;


void redraw(int index){
    for(int i = 0; i < init.size(); i++){
        if(i != index){
            init[i]->move();
        }
    }
}

void goombaDir(){
    if(dir){
        init[4]->offsetx -= 0.004;
    } else {
        init[4]->offsetx += 0.004;
    }
    if(init[4]->offsetx < -0.4){
        dir = false;
    }
    if(init[4]->offsetx > 0){
        dir = true;
    }
}

void goombaUpdate(){
        //clear
        glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
        //redraw everything except for whats moving
        redraw(4);
        //use move to draw the moving object
        init[4]->move();
        //update the screen
        glutSwapBuffers();
        //change the offset
        goombaDir();
}


void myIdle(){
    goombaUpdate();
}



void display(){
    // top left, top right, bottom right, bottom left
    init.push_back(new Background());
    init.push_back(new Floor());
    init.push_back(new Tube());
    init.push_back(new Flag());
    init.push_back(new Goomba());
   
   
    for(int i = 0; i < init.size(); i++){
        init[i]->draw();
    }
    
    glutSwapBuffers();
}

void myKey(unsigned char key, int x, int y){
    if(key == 'B' | key == 'b'){
        //make sure win only triggers once 
        if((init[3])->offsety > -0.5){
            while((init[3])->offsety >  -0.99){
                //clear
                glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
                //redraw everything except for whats moving
                redraw(3);
                //use move to draw the moving object
                init[3]->move();
                //update the screen
                glutSwapBuffers();
                //change the offset
                init[3]->offsety -= 0.006;
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
    glutIdleFunc( myIdle );
    glutMainLoop();
    
    return EXIT_SUCCESS;
   
}
