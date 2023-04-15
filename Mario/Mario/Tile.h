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
    int startx;
    int starty;
    int width;
    int height;
    float offsetx = 0;
    float offsety = 0;

    virtual void draw() = 0;
    virtual void move() = 0;
};


#endif /* Tile_h */
