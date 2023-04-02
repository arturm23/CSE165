#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include "Sortable.h"

using namespace std;

class Circle : public Sortable {
    public:
        float radius;

        Circle(){
            radius = 0;
        }
        Circle(int n){
            radius = n;
        }
        bool compare(const Sortable* s){
            Circle* c = (Circle*) s;
            return radius < c->radius;
        }
        void print(){
            cout << "Circle with radius: " << radius << endl;
        }
};



#endif