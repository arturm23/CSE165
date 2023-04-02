#ifndef VEC_H
#define VEC_H

#include <iostream> 

using namespace std;

class Vec{
    

    public:
    float x;
    float y;
    Vec(){
        x = 0;
        y = 0;
    }
    Vec(float a, float b){
        x = a;
        y = b;
    }
    void set(float a, float b){
        x = a;
        y = b;
    }
    void add(Vec& a){
        x += a.x;
        y += a.y;
    }
    void print(){
        cout << '(' << x << ", " << y << ')' << endl;
    }
    
};

#endif