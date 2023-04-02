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

        Participant(string name, int age, double score){
            this->name = name;
            this->age = age;
            this->score = score;
        }
        bool compare (const Sortable* s){
            if(dynamic_cast<const Participant*>(s)){
                const Participant* p = dynamic_cast<const Participant*>(s);
                if(score != p->score){
                return score > p->score;
                }
                if(age != p->age){
                    return age < p->age;
                }
                return name < p->name;
            } else {
                return false;
            }
        }

        void print(){
            cout << name << "\t" << age << "\t" << score << endl;
        }


};




#endif