#include <iostream>
#include "display.h"
#include "Animal.h"
#include "Dog.h"
#include <string>
#include <vector>

using namespace std;

int main(){

    int N; 
    cin >> N;

    vector<Animal*> vect;

    char c;
    string s;
    int num;
    for(int i = 0; i < N; i++){
        cin >> c;
        cin >> s;
        cin >> num;
        if(c == 'A'){
            Animal* a = new Animal();
            a->setName(s);
            a->setAge(num);
            vect.push_back(a);
        } 
        if (c == 'D'){
            Dog* d = new Dog(s,num);
            vect.push_back((Animal*)d);
        }
    }

    display(vect);

    return 0;
}