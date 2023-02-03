#include <iostream>

using namespace std;

int main() 
{ 
    int num; 
    cout << "Enter an Integer:";
    cin >> num;

    if(num < 0)
    {
        cout << "NEGATIVE" << endl;
    } else 
    {
        cout << "POSITIVE" << endl;
    }
    if(num % 2 == 0)
    {
        cout << "EVEN" << endl;
    } else 
    {
        cout << "ODD" << endl;
    }  


    return 0;
}