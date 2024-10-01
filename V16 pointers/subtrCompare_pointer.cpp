#include <iostream>
using namespace std;

int main(){
    int *ptr1;
    int *ptr2=ptr1+2;

    cout << ptr1 << endl;           //0x8
    cout << ptr2 << endl;           //0x10
    cout << ptr2-ptr1 << endl;      //2

    cout<<(ptr1<ptr2)<<endl;        //1 true
    ptr2=ptr1;
    cout<<(ptr1==ptr2)<<endl;       //1 true
    cout<<(ptr1!=ptr2)<<endl;       //0 false

    return 0;
}
