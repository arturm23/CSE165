#ifndef APP_H
#define APP_H

#include <iostream>
#include "Rect.h"

using namespace std;

class AppWindow {
    protected:
        Rect r;
    public:
    
    AppWindow(){
        r.x = 0;
        r.y = 0;
        r.w = 0;
        r.h = 0;
    }
    AppWindow(float x, float y, float w, float h){
        this->r.x = x;
        this->r.y = y;
        this->r.w = w;
        this->r.h = h;
    }
    AppWindow(const Rect& r){
        this->r.x = r.x;
        this->r.y = r.y;
        this->r.w = r.w;
        this->r.h = r.h;
    }

    const Rect& get_rect(){
        return r;
    }
    virtual void resize(int w, int h){
        this->r.w = w;
        this->r.h = h;
    }

};


class CircleWin : public AppWindow {
    protected: 
        float radius; 
    public:
        CircleWin() : AppWindow(){ 
            radius = max(r.w,r.h);
        }
        CircleWin(float x, float y, float w, float h) 
        : AppWindow(x, y, w, h){
            radius = max(r.w,r.h);
        }
        CircleWin(const Rect& r)
        : AppWindow(r){
            radius = max(r.w, r.h);
        }
        void resize(int w, int h) override{
            this->r.w = w;
            this->r.h = h;
            radius = max(w,h);
            cout << "radius: " << radius << endl;
        } ;

};

class RectWin : public AppWindow {
    protected: 
        float area;
    public:
        RectWin() 
        : AppWindow(){
            area = r.w * r.h;
        }
        RectWin(float x, float y, float w, float h) 
        : AppWindow(x, y, w, h){
            area = r.w * r.h;
        }
        RectWin(const Rect& r)
        : AppWindow(r){
            area = r.w * r.h;
        }
        void resize(int w, int h) override{
            this->r.w = w;
            this->r.h = h;
            area = w * h;
            cout << "area: " << area << endl;
        } ;
    
};


#endif