#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>

#define pi 3.14159

using namespace std;

class Circle {
    double x;
    double y;
    double r;

    public:
    double area;
    Circle(){
        x = 0;
        y = 0;
        r = 1;
        area = pi;
    }
    Circle(double x, double y, double r){
        this->x = x;
        this->y = y;
        this->r = r;
        area = pi * (r*r);
    }
    

    void setX(double x){
        this->x = x;
    }
    void setY(double y){
        this->y = y;
    }
    void setR(double r){
        this->r = r;
        area = pi * (r*r);
    }

    double getX(){
        return x;
    }
    double getY(){
        return y;
    }
    double getR(){
        return r;
    }
    
};

#endif