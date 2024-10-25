#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void swapper(char& a, char& b){
    a=a^b;
    b=a^b;
    a=a^b;
}

void arrReverser(string& st){
    int start=0, end=st.length()-1;

    while (start<end){
        swapper(st[start], st[end]);
        start++, end--;
    }
}

void printArr(string& st){
    for (char i:st){
        cout <<i<<' ';
    } cout<<endl;
}

int main(){
    string st = "hello";
    printArr(st);

    arrReverser(st);
    printArr(st);

    reverse(st.begin(), st.end());
    printArr(st);

    return 0;
}