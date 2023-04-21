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
template <class T >
class Iterator { 
    T& arr;
    int index;
    public: 
        Iterator(T& a) : arr(a), index(0)  {
            
        }
        int begin(){
            index = 0;
            return index;
        }
        bool at_end(){
            return index == arr.v.size();
        }
        void advance(){
            index++;
        }
        void print(){
            cout << index << ": " << arr.v[index] << endl;
        }
};







#endif