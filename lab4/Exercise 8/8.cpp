#include <iostream> 
#include "Stash.h"

using namespace std;

int main() {

    int increment; 
    cin >> increment;

    Stash s;
    s.initialize(sizeof(char), increment);

    char c;
    int n;

    while(true){
        cin >> c;
        cin >> n;
        if(c == '&'){
            for(int i = 0; i < s.count(); i++){
                cout << *((char*)s.fetch(i));
            }
            cout << endl;
            cout << s.calls << " " << s.quantity << endl;
            s.cleanup();
            return 0;
        } 
        if(n < 0){
            n *= -1;
            for(int i = 0; i < n; i++){
                s.add(&c);
            }
            char newline = '\n';
            s.add(&newline);
        } else {
            for(int i = 0; i < n; i++){
                s.add(&c);
            }
        }   
    }
    



    return 0;
}