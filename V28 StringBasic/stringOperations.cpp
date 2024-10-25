#include <iostream>
#include <string>
using namespace std;

int main(){
    string st1="hello";
    string st2=" world";
    string st3=st1+st2;         //concatenation

    cout<<st3<<endl;
    cout<<st3.length()<<endl;
    cout<<(st1!=st2)<<endl;
    
    getline(cin,st3,'.');       //input string
    cout<<st3<<endl;
    return 0;
}