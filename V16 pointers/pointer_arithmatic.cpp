#include <iostream>
using namespace std;

int main(){
    int a = 10;
    cout << a << endl;      //10
    
    int *ptr = &a;

    cout << ptr << endl;    //0xb3207ffb94
    
    ptr++;                  // +4 bytes for int(as each int is 4 byte)
    cout << ptr << endl;    //0xb3207ffb98
    ptr--;                  // -4 bytes for int(as each int is 4 byte)
    cout << ptr << endl;    //0xb3207ffb94
    
    
    ptr=ptr+2;              // +8 bytes for int(as each int is 4 byte)
    cout << ptr << endl;    //0xb3207ffb9c  //5,6,7,8,9,a,b,c
    
    ptr=ptr-2;              // -8 bytes for int(as each int is 4 byte)
    cout << ptr << endl;    //0xb3207ffb94

    cout << a << endl;      //10

    return 0;
}
