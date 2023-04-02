#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;
vector<string> res;

string low(string s) {
    string ret = "";
    for(int i = 0; i < s.length(); i++){
        ret += tolower((char)s.at(i));
    }
    return ret;
}
void output(vector<string> vect, char c){
    for(int i = 0; i < vect.size(); i++){
        if(tolower(vect[i].at(0)) == tolower(c)){
            res.push_back(vect[i]);
        }
    }
}

int main(){

    string word;
    vector<string> v;

    while(true){
        cin >> word;
        if(low(word) == "quit"){
            for(int i = 0; i < res.size(); i++){
                cout << res[i] << endl;
            }
            return 0;
        }
        if(word.length() > 1){
            v.push_back(word);
        } 
        else {
            
            output(v, word.at(0));
        }
    }

}