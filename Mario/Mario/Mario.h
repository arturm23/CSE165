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
            glColor3f(0.502,0.278,0.086);
            glVertex3f(-0.85 + offsetx, -0.697 + offsety, 0.0);
            glVertex3f(-0.81 + offsetx, -0.697 + offsety, 0.0);
            glVertex3f(-0.81 + offsetx, -0.68 + offsety, 0.0);
            glVertex3f(-0.85 + offsetx, -0.68 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f(0.502,0.278,0.086);
            glVertex3f(-0.84 + offsetx, -0.68 + offsety, 0.0);
            glVertex3f(-0.81 + offsetx, -0.68 + offsety, 0.0);
            glVertex3f(-0.81 + offsetx, -0.66 + offsety, 0.0);
            glVertex3f(-0.84 + offsetx, -0.66 + offsety, 0.0);
        glEnd();
        //footright
        glBegin( GL_QUADS );
            glColor3f(0.502,0.278,0.086);
            glVertex3f(-0.76 + offsetx, -0.697 + offsety, 0.0);
            glVertex3f(-0.72 + offsetx, -0.697 + offsety, 0.0);
            glVertex3f(-0.72 + offsetx, -0.68 + offsety, 0.0);
            glVertex3f(-0.76 + offsetx, -0.68 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f(0.502,0.278,0.086);
            glVertex3f(-0.76 + offsetx, -0.68 + offsety, 0.0);
            glVertex3f(-0.73 + offsetx, -0.68 + offsety, 0.0);
            glVertex3f(-0.73 + offsetx, -0.66 + offsety, 0.0);
            glVertex3f(-0.76 + offsetx, -0.66 + offsety, 0.0);
        glEnd();
        //body
//        glBegin( GL_QUADS );
//            glColor3f(1.0, 0.0,0.0);
//            glVertex3f(-0.83 + offsetx, -0.66 + offsety, 0.0);
//            glVertex3f(-0.74 + offsetx, -0.66 + offsety, 0.0);
//            glVertex3f(-0.74 + offsetx, -0.52 + offsety, 0.0);
//            glVertex3f(-0.83 + offsetx, -0.52 + offsety, 0.0);
//        glEnd();
        //blue parts
        glBegin( GL_QUADS );
            glColor3f(0,0.004,0.988);
            glVertex3f(-0.83 + offsetx, -0.66 + offsety, 0.0);
            glVertex3f(-0.80 + offsetx, -0.66 + offsety, 0.0);
            glVertex3f(-0.80 + offsetx, -0.62 + offsety, 0.0);
            glVertex3f(-0.83 + offsetx, -0.62 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f(0,0.004,0.988);
            glVertex3f(-0.77 + offsetx, -0.66 + offsety, 0.0);
            glVertex3f(-0.73 + offsetx, -0.66 + offsety, 0.0);
            glVertex3f(-0.73 + offsetx, -0.62 + offsety, 0.0);
            glVertex3f(-0.77 + offsetx, -0.62 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f(0,0.004,0.988);
            glVertex3f(-0.80 + offsetx, -0.64 + offsety, 0.0);
            glVertex3f(-0.77 + offsetx, -0.64 + offsety, 0.0);
            glVertex3f(-0.77 + offsetx, -0.56 + offsety, 0.0);
            glVertex3f(-0.80 + offsetx, -0.56 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f(0,0.004,0.988);
            glVertex3f(-0.82 + offsetx, -0.62 + offsety, 0.0);
            glVertex3f(-0.80 + offsetx, -0.62 + offsety, 0.0);
            glVertex3f(-0.80 + offsetx, -0.60 + offsety, 0.0);
            glVertex3f(-0.82 + offsetx, -0.60 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f(0,0.004,0.988);
            glVertex3f(-0.82 + offsetx, -0.60 + offsety, 0.0);
            glVertex3f(-0.81 + offsetx, -0.60 + offsety, 0.0);
            glVertex3f(-0.81 + offsetx, -0.58 + offsety, 0.0);
            glVertex3f(-0.82 + offsetx, -0.58 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f(0,0.004,0.988);
            glVertex3f(-0.77 + offsetx, -0.62 + offsety, 0.0);
            glVertex3f(-0.75 + offsetx, -0.62 + offsety, 0.0);
            glVertex3f(-0.75 + offsetx, -0.60 + offsety, 0.0);
            glVertex3f(-0.77 + offsetx, -0.60 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f(0,0.004,0.988);
            glVertex3f(-0.76 + offsetx, -0.60 + offsety, 0.0);
            glVertex3f(-0.75 + offsetx, -0.60 + offsety, 0.0);
            glVertex3f(-0.75 + offsetx, -0.58 + offsety, 0.0);
            glVertex3f(-0.76 + offsetx, -0.58 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f(0,0.004,0.988);
            glVertex3f(-0.77 + offsetx, -0.58 + offsety, 0.0);
            glVertex3f(-0.76 + offsetx, -0.58 + offsety, 0.0);
            glVertex3f(-0.76 + offsetx, -0.52 + offsety, 0.0);
            glVertex3f(-0.77 + offsetx, -0.52 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f(0,0.004,0.988);
            glVertex3f(-0.81 + offsetx, -0.58 + offsety, 0.0);
            glVertex3f(-0.80 + offsetx, -0.58 + offsety, 0.0);
            glVertex3f(-0.80 + offsetx, -0.52 + offsety, 0.0);
            glVertex3f(-0.81 + offsetx, -0.52 + offsety, 0.0);
        glEnd();
        // yellow parts
        glBegin( GL_QUADS );
            glColor3f( 0.988,0.988,0);
            glVertex3f(-0.81 + offsetx, -0.60 + offsety, 0.0);
            glVertex3f(-0.80 + offsetx, -0.60 + offsety, 0.0);
            glVertex3f(-0.80 + offsetx, -0.58 + offsety, 0.0);
            glVertex3f(-0.81 + offsetx, -0.58 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0.988,0.988,0);
            glVertex3f(-0.77 + offsetx, -0.60 + offsety, 0.0);
            glVertex3f(-0.76 + offsetx, -0.60 + offsety, 0.0);
            glVertex3f(-0.76 + offsetx, -0.58 + offsety, 0.0);
            glVertex3f(-0.77 + offsetx, -0.58 + offsety, 0.0);
        glEnd();
       //red parts
        glBegin( GL_QUADS );
            glColor3f( 1,0,0);
            glVertex3f(-0.80 + offsetx, -0.56 + offsety, 0.0);
            glVertex3f(-0.77 + offsetx, -0.56 + offsety, 0.0);
            glVertex3f(-0.77 + offsetx, -0.52 + offsety, 0.0);
            glVertex3f(-0.80 + offsetx, -0.52 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 1,0,0 );
            glVertex3f(-0.75 + offsetx, -0.60 + offsety, 0.0);
            glVertex3f(-0.74 + offsetx, -0.60 + offsety, 0.0);
            glVertex3f(-0.74 + offsetx, -0.58 + offsety, 0.0);
            glVertex3f(-0.75 + offsetx, -0.58 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 1,0,0 );
            glVertex3f(-0.83 + offsetx, -0.60 + offsety, 0.0);
            glVertex3f(-0.82 + offsetx, -0.60 + offsety, 0.0);
            glVertex3f(-0.82 + offsetx, -0.58 + offsety, 0.0);
            glVertex3f(-0.83 + offsetx, -0.58 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 1,0,0 );
            glVertex3f(-0.83 + offsetx, -0.58 + offsety, 0.0);
            glVertex3f(-0.81 + offsetx, -0.58 + offsety, 0.0);
            glVertex3f(-0.81 + offsetx, -0.52 + offsety, 0.0);
            glVertex3f(-0.83 + offsetx, -0.52 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 1,0,0 );
            glVertex3f(-0.84 + offsetx, -0.58 + offsety, 0.0);
            glVertex3f(-0.83 + offsetx, -0.58 + offsety, 0.0);
            glVertex3f(-0.83 + offsetx, -0.54 + offsety, 0.0);
            glVertex3f(-0.84 + offsetx, -0.54 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 1,0,0 );
            glVertex3f(-0.85 + offsetx, -0.58 + offsety, 0.0);
            glVertex3f(-0.84 + offsetx, -0.58 + offsety, 0.0);
            glVertex3f(-0.84 + offsetx, -0.56 + offsety, 0.0);
            glVertex3f(-0.85 + offsetx, -0.56 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 1,0,0 );
            glVertex3f(-0.76 + offsetx, -0.58 + offsety, 0.0);
            glVertex3f(-0.73 + offsetx, -0.58 + offsety, 0.0);
            glVertex3f(-0.73 + offsetx, -0.54 + offsety, 0.0);
            glVertex3f(-0.76 + offsetx, -0.54 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 1,0,0 );
            glVertex3f(-0.73 + offsetx, -0.58 + offsety, 0.0);
            glVertex3f(-0.72 + offsetx, -0.58 + offsety, 0.0);
            glVertex3f(-0.72 + offsetx, -0.56 + offsety, 0.0);
            glVertex3f(-0.73 + offsetx, -0.56 + offsety, 0.0);
        glEnd();
        //hands
        glBegin( GL_QUADS );
            glColor3f( 0.945,0.761,0.49 );
            glVertex3f(-0.85 + offsetx, -0.64 + offsety, 0.0);
            glVertex3f(-0.83 + offsetx, -0.64 + offsety, 0.0);
            glVertex3f(-0.83 + offsetx, -0.58 + offsety, 0.0);
            glVertex3f(-0.85 + offsetx, -0.58 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0.945,0.761,0.49 );
            glVertex3f(-0.83 + offsetx, -0.62 + offsety, 0.0);
            glVertex3f(-0.82 + offsetx, -0.62 + offsety, 0.0);
            glVertex3f(-0.82 + offsetx, -0.60 + offsety, 0.0);
            glVertex3f(-0.83 + offsetx, -0.60 + offsety, 0.0);
        glEnd();
        
        glBegin( GL_QUADS );
            glColor3f( 0.945,0.761,0.49 );
            glVertex3f(-0.74 + offsetx, -0.64 + offsety, 0.0);
            glVertex3f(-0.72 + offsetx, -0.64 + offsety, 0.0);
            glVertex3f(-0.72 + offsetx, -0.58 + offsety, 0.0);
            glVertex3f(-0.74 + offsetx, -0.58 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0.945,0.761,0.49 );
            glVertex3f(-0.75 + offsetx, -0.62 + offsety, 0.0);
            glVertex3f(-0.74 + offsetx, -0.62 + offsety, 0.0);
            glVertex3f(-0.74 + offsetx, -0.60 + offsety, 0.0);
            glVertex3f(-0.75 + offsetx, -0.60 + offsety, 0.0);
        glEnd();
        
        //head
        //black
        glBegin( GL_QUADS );
            glColor3f(0,0,0);
            glVertex3f(-0.77 + offsetx, -0.50 + offsety, 0.0);
            glVertex3f(-0.73 + offsetx, -0.50 + offsety, 0.0);
            glVertex3f(-0.73 + offsetx, -0.48 + offsety, 0.0);
            glVertex3f(-0.77 + offsetx, -0.48 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f(0,0,0);
            glVertex3f(-0.76 + offsetx, -0.48 + offsety, 0.0);
            glVertex3f(-0.75 + offsetx, -0.48 + offsety, 0.0);
            glVertex3f(-0.75 + offsetx, -0.46 + offsety, 0.0);
            glVertex3f(-0.76 + offsetx, -0.46 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f(0,0,0);
            glVertex3f(-0.77 + offsetx, -0.46 + offsety, 0.0);
            glVertex3f(-0.76 + offsetx, -0.46 + offsety, 0.0);
            glVertex3f(-0.76 + offsetx, -0.42 + offsety, 0.0);
            glVertex3f(-0.77 + offsetx, -0.42 + offsety, 0.0);
        glEnd();
        //brown
        glBegin( GL_QUADS );
            glColor3f(0.502,0.278,0.086);
            glVertex3f(-0.83 + offsetx, -0.50 + offsety, 0.0);
            glVertex3f(-0.82 + offsetx, -0.50 + offsety, 0.0);
            glVertex3f(-0.82 + offsetx, -0.48 + offsety, 0.0);
            glVertex3f(-0.83 + offsetx, -0.48 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f(0.502,0.278,0.086);
            glVertex3f(-0.84 + offsetx, -0.48 + offsety, 0.0);
            glVertex3f(-0.83 + offsetx, -0.48 + offsety, 0.0);
            glVertex3f(-0.83 + offsetx, -0.44 + offsety, 0.0);
            glVertex3f(-0.84 + offsetx, -0.44 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f(0.502,0.278,0.086);
            glVertex3f(-0.83 + offsetx, -0.44 + offsety, 0.0);
            glVertex3f(-0.80 + offsetx, -0.44 + offsety, 0.0);
            glVertex3f(-0.80 + offsetx, -0.42 + offsety, 0.0);
            glVertex3f(-0.83 + offsetx, -0.42 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f(0.502,0.278,0.086);
            glVertex3f(-0.82 + offsetx, -0.48 + offsety, 0.0);
            glVertex3f(-0.81 + offsetx, -0.48 + offsety, 0.0);
            glVertex3f(-0.81 + offsetx, -0.44 + offsety, 0.0);
            glVertex3f(-0.82 + offsetx, -0.44 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f(0.502,0.278,0.086);
            glVertex3f(-0.81 + offsetx, -0.48 + offsety, 0.0);
            glVertex3f(-0.80 + offsetx, -0.48 + offsety, 0.0);
            glVertex3f(-0.80 + offsetx, -0.46 + offsety, 0.0);
            glVertex3f(-0.81 + offsetx, -0.46 + offsety, 0.0);
        glEnd();
        //skin
        glBegin( GL_QUADS );
            glColor3f( 0.945,0.761,0.49 );
            glVertex3f(-0.83 + offsetx, -0.48 + offsety, 0.0);
            glVertex3f(-0.82 + offsetx, -0.48 + offsety, 0.0);
            glVertex3f(-0.82 + offsetx, -0.44 + offsety, 0.0);
            glVertex3f(-0.83 + offsetx, -0.44 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0.945,0.761,0.49 );
            glVertex3f(-0.82 + offsetx, -0.52 + offsety, 0.0);
            glVertex3f(-0.77 + offsetx, -0.52 + offsety, 0.0);
            glVertex3f(-0.77 + offsetx, -0.48 + offsety, 0.0);
            glVertex3f(-0.82 + offsetx, -0.48 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0.945,0.761,0.49 );
            glVertex3f(-0.80 + offsetx, -0.48 + offsety, 0.0);
            glVertex3f(-0.77 + offsetx, -0.48 + offsety, 0.0);
            glVertex3f(-0.77 + offsetx, -0.42 + offsety, 0.0);
            glVertex3f(-0.80 + offsetx, -0.42 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0.945,0.761,0.49 );
            glVertex3f(-0.81 + offsetx, -0.46 + offsety, 0.0);
            glVertex3f(-0.80 + offsetx, -0.46 + offsety, 0.0);
            glVertex3f(-0.80 + offsetx, -0.44 + offsety, 0.0);
            glVertex3f(-0.81 + offsetx, -0.44 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0.945,0.761,0.49 );
            glVertex3f(-0.77 + offsetx, -0.48 + offsety, 0.0);
            glVertex3f(-0.76 + offsetx, -0.48 + offsety, 0.0);
            glVertex3f(-0.76 + offsetx, -0.46 + offsety, 0.0);
            glVertex3f(-0.77 + offsetx, -0.46 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0.945,0.761,0.49 );
            glVertex3f(-0.77 + offsetx, -0.52 + offsety, 0.0);
            glVertex3f(-0.75 + offsetx, -0.52 + offsety, 0.0);
            glVertex3f(-0.75 + offsetx, -0.50 + offsety, 0.0);
            glVertex3f(-0.77 + offsetx, -0.50 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0.945,0.761,0.49 );
            glVertex3f(-0.75 + offsetx, -0.48 + offsety, 0.0);
            glVertex3f(-0.72 + offsetx, -0.48 + offsety, 0.0);
            glVertex3f(-0.72 + offsetx, -0.46 + offsety, 0.0);
            glVertex3f(-0.75 + offsetx, -0.46 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0.945,0.761,0.49 );
            glVertex3f(-0.76 + offsetx, -0.46 + offsety, 0.0);
            glVertex3f(-0.73 + offsetx, -0.46 + offsety, 0.0);
            glVertex3f(-0.73 + offsetx, -0.44 + offsety, 0.0);
            glVertex3f(-0.76 + offsetx, -0.44 + offsety, 0.0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0.945,0.761,0.49 );
            glVertex3f(-0.76 + offsetx, -0.44 + offsety, 0.0);
            glVertex3f(-0.75 + offsetx, -0.44 + offsety, 0.0);
            glVertex3f(-0.75 + offsetx, -0.42 + offsety, 0.0);
            glVertex3f(-0.76 + offsetx, -0.42 + offsety, 0.0);
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
