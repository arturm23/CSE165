#include <iostream>

using namespace std;

int main (){

    int first;
    int second;
    cout << "Enter first integer: ";
    cin >> first;
    cout << "Enter second integer: ";
    cin >> second;  

    int* f_p = &first;
    int* s_p = &second;

    cout << *f_p + *s_p << endl;
    cout << *f_p - *s_p << endl;
    cout << *f_p * *s_p << endl;
    cout <<(float) *f_p / *s_p << endl;
    


    return 0;
}