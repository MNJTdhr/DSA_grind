// leetcode q151
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void stringRev(string s){
    string ans = "";
    int len=0;
    reverse(s.begin(), s.end());

    for (int i=0; i<s.length();i++){
        string word = "";
        while (i < s.length() && s[i] != ' ')
        {
            word += s[i];
            i++;
        }
        reverse(word.begin(), word.end());
        
        if (word.length()>0)
        {
            ans+=" "+word;
        }       

    cout << word << ' ';
    }
    cout << endl;
    cout << s << endl;
}

int main(){
    string s = "Our earth is beautiful";
    stringRev(s);

    return 0;
}