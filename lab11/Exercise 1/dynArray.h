#ifndef DYNARRAY_H
#define DYNARRAY_H

#include <iostream>
#include <vector>

using namespace std;

template<class T>
class DynArray {
    public: 
        vector<T> v;
        void add(T n){
            v.push_back(n);
        }

        T& operator[](int index){
            return v[index];
        }

};




#endif