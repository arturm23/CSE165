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
                if(V[i].size() != 0){
                    cout << V[i].size() * (i + 1) << " " << V[i].size() << endl;
                }   
            }
            return 0;
        }
        if(!contains(V[word.length() - 1], word)){
            V[word.length() - 1].push_back(word);
        }
    }
}