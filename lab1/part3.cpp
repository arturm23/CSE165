#include <iostream>
#include <fstream>
#include <string> 

using namespace std;

int main()
{
    ifstream input("words.txt");
    string word;
    int num = 0;
    while(input >> word){
        //cout << word << endl;
        num++;
    }
    input.close();

    cout << num << endl;
    
    return 0;
}