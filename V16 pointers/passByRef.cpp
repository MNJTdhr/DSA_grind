#include <iostream>
using namespace std;

void fun(int *ptr){     //pass by reference using pointers
    *ptr=20;
}

void fun2(int &b){      //pass by reference using alias
    b=10;               //b is the alias of a, b == a just different name
}                       //any modification in b will result in a

int main(){
    int a = 10;
    cout << a << endl;  //10

    fun(&a);
    cout << a << endl;  //20
    
    fun2(a);
    cout << a << endl;  //10

    return 0;
}
