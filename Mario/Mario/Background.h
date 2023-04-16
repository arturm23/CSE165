//
//  Background.h
//  Mario
//
//  Created by Artur Musayelyan on 4/10/23.
//

#ifndef Background_h
#define Background_h


#include <iostream>
#include "Tile.h"

using namespace std;

class Background : public Tile {
public:
    void draw(){
        glBegin( GL_QUADS );
            glColor3f(0.18,0.796,1.0);
            glVertex3f(-1, 1, 1);
            glVertex3f(1, 1, 1);
            glVertex3f(1, -1, 1);
            glVertex3f(-1, -1, 1);
        glEnd();
    }
    
};

#endif /* Background_h */
