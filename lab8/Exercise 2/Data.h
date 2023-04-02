#ifndef DATA_H
#define DATA_H

#include <iostream> 
#include <vector>
#include "Sortable.h"

using namespace std;

class Data {
    public: 
        vector<Sortable*> v;

        void add(Sortable* number){
            v.push_back(number);
        }

        void sort() {
            for(int i = 0; i < v.size()-1; i++){
                int min = i;
                for(int j = i+1; j < v.size(); j++){
                    if(v[j]->compare(v[min])){
                        min = j;
                    }
                }
                Sortable* temp = v[min];
                v[min] = v[i];
                v[i] = temp;
            }
        }

        void print(){
            for(int i = 0; i < v.size(); i++){
                v[i]->print();
            }
            cout << endl;
        }

};



#endif