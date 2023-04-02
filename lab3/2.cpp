#include <iostream>
#include <vector>

using namespace std;

vector<char> v_C;
vector<int> v_N;

void output(){
    for(int i = 0; i < v_C.size(); i++){
        if(v_N[i] == -1){
            cout << endl;
        } else {
            for(int j = 0; j < v_N[i]; j++){
                cout << v_C[i];
            }
        }
    }
}

int main(){

    char C;
    int N;

    while(true){
        cin >> C;
        cin >> N;
        if(N == -2){
            output();
            return 0;
        } else {
            v_C.push_back(C);
            v_N.push_back(N);
        }

    }



    return 0;
}