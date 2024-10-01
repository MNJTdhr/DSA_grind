#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;
    int **q = &p;

    cout << *p << endl;     //10
    cout << **q << endl;    //10
    cout << p << endl;      //0x8502dffbd4
    cout << *q << endl;     //0x8502dffbd4

    return 0;
}
