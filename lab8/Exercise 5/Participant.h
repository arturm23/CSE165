#ifndef PARTICIPANT_H
#define PARTICIPANT_H

#include <iostream>
#include <string>
#include "Sortable.h"

using namespace std;


class Participant : public Sortable{ 
    public: 
        string name;
        int age;
        double score;
        static bool (*comp_cb)(const Participant*, const Participant*);

        Participant(string name, int age, double score){
            this->name = name;
            this->age = age;
            this->score = score;
        }
        bool compare (const Sortable* s){
            return comp_cb(this, (Participant*)s);
        }

        void print(){
            cout << name << "\t" << age << "\t" << score << endl;
        }


};




#endif