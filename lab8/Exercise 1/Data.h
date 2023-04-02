#ifndef DATA_H
#define DATA_H

#include <iostream> 
#include <vector>

using namespace std;

class Data {
    public: 
        vector<int> v;

        void add(int number){
            v.push_back(number);
        }

        void sort() {
            for(int i = 0; i < v.size()-1; i++){
                int min = i;
                for(int j = i+1; j < v.size(); j++){
                    if(v[j] < v[min]){
                        min = j;
                    }
                }
                int temp = v[min];
                v[min] = v[i];
                v[i] = temp;
            }
        }

        void print(){
            for(int i = 0; i < v.size(); i++){
                cout << v.at(i) << " ";
            }
            cout << endl;
        }

};



#endif