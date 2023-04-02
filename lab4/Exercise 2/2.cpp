#include <iostream>
#include "Stack.h"

using namespace std;

int main() {

    int size;

    cin >> size;

    Stack s;
    s.initialize();

    double num;

    for(int i =0; i < size; i++){
        cin >> num;
        s.push(new double(num));
    }

    double *d;
    
    while((d = (double*)s.pop()) != 0){
        cout << *d << endl;
        delete d;
    }

    s.cleanup();
    
    return 0;
}
