#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter an integer:";
    cin >> n;
    if(n < 2){
        return 0;
    }
    
    for(int i = 2; i < n; i++){
        bool flag = false;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                flag = true;
            }
            if(flag){
                break;
            }
        }
        if(!flag){
            cout << i << endl;
        }
    }


    return 0;
}