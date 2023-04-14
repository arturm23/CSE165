//
//  Flag.h
//  Mario
//
//  Created by Artur Musayelyan on 4/10/23.
//

#ifndef Flag_h
#define Flag_h


#include <iostream>
#include "Tile.h"
#include <OpenGL/gl.h>
#include <OpenGl/glu.h>
#include <GLUT/glut.h>



using namespace std;

class Flag : public Tile {
 
    int count = 0;
    bool won = false;
public:
    float offset = 0.0;
    void draw(){
        glBegin( GL_QUADS );
            glColor3f(0.635,0.695,0.62);
            glVertex3f(0.75, 0.5, 1);
            glVertex3f(0.77, 0.5, 1);
            glVertex3f(0.77, -0.697, 1);
            glVertex3f(0.75, -0.697, 1);
        glEnd();
        glBegin( GL_TRIANGLES );
            glColor3f(1,1,1);
            glVertex3f(0.75, 0.5 + offset, 1);
            glVertex3f(0.75, 0.3 + offset, 1);
            glVertex3f(0.65, 0.5 + offset, 1);
        glEnd();
    }
    void move(){
//        glBegin( GL_QUADS );
//            glColor3f(0.18,0.796,1.0);
//            glVertex3f(0.75, 0.5, 1);
//            glVertex3f(0.77, 0.5, 1);
//            glVertex3f(0.77, -0.697, 1);
//            glVertex3f(0.75, -0.697, 1);
//        glEnd();
//        glBegin( GL_TRIANGLES );
//            glColor3f(0.18,0.796,1.0);
//            glVertex3f(0.75, 0.5 + offset, 1);
//            glVertex3f(0.75, 0.3 + offset, 1);
//            glVertex3f(0.65, 0.5 + offset, 1);
//        glEnd();
        this->offset -= 0.1;
        glBegin( GL_QUADS );
            glColor3f(0.635,0.695,0.62);
            glVertex3f(0.75, 0.5, 1);
            glVertex3f(0.77, 0.5, 1);
            glVertex3f(0.77, -0.697, 1);
            glVertex3f(0.75, -0.697, 1);
        glEnd();
        glBegin( GL_TRIANGLES );
            glColor3f(1,1,1);
            glVertex3f(0.75, 0.5 + offset, 1);
            glVertex3f(0.75, 0.3 + offset, 1);
            glVertex3f(0.65, 0.5 + offset, 1);
        glEnd();
    }
};

#endif /* Flag_h */
