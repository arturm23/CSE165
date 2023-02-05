#include <iostream>
#include <bitset>

using namespace std;



int main() {

    int n = 1;

    while(true){
        cout << "Enter an integer:";
        cin >> n;
        if(n >= 0){
            cout << hex << n << endl;
            cout << bitset<32>(n) << endl;
        } else {
            return 0;
        }
    }

    return 0;
}