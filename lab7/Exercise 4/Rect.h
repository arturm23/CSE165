#ifndef RECT_H
#define RECT_H

#include <iostream> 
#include "Vec.h"

using namespace std;

class Rect{
    public:
    float x;
    float y;
    float w;
    float h;
    Rect(){
        x = 0;
        y = 0;
        w = 0;
        h = 0;
    }
    Rect(float a, float b, float c, float d){
        x = a;
        y = b; 
        w = c;
        h = d;
    }
    bool contains(Vec a){
        if(a.x < x || a.x > x + w){
            return false;
        }
        if(a.y > y || a.y < a.y - h){
            return false;
        }
        return true;
    }
    
};

#endif