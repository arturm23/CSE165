#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

string low(string s)
{
    string ret = "";
    for(int i = 0; i < s.length(); i++){
        ret += tolower((char)s.at(i));
    }
    return ret;
}

int main()
{
    ifstream input("words.txt");
    string userWord;
    std::cout << "Enter a word: ";
    cin >> userWord;
    string word;
    int num = 0;
    while(input  >> word)
    {
        word = low(word);
        
        int last = isalpha((int)word.at(word.length() - 1));
        if(last == 0)
        {
            word.pop_back();
        }
        userWord = low(userWord);
        if(word == userWord)
        {
            //std::cout << word << endl;
            num++;
        }
        
    }
    input.close();

    std::cout << num << endl;
    
    return 0;
}