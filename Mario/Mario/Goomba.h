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
        //foot left
        glBegin( GL_QUADS );
            glColor3f( 0,0,0 );
            glVertex3f(0.14 + offsetx,-0.69, 0);
            glVertex3f(0.165 + offsetx,-0.69, 0);
            glVertex3f(0.165 + offsetx,-0.67, 0);
            glVertex3f(0.14 + offsetx,-0.67, 0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0,0,0 );
            glVertex3f(0.145 + offsetx,-0.67, 0);
            glVertex3f(0.155 + offsetx,-0.67, 0);
            glVertex3f(0.155 + offsetx,-0.66, 0);
            glVertex3f(0.145 + offsetx,-0.66, 0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0,0,0 );
            glVertex3f(0.145 + offsetx,-0.697, 0);
            glVertex3f(0.17 + offsetx,-0.697, 0);
            glVertex3f(0.17 + offsetx,-0.69, 0);
            glVertex3f(0.145 + offsetx,-0.69, 0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0,0,0 );
            glVertex3f(0.165 + offsetx,-0.69, 0);
            glVertex3f(0.17 + offsetx,-0.69, 0);
            glVertex3f(0.17 + offsetx,-0.68, 0);
            glVertex3f(0.165 + offsetx,-0.68, 0);
        glEnd();
        //footright
        glBegin( GL_QUADS );
            glColor3f( 0,0,0 );
            glVertex3f(0.18 + offsetx,-0.697, 0);
            glVertex3f(0.205 + offsetx,-0.697, 0);
            glVertex3f(0.205 + offsetx,-0.68, 0);
            glVertex3f(0.18 + offsetx,-0.68, 0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0,0,0 );
            glVertex3f(0.205 + offsetx,-0.69, 0);
            glVertex3f(0.21 + offsetx,-0.69, 0);
            glVertex3f(0.21 + offsetx,-0.67, 0);
            glVertex3f(0.205 + offsetx,-0.67, 0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0,0,0 );
            glVertex3f(0.185 + offsetx,-0.68, 0);
            glVertex3f(0.205 + offsetx,-0.68, 0);
            glVertex3f(0.205 + offsetx,-0.67, 0);
            glVertex3f(0.185 + offsetx,-0.67, 0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0,0,0 );
            glVertex3f(0.195 + offsetx,-0.67, 0);
            glVertex3f(0.205 + offsetx,-0.67, 0);
            glVertex3f(0.205 + offsetx,-0.66, 0);
            glVertex3f(0.195 + offsetx,-0.66, 0);
        glEnd();
        //body
        glBegin( GL_QUADS );
            glColor3f( 1,0.78,0.561 );
            glVertex3f(0.165 + offsetx,-0.68, 0);
            glVertex3f(0.185 + offsetx,-0.68, 0);
            glVertex3f(0.185 + offsetx,-0.67, 0);
            glVertex3f(0.165 + offsetx,-0.67, 0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 1,0.78,0.561 );
            glVertex3f(0.155 + offsetx,-0.67, 0);
            glVertex3f(0.195 + offsetx,-0.67, 0);
            glVertex3f(0.195 + offsetx,-0.65, 0);
            glVertex3f(0.155 + offsetx,-0.65, 0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 1,0.78,0.561 );
            glVertex3f(0.16 + offsetx,-0.65, 0);
            glVertex3f(0.19 + offsetx,-0.65, 0);
            glVertex3f(0.19 + offsetx,-0.64, 0);
            glVertex3f(0.16 + offsetx,-0.64, 0);
        glEnd();
        //head
        glBegin( GL_QUADS );
            glColor3f( 0.8,0.4,0 );
            glVertex3f(0.135 + offsetx,-0.64, 0);
            glVertex3f(0.14 + offsetx,-0.64, 0);
            glVertex3f(0.14 + offsetx,-0.61, 0);
            glVertex3f(0.135 + offsetx,-0.61, 0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0.8,0.4,0 );
            glVertex3f(0.14 + offsetx,-0.65, 0);
            glVertex3f(0.145 + offsetx,-0.65, 0);
            glVertex3f(0.145 + offsetx,-0.59, 0);
            glVertex3f(0.14 + offsetx,-0.59, 0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0.8,0.4,0 );
            glVertex3f(0.145 + offsetx,-0.65, 0);
            glVertex3f(0.15 + offsetx,-0.65, 0);
            glVertex3f(0.15 + offsetx,-0.58, 0);
            glVertex3f(0.145 + offsetx,-0.58, 0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0.8,0.4,0 );
            glVertex3f(0.15 + offsetx,-0.65, 0);
            glVertex3f(0.155 + offsetx,-0.65, 0);
            glVertex3f(0.155 + offsetx,-0.59, 0);
            glVertex3f(0.15 + offsetx,-0.59, 0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0.8,0.4,0 );
            glVertex3f(0.155 + offsetx,-0.65, 0);
            glVertex3f(0.16 + offsetx,-0.65, 0);
            glVertex3f(0.16 + offsetx,-0.63, 0);
            glVertex3f(0.155 + offsetx,-0.63, 0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0.8,0.4,0 );
            glVertex3f(0.16 + offsetx,-0.64, 0);
            glVertex3f(0.19 + offsetx,-0.64, 0);
            glVertex3f(0.19 + offsetx,-0.63, 0);
            glVertex3f(0.16 + offsetx,-0.63, 0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0.8,0.4,0 );
            glVertex3f(0.17 + offsetx,-0.63, 0);
            glVertex3f(0.18 + offsetx,-0.63, 0);
            glVertex3f(0.18 + offsetx,-0.61, 0);
            glVertex3f(0.17 + offsetx,-0.61, 0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0.8,0.4,0 );
            glVertex3f(0.19 + offsetx,-0.65, 0);
            glVertex3f(0.195 + offsetx,-0.65, 0);
            glVertex3f(0.195 + offsetx,-0.63, 0);
            glVertex3f(0.19 + offsetx,-0.63, 0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0.8,0.4,0 );
            glVertex3f(0.195 + offsetx,-0.65, 0);
            glVertex3f(0.20 + offsetx,-0.65, 0);
            glVertex3f(0.20 + offsetx,-0.59, 0);
            glVertex3f(0.195 + offsetx,-0.59, 0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0.8,0.4,0 );
            glVertex3f(0.20 + offsetx,-0.65, 0);
            glVertex3f(0.205 + offsetx,-0.65, 0);
            glVertex3f(0.205 + offsetx,-0.58, 0);
            glVertex3f(0.20 + offsetx,-0.58, 0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0.8,0.4,0 );
            glVertex3f(0.205 + offsetx,-0.65, 0);
            glVertex3f(0.21 + offsetx,-0.65, 0);
            glVertex3f(0.21 + offsetx,-0.59, 0);
            glVertex3f(0.205 + offsetx,-0.59, 0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0.8,0.4,0 );
            glVertex3f(0.21 + offsetx,-0.64, 0);
            glVertex3f(0.215 + offsetx,-0.64, 0);
            glVertex3f(0.215 + offsetx,-0.61, 0);
            glVertex3f(0.21 + offsetx,-0.61, 0);
        glEnd();
        //eyes white left
        glBegin( GL_QUADS );
            glColor3f( 1,1,1 );
            glVertex3f(0.155 + offsetx,-0.63, 0);
            glVertex3f(0.16 + offsetx,-0.63, 0);
            glVertex3f(0.16 + offsetx,-0.59, 0);
            glVertex3f(0.155 + offsetx,-0.59, 0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 1,1,1 );
            glVertex3f(0.16 + offsetx,-0.63, 0);
            glVertex3f(0.17 + offsetx,-0.63, 0);
            glVertex3f(0.17 + offsetx,-0.62, 0);
            glVertex3f(0.16 + offsetx,-0.62, 0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 1,1,1 );
            glVertex3f(0.165 + offsetx,-0.62, 0);
            glVertex3f(0.17 + offsetx,-0.62, 0);
            glVertex3f(0.17 + offsetx,-0.61, 0);
            glVertex3f(0.165 + offsetx,-0.61, 0);
        glEnd();
        //eye white right
        glBegin( GL_QUADS );
            glColor3f( 1,1,1 );
            glVertex3f(0.19 + offsetx,-0.63, 0);
            glVertex3f(0.195 + offsetx,-0.63, 0);
            glVertex3f(0.195 + offsetx,-0.59, 0);
            glVertex3f(0.19 + offsetx,-0.59, 0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 1,1,1 );
            glVertex3f(0.18 + offsetx,-0.63, 0);
            glVertex3f(0.19 + offsetx,-0.63, 0);
            glVertex3f(0.19 + offsetx,-0.62, 0);
            glVertex3f(0.18 + offsetx,-0.62, 0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 1,1,1 );
            glVertex3f(0.18 + offsetx,-0.62, 0);
            glVertex3f(0.185 + offsetx,-0.62, 0);
            glVertex3f(0.185 + offsetx,-0.61, 0);
            glVertex3f(0.18 + offsetx,-0.61, 0);
        glEnd();
        //eyes balck
        glBegin( GL_QUADS );
            glColor3f( 0,0,0 );
            glVertex3f(0.15 + offsetx,-0.59, 0);
            glVertex3f(0.16 + offsetx,-0.59, 0);
            glVertex3f(0.16 + offsetx,-0.58, 0);
            glVertex3f(0.15 + offsetx,-0.58, 0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0,0,0 );
            glVertex3f(0.19 + offsetx,-0.59, 0);
            glVertex3f(0.20 + offsetx,-0.59, 0);
            glVertex3f(0.20 + offsetx,-0.58, 0);
            glVertex3f(0.19 + offsetx,-0.58, 0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0,0,0 );
            glVertex3f(0.16 + offsetx,-0.62, 0);
            glVertex3f(0.165 + offsetx,-0.62, 0);
            glVertex3f(0.165 + offsetx,-0.59, 0);
            glVertex3f(0.16 + offsetx,-0.59, 0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0,0,0 );
            glVertex3f(0.185 + offsetx,-0.62, 0);
            glVertex3f(0.19 + offsetx,-0.62, 0);
            glVertex3f(0.19 + offsetx,-0.59, 0);
            glVertex3f(0.185 + offsetx,-0.59, 0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0,0,0 );
            glVertex3f(0.165 + offsetx,-0.61, 0);
            glVertex3f(0.185 + offsetx,-0.61, 0);
            glVertex3f(0.185 + offsetx,-0.60, 0);
            glVertex3f(0.165 + offsetx,-0.60, 0);
        glEnd();
        //top
        glBegin( GL_QUADS );
            glColor3f( 0.8,0.4,0 );
            glVertex3f(0.165 + offsetx,-0.60, 0);
            glVertex3f(0.185 + offsetx,-0.60, 0);
            glVertex3f(0.185 + offsetx,-0.59, 0);
            glVertex3f(0.165 + offsetx,-0.59, 0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0.8,0.4,0 );
            glVertex3f(0.16 + offsetx,-0.59, 0);
            glVertex3f(0.19 + offsetx,-0.59, 0);
            glVertex3f(0.19 + offsetx,-0.58, 0);
            glVertex3f(0.16 + offsetx,-0.58, 0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0.8,0.4,0 );
            glVertex3f(0.15 + offsetx,-0.58, 0);
            glVertex3f(0.20 + offsetx,-0.58, 0);
            glVertex3f(0.20 + offsetx,-0.57, 0);
            glVertex3f(0.15 + offsetx,-0.57, 0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0.8,0.4,0 );
            glVertex3f(0.155 + offsetx,-0.57, 0);
            glVertex3f(0.195 + offsetx,-0.57, 0);
            glVertex3f(0.195 + offsetx,-0.56, 0);
            glVertex3f(0.155 + offsetx,-0.56, 0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0.8,0.4,0 );
            glVertex3f(0.16 + offsetx,-0.56, 0);
            glVertex3f(0.19 + offsetx,-0.56, 0);
            glVertex3f(0.19 + offsetx,-0.55, 0);
            glVertex3f(0.16 + offsetx,-0.55, 0);
        glEnd();
        glBegin( GL_QUADS );
            glColor3f( 0.8,0.4,0 );
            glVertex3f(0.165 + offsetx,-0.55, 0);
            glVertex3f(0.185 + offsetx,-0.55, 0);
            glVertex3f(0.185 + offsetx,-0.54, 0);
            glVertex3f(0.165 + offsetx,-0.54, 0);
        glEnd();
    }
    
};


#endif /* Goomba_h */
