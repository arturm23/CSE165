//
//  Mario.h
//  Mario
//
//  Created by Artur Musayelyan on 4/16/23.
//

#ifndef Mario_h
#define Mario_h

#include <iostream>
#include "Tile.h"

using namespace std;

class Mario : public Tile {
public:
    
    void draw(){
        //footleft
        glBegin( GL_QUADS );
            glColor3f(0.678, 0.569,0.294);
            glVertex3f(-0.85 + offsetx, -0.697 + offsety, 0.0);
            glVertex3f(-0.81 + offsetx, -0.697 + offsety, 0.0);
            glVertex3f(-0.81 + offsetx, -0.68 + offsety, 0.0);
            glVertex3f(-0.85 + offsetx, -0.68 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f(0.678, 0.569,0.294);
            glVertex3f(-0.84 + offsetx, -0.68 + offsety, 0.0);
            glVertex3f(-0.81 + offsetx, -0.68 + offsety, 0.0);
            glVertex3f(-0.81 + offsetx, -0.66 + offsety, 0.0);
            glVertex3f(-0.84 + offsetx, -0.66 + offsety, 0.0);
        glEnd();
        //footright
        glBegin( GL_QUADS );
            glColor3f(0.678, 0.569,0.294);
            glVertex3f(-0.76 + offsetx, -0.697 + offsety, 0.0);
            glVertex3f(-0.72 + offsetx, -0.697 + offsety, 0.0);
            glVertex3f(-0.72 + offsetx, -0.68 + offsety, 0.0);
            glVertex3f(-0.76 + offsetx, -0.68 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f(0.678, 0.569,0.294);
            glVertex3f(-0.76 + offsetx, -0.68 + offsety, 0.0);
            glVertex3f(-0.73 + offsetx, -0.68 + offsety, 0.0);
            glVertex3f(-0.73 + offsetx, -0.66 + offsety, 0.0);
            glVertex3f(-0.76 + offsetx, -0.66 + offsety, 0.0);
        glEnd();
        //body
        glBegin( GL_QUADS );
            glColor3f(1.0, 0.0,0.0);
            glVertex3f(-0.83 + offsetx, -0.66 + offsety, 0.0);
            glVertex3f(-0.74 + offsetx, -0.66 + offsety, 0.0);
            glVertex3f(-0.74 + offsetx, -0.52 + offsety, 0.0);
            glVertex3f(-0.83 + offsetx, -0.52 + offsety, 0.0);
        glEnd();
        //arms
        //head
        glBegin( GL_QUADS );
            glColor3f(0.678, 0.569,0.294);
            glVertex3f(-0.84 + offsetx, -0.52 + offsety, 0.0);
            glVertex3f(-0.73 + offsetx, -0.52 + offsety, 0.0);
            glVertex3f(-0.73 + offsetx, -0.42 + offsety, 0.0);
            glVertex3f(-0.84 + offsetx, -0.42 + offsety, 0.0);
        glEnd();
        //hat
        glBegin( GL_QUADS );
            glColor3f(1.0, 0.0,0.0);
            glVertex3f(-0.83 + offsetx, -0.42 + offsety, 0.0);
            glVertex3f(-0.73 + offsetx, -0.42 + offsety, 0.0);
            glVertex3f(-0.73 + offsetx, -0.40 + offsety, 0.0);
            glVertex3f(-0.83 + offsetx, -0.40 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f(1.0, 0.0,0.0);
            glVertex3f(-0.82 + offsetx, -0.40 + offsety, 0.0);
            glVertex3f(-0.76 + offsetx, -0.40 + offsety, 0.0);
            glVertex3f(-0.76 + offsetx, -0.38 + offsety, 0.0);
            glVertex3f(-0.82 + offsetx, -0.38 + offsety, 0.0);
        glEnd();
    };
   
};



#endif /* Mario_h */
