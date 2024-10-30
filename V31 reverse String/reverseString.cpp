//leetcode q151
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void stringRev(string s){
    string ans="", word="";
    reverse(s.begin(),s.end());
    
    int i=0;
    while (i < s.length() && s[i] != ' '){
        word+=s[i];
        i++;
    }

    cout<<word<<endl;
    cout<<s<<endl;    
}

int main(){
    string s="Our earth is beautiful";
    stringRev(s);

    return 0;
}