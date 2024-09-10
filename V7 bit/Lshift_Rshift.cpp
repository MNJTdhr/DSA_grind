#include <iostream>
using namespace std;

int main(){
    int a=4,b=8;

    //Left Shift Operator
    //  4 -> 0100
    //  << by 1 bit
    //  8 -> 1000
    cout<<(a<<1)<<'\n';  //8
    cout<<(a<<2)<<'\n';  //16

    //Right Shift Operator
    //  4 -> 0100
    //  >> by 1 bit
    //  2 -> 0010
    cout<<(4>>1)<<'\n';  //2
    cout<<(7>>1)<<'\n';  //3
    cout<<(7>>2)<<'\n';  //1

    return 0;
}