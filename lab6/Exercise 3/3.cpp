#include <iostream>
#include "Rect.h"
#include <vector>

using namespace std;


int main() {
    vector<Rect> v;
    float a,b,c,d;
    while(true){
        if(v.empty()){
            cout << "Type 4 floats to define a rectangle:";
        } else {
            cout << "Type 4 floats to define the next rectangle:";
        }
        cin >> a >> b >> c >> d;
        if(a < 0 && b < 0 && c < 0 && d < 0){
            while(true){
                float x, y;
                cout << endl;
                cout << "Type 2 floats to define a point:" ;
                cin >> x >> y;
                Vec p = Vec(x,y);
                if(x == -99 & y == -99){
                    cout << "Finished!" << endl;
                    return 0;
                }
                for(int i = 0; i < v.size(); i++){
                    if(v.at(i).contains(p)){
                        cout << "The point is INSIDE of rectangle " << i << endl;
                    } else {
                        cout << "The point is OUTSIDE of rectangle " << i << endl;
                    }
                }
            }
        } else { 
            Rect curr = Rect(a,b,c,d);
            v.push_back(curr);
        }
    }

}
