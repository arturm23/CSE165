//
//  Floor.h
//  Mario
//
//  Created by Artur Musayelyan on 4/9/23.
//

#ifndef Floor_h
#define Floor_h

#include <iostream>
#include "Tile.h"

using namespace std;

class Floor : public Tile{
public:
    void draw(){
        glBegin( GL_QUADS );
            glColor3f(0.922,0.333,0.204);
            glVertex3f(-1, -0.7, 0.0);
            glVertex3f(1, -0.7, 0.0);
            glVertex3f(1, -1, 0.0);
            glVertex3f(-1, -1, 0.0);
        glEnd();
        for(int i = 1; i < 7; i++){
            glBegin( GL_LINES );
                glColor3f(0.0,0.0,0.0);
                glVertex3f(-1, -1 + (i*0.05), 0.0);
                glVertex3f(1, -1 + (i*0.05), 0.0);
            glEnd();
            if(i % 2 == 1){
                for(int j = 1; j < 50; j++){
                    glBegin( GL_LINES );
                        glColor3f(0.0,0.0,0.0);
                        glVertex3f(-1 + (j*0.05), -1 + (i*0.05), 0.0);
                        glVertex3f(-1 + (j*0.05), -1 + ((i - 1)*0.05), 0.0);
                    glEnd();
                }
            } else {
                for(int j = 1; j < 50; j++){
                    glBegin( GL_LINES );
                        glColor3f(0.0,0.0,0.0);
                        glVertex3f(-1.03 + (j*0.05), -1 + (i*0.05), 0.0);
                        glVertex3f(-1.03 + (j*0.05), -1 + ((i -1)*0.05), 0.0);
                    glEnd();
                }
            }
        }
    }
 
};


#endif /* Floor_h */
