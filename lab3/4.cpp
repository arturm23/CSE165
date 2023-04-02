#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

string low(string s) {
    string ret = "";
    for(int i = 0; i < s.length(); i++){
        ret += tolower((char)s.at(i));
    }
    return ret;
}

bool contains(vector<string> vect, string s){
    for(int i = 0; i < vect.size(); i++){
        if(low(vect[i]) == low(s)){
            return true;
        }
    }
    return false;
}

int main() {

    vector<vector<string>> V(10);
    string word;

    while(true){
        cin >> word;
        if(word == "quit"){
            for(int i = 0; i < V.size(); i++){
                for(int j = 0; j < V[i].size(); j++){
                    cout << V[i][j] << " ";
                }
                cout << endl;
            }
            return 0;
        }
        if(!contains(V[word.length() - 1], word)){
            V[word.length() - 1].push_back(word);
        }
    }
}