#ifndef ENTRY_H
#define ENTRY_h

#include <iostream>
#include <string>

struct Entry {

    std::string first_name;
    std::string last_name;
    std::string email;

    void initialize(){
        first_name = "";
        last_name = "";
        email = "";
    }

    void setName(std::string s){
        first_name = s;
    }
    
    void setLastname(std::string s){
        last_name = s;
    }

    void setEmail(std::string s){
        email = s;
    }

    std::string getName(){
        return first_name;
    }

    std::string getLastname(){
        return last_name;
    }
    std::string getEmail(){
        return email;
    }

    void print(){
        std::cout << first_name <<  "," << last_name << "," << email << std::endl;
    }
};

#endif