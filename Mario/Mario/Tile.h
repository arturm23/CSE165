//
//  Tile.h
//  Mario
//
//  Created by Artur Musayelyan on 4/8/23.
//

#ifndef Tile_h
#define Tile_h

#include <iostream>
#include <OpenGL/gl.h>
#include <OpenGl/glu.h>
#include <GLUT/glut.h>

using namespace std;

class Tile {
public:
    double startx_right = 0;
    double starty_right = 0;
    double startx_left = 0;
    double starty_left = 0;
    
    
    bool dir = true;
    bool diry = true;
    double offsetx = 0;
    double offsety = 0;
    double next_offsetx = 0;
    double next_offsety = 0;
    double ground = -0.697;

    virtual void draw() = 0;
    
};


#endif /* Tile_h */
