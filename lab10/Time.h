#ifndef TIME_H 
#define TIME_H

#include <iostream>

using namespace std;

class Time {
    public: 
        int hour;
        int minute;
        int second;
        
        Time(int hour, int minute, int second){
            this->hour = hour;
            this->minute = minute;
            this->second = second;
        }

        void setHour(int hour){
            this->hour = hour;
        }
        void setMinute(int minute){
            this->minute = minute;
        }
        void setSecond(int second){
            this->second = second;
        }

        int getHour(){
            return this->hour;
        }
        int getMinute(){
            return this->minute;
        }
        int getSecond(){
            return this->second;
        }

        
        void print(){
            cout << this->hour << " hours, " << this->minute << " minutes, " << this->second << " seconds" << endl;
        }

        Time operator+ (Time &first){
            int s = this->second + first.second;
            int m = this->minute + first.minute;
            int h = this->hour + first.hour;
            while(s >= 60 ){
                s-=60;
                m+=1;
            }
            while(m >=60){
                m-=60;
                h+=1;
            }
            while(h >= 24){
                h-=24;
            }
            return Time(h, m, s);
        }

        Time& operator++(){
            this->hour++;
            return *this;
        }
        Time operator++(int){
            Time temp = *this;
            this->hour++;
            return temp;
        }
        
        ~Time(){

        }

};



#endif