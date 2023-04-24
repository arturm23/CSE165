
//
#define GL_SILENCE_DEPRECATION
#include <iostream>
#include <OpenGL/gl.h>
#include <OpenGl/glu.h>
#include <GLUT/glut.h>
#include <vector>
#include <string>
#include <math.h>

#include "Tile.h"
#include "Empty.h"
#include "Floor.h"
#include "Background.h"
#include "Tube.h"
#include "Flag.h"
#include "Goomba.h"
#include "Mario.h"



using namespace std;


vector<Tile*> init;
double ground = 0;


void redraw(){
    for(int i = 0; i < init.size(); i++){
        init[i]->draw();
    }
}

void win(){
    while(init[3]->offsety > init[3]->next_offsety){
        glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
        redraw();
        init[3]->offsety -= 0.008;
        glutSwapBuffers();
    }
    int x = 0;
    while( x < 200){
        glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
        glBegin( GL_QUADS );
            glColor3f(0.18,0.796,1.0);
            glVertex3f(-1, 1, 1);
            glVertex3f(1, 1, 1);
            glVertex3f(1, -1, 1);
            glVertex3f(-1, -1, 1);
        glEnd();
        string text = ("Congratulations you won") ;
        glColor3f( 1, 1, 1 );
        glRasterPos2f(-0.2, 0);
        for (int i = 0; i < text.length(); i++) {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
        }
        glutSwapBuffers();
        x++;
    }
    exit(0);
}

void lose(){
    int x = 0;
    while( x < 200){
        glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
        glBegin( GL_QUADS );
            glColor3f(0.18,0.796,1.0);
            glVertex3f(-1, 1, 1);
            glVertex3f(1, 1, 1);
            glVertex3f(1, -1, 1);
            glVertex3f(-1, -1, 1);
        glEnd();
        string text = ("You died :( watch out for Goomba") ;
        glColor3f( 1, 1, 1 );
        glRasterPos2f(-0.2, 0);
        for (int i = 0; i < text.length(); i++) {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
        }
        glutSwapBuffers();
        x++;
    }
    exit(0);
}
void checklose(){
    
    if(init[5]->offsetx >= 0.44 && init[5]->offsetx <= 1.008 && init[5]->offsety < 0.15){
        if(init[4]->dir){
            //goomba moving left
            if(init[4]->startx_left + init[4]->offsetx < init[5]->startx_right + init[5]->offsetx
               && init[4]->startx_left + init[4]->offsetx > init[5]->startx_left + init[5]->offsetx ){
                lose();
            }
           
        } else {
            if(init[4]->startx_right + init[4]->offsetx > init[5]->startx_left + init[5]->offsetx
               && init[4]->startx_right + init[4]->offsetx < init[5]->startx_right + init[5]->offsetx ){
                lose();
            }
        }
    }
}

void goombaUpdate(){
    //left
    // 0.44
    //1.008
    if(init[4]->dir){
        init[4]->offsetx -= 0.001;
    //right
    } else {
        init[4]->offsetx += 0.001;
    }
    if(init[4]->offsetx < -0.4){
        init[4]->dir = false;
    }
    if(init[4]->offsetx > 0){
        init[4]->dir = true;
    }
}
void ground_update(){
    double right = init[5]->startx_right + init[5]->offsetx;
    double left = init[5]->startx_left + init[5]->offsetx;
    
  
    if( (right - (-0.46)) > ( (fabs(right) < fabs(-0.46) ? fabs(-0.46) : fabs(right)) * 0.001)
       && ((-0.29) - left) > ( (fabs(left) < fabs(-0.29) ? fabs(-0.29) : fabs(left)) * 0.001)){
        ground = 0.232;
    } else if((right - 0.19) > ( (fabs(right) < fabs(0.19) ? fabs(0.19) : fabs(right)) * 0.001)
              && (0.36 - left) > ( (fabs(left) < fabs(0.36) ? fabs(0.36) : fabs(left)) * 0.001))  {
        ground = 0.48;
    } else {
        ground = 0;
    }
}

