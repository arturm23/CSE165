//
//  Goomba.h
//  Mario
//
//  Created by Artur Musayelyan on 4/14/23.
//

#ifndef Goomba_h
#define Goomba_h

using namespace std;

class Goomba : public Tile{
public:
    void draw(){
        glBegin( GL_QUADS );
            glColor3f(0.878,0.686,0.8);
            glVertex3f(0.14 + offsetx, -0.697 + offsety, 0.0);
            glVertex3f(0.17 + offsetx, -0.697 + offsety, 0.0);
            glVertex3f(0.17 + offsetx, -0.65 + offsety, 0.0);
            glVertex3f(0.14 + offsetx, -0.65 + offsety, 0.0);
        glEnd();
        //head
        glBegin( GL_TRIANGLES );
            glColor3f(0.961,0,0);
            glVertex3f(0.13 + offsetx, -0.65 + offsety, 1);
            glVertex3f(0.18 + offsetx, -0.65 + offsety, 1);
            glVertex3f(0.155 + offsetx, -0.6 + offsety, 1);
        glEnd();
    }
    
    
    

};


#endif /* Goomba_h */
