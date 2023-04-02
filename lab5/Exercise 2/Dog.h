#ifndef DOG_H
#define DOG_H

#include <iostream>
#include "Animal.h"
#include <string>

using namespace std;

class Dog : public Animal{

    public:
        Dog(){
            cout << "Creating Dog" << endl;
        }
        Dog(string name, int age)
        :Animal() 
        {
            cout << "Creating Dog" << endl;
            this->name = name;
            this->age = age;
        }  
        ~Dog(){
            cout << "Deleting Dog" << endl;
        }
        void feed() {
		    cout << "Dog food, please!" << endl;
	    }
};

#endif
