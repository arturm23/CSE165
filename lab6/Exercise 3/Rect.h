#ifndef RECT_H
#define RECT_H

#include <iostream> 
#include "Vec.h"

using namespace std;

class Rect{
    public:
    float x;
    float y;
    float width;
    float height;
    Rect(float a, float b, float c, float d){
        x = a;
        y = b; 
        width = c;
        height = d;
    }
    bool contains(Vec a){
        if(a.x < x || a.x > x + width){
            return false;
        }
        if(a.y > y || a.y < a.y - height){
            return false;
        }
        return true;
    }
    
};

#endif