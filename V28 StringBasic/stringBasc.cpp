#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    int arr[]={1,2,3};
    // char str[]={'a','b','c'};        //not a valid string
    char str[]={'a','b','c','\0'};      //valid string
    char stringLiterals[]={"hello"};    //string literals

    cout<<arr<<endl;                    //0xc2ce5ffba4
    cout<<str<<endl;                    //abc
    cout<<strlen(str)<<endl;            //3
    return 0;
}