void jump(){
    ground_update();
    double a = init[5]->offsety;
    double b = init[5]->next_offsety;
    
   // cout << init[5]->diry << " " << init[5]->offsety << " " << init[5]->next_offsety << " " << ground << endl ;
    if((fabs(a - b) <= 0.001 * fabs(a)) && b != 0) {
        init[5]->next_offsety = ground;
        init[5]->diry = false;
    }
    if(init[5]->diry){
       
        if((b - a) > ( (fabs(a) < fabs(b) ? fabs(b) : fabs(a)) * 0.001) ){
            init[5]->offsety += 0.008;
        }
    } else {
        
       
        if((a - b) > ( (fabs(a) < fabs(b) ? fabs(b) : fabs(a)) * 0.001)){
            init[5]->offsety -= 0.008;
        }
    }
    //if there is a gap between nextoffsety and offsety and diry == true go up
    //if nextoffsety == offsety, set nextoffsety back down to where it should be
}


void marioUpdate(){
    if(init[5]->dir){
        if(init[5]->offsetx < init[5]->next_offsetx){
            init[5]->offsetx += 0.008;
            if(init[5]->offsetx > 1.5 && init[3]->next_offsety == 0){
                init[3]->next_offsety -= 0.99;
                win();
            }
        }
    }
    else {
        if(init[5]->offsetx > init[5]->next_offsetx){
            init[5]->offsetx -= 0.008;
        }
    }
    checklose();
    
}



void myIdle(){
    goombaUpdate();
    //flagUpdate();
    marioUpdate();
    jump();
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
   
    init[4]->startx_left = 0.14;
    init[4]->startx_right = 0.17;
    init[5]->startx_left = -0.85;
    init[5]->startx_right = -0.72;
  
    
    for(int i = 0; i < init.size(); i++){
        init[i]->draw();
    }
    glutSwapBuffers();
}

void myKey(unsigned char key, int x, int y){
    double right = init[5]->startx_right + init[5]->offsetx;
    double left = init[5]->startx_left + init[5]->offsetx;
    double a = abs(init[5]->next_offsety - init[5]->offsety);
    double b = 0.001;
    switch (key) {
        case 'W':
        case 'w':
           
            if( (b - a) > ( (fabs(a) < fabs(b) ? fabs(b) : fabs(a)) * 0.001) ){
                init[5]->next_offsety += 0.4;
                init[5]->diry = true;
            }

            break;
        case 'D':
        case 'd':
            if(right + 0.048 > -0.46 && right + 0.048 < -0.29 && init[5]->offsety < 0.23){
                init[5]->next_offsetx = 0.256;
                init[5]->dir = true;
            } else if(right + 0.048 > 0.19 && right + 0.048 < 0.36 && init[5]->offsety < 0.48)  {
                init[5]->next_offsetx = 0.896;
                init[5]->dir = true;
            } else {
                init[5]->next_offsetx += 0.048;
                init[5]->dir = true;
            }
            break;
        case 'A':
        case 'a':
            if(left - 0.048 < -0.29 && left - 0.048 > -0.46){
                //fix the offset
                init[5]->next_offsetx = 0.424;
                init[5]->dir = false;
            } else if(left - 0.048 < 0.36 && left - 0.048 > 0.19) {
                //fix the offset
                init[5]->next_offsetx = 1.072;
                init[5]->dir = false;
            }
            else {
                init[5]->next_offsetx -= 0.048;
                init[5]->dir = false;
            }
            break;
        default:
            break;
    }
   
}


int main(int argc, char * argv[]) {
        
    glutInit( &argc, argv );
    glutInitWindowPosition( 100, 100 );
    glutInitWindowSize( 2400, 600 );
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH );
    glutCreateWindow( "Mario" );
    
    
    glutDisplayFunc( display );
    glutKeyboardFunc( myKey );
    glutIdleFunc( myIdle );
    glutMainLoop();
    
    return EXIT_SUCCESS;
   
}
