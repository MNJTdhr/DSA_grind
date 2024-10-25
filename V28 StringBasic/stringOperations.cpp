#include <iostream>
#include <string>
using namespace std;

int main(){
    string st1 = "hello";
    string st2 = " world";
    string st3 = st1 + st2; // concatenation

    cout << st3 << endl;
    cout << st3.length() << endl;
    cout << (st1 != st2) << endl;

    getline(cin, st3); // input string getline(cin, st3, '.');
    cout << st3 << endl;

    for (int i = 0; i < st3.length(); i++){
        cout<<st3[i]<<' ';
    } cout<<endl;

    for (char i:st3){
        cout <<i<<' ';
    } cout<<endl;

    return 0;
}