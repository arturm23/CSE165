//
//  Tube.h
//  Mario
//
//  Created by Artur Musayelyan on 4/10/23.
//

#ifndef Tube_h
#define Tube_h

#include <iostream>
#include "Tile.h"

using namespace std;

class Tube : public Tile {
public:
    void draw(){
        glBegin( GL_QUADS );
            glColor3f(0.137,0.812,0.149);
            glVertex3f(-0.45, -0.55, 1);
            glVertex3f(-0.30, -0.55, 1);
            glVertex3f(-0.30, -0.695, 1);
            glVertex3f(-0.45, -0.695, 1);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f(0.137,0.812,0.149);
            glVertex3f(-0.46, -0.47, 1);
            glVertex3f(-0.29, -0.47, 1);
            glVertex3f(-0.29, -0.55, 1);
            glVertex3f(-0.46, -0.55, 1);
        glEnd();
        
        glBegin( GL_QUADS );
            glColor3f(0.137,0.812,0.149);
            glVertex3f(0.2, -0.30, 1);
            glVertex3f(0.35, -0.30, 1);
            glVertex3f(0.35, -0.695, 1);
            glVertex3f(0.2, -0.695, 1);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f(0.137,0.812,0.149);
            glVertex3f(0.19, -0.22, 1);
            glVertex3f(0.36, -0.22, 1);
            glVertex3f(0.36, -0.30, 1);
            glVertex3f(0.19, -0.30, 1);
        glEnd();
    }
  
};


#endif /* Tube_h */
