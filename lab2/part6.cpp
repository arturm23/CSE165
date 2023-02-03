#include <iostream>
#include <bitset>
#include <string>
#include <cmath>

using namespace std;

int getBit(int n, int index){
    string b = bitset<32>(n).to_string();
    
    if(b.at(31 - index) == '0' ){
        return 0;
    } else {
        return 1;
    }
}

int setBit(int n, int index){
    string b = bitset<32>(n).to_string();
    b.at(31-index) = '1';
    int num = 0;
    int j = 0;
    for(int i = 31; i >= 0; i--){
        if(b.at(i) == '1'){
            num += pow(2, j);
        }
        j++;
    }
    return num;
}

int clearBit(int n, int index){
    string b = bitset<32>(n).to_string();
    b.at(31-index) = '0';
    int num = 0;
    int j = 0;
    for(int i = 31; i >= 0; i--){
        if(b.at(i) == '1'){
            num += pow(2, j);
        }
        j++;
    }
    return num;
}

int main() {

    int n;
    int index; 

    cout << "Enter n: ";
    cin >> n;
    cout << "Enter index: ";
    cin >> index;

    cout << bitset<32>(n) << endl; 

    cout << getBit(n, index) << endl;
    cout << setBit(n, index) << endl;
    cout << clearBit(n, index) << endl;

    return 0;
}