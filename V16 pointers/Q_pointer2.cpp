#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,22,3,4,6,1,2,3,6,4};
    int *ptr=arr;

    cout << *(ptr+1) << endl;   //22
    cout << *(ptr+3) << endl;   //4
    ptr++;                      //+4 byte
    cout << *ptr << endl;       //22

    return 0;
}
