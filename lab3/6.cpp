#include <iostream> 
#include <string>
#include <vector>
#include <cctype>

using namespace std;

vector<string> output;

string low(string s) {
    string ret = "";
    for(int i = 0; i < s.length(); i++){
        ret += tolower((char)s.at(i));
    }
    return ret;
}

void find(vector<string> vect, string s){
    for(int i = 0; i < vect.size(); i++){
        if(low(vect[i].substr(0,s.length())) == low(s)){
            output.push_back(vect[i]);
        }
    }
}


int main() {

    vector<string> v;
    string word;
    
    while(true){
        cin >> word; 
        if(word == "quit"){
            for(int i = 0; i < output.size(); i++){
                cout << output[i] << endl;
            }
            return 0;
        } else if (word.length() >=4){
            v.push_back(word);
        } else {
            find(v,word);
        }
    }


    
}