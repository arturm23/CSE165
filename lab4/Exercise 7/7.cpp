#include <iostream>

using namespace std;

int main(){

    struct one {
        char c;
        double d;
    };
    cout << sizeof(one) << endl;

    struct two{
        char c;
        char c_2;
        double d;
    };
    cout << sizeof(two) << endl;

    struct three{
        char c;
        char c_2;
        char c_3;
        double d;
    };
    cout << sizeof(three) << endl;

    struct four{
        char c;
        char c_2;
        char c_3;
        char c_4;
        double d;
    };
    cout << sizeof(four) << endl;

    struct empty {

    };
    cout << sizeof(empty) << endl;

    struct five {
        char c;
        int i;
        char c_2;
    };
    cout << sizeof(five) << endl;

    struct six {
        char c;
        char c_2;
        int i;
    };
    cout << sizeof(six) << endl;



    return 0;
}