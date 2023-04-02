#include <iostream>
#include "Stash.h"

using namespace std;

int main() {

    int size;

    cin >> size;

    Stash s;
    s.initialize(sizeof(double));

    double num;

    for(int i =0; i < size; i++){
        cin >> num;
        s.add(&num);
    }

    for(int i = 0; i < s.count(); i++){
        cout<<  *((double*)s.fetch(i)) << endl;
    }

    s.cleanup();

    return 0;
}

