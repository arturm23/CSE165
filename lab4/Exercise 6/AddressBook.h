#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H

#include <iostream>
#include "Entry.h"
#include <vector>
#include <string>

struct AddressBook{
    
    std::vector<Entry> v;

    AddressBook(std::string f, std::string l, std::string e){
        Entry n;
        n.setName(f);
        n.setLastname(l);
        n.setEmail(e);
        v.push_back(n);
    }

    void add(AddressBook* k){
        for(int i = 0; i < k->v.size(); i++){
            v.push_back(k->v.at(i));
        }
    }
    
    void print(){
        for(int i = 0; i < v.size(); i++){
            v.at(i).print();
        }
    }


};


#endif