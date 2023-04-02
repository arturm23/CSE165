#include <iostream>
#include <vector> 

using namespace std;

int sum(vector<int> vect){
    int s = 0;
    for(int i = 0; i < vect.size(); i++){
        s+= vect[i];
    }
    return s;
}
void print(vector<int> vect){
    for(int i = 0; i < vect.size();i++){
        cout << vect[i] << " ";
    }
    cout << endl;
}

int main(){

    vector<int> v;
    int n;
    while(true){
        cin >> n;
        if(n == 0){
            cout << v.size() << " ";
            cout << sum(v);
            return 0;
        } else if(n > 0){
            v.push_back(n);
        } else {
            for(int i = 0; i < v.size(); i++){
                if(v[i] == abs(n)){
                    v.erase(v.begin() + i);
                }
            }
        }
    }

}