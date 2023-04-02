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
            if(dynamic_cast<const Circle*>(s)){
                return radius < dynamic_cast<const Circle*>(s)->radius;
            } else {
                return true;
            }
        }
        void print(){
            cout << "Circle with radius: " << radius << endl;
        }
};



#endif