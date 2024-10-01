#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,6,2,1,3};

    cout << *arr << endl;           //1
    cout << *(arr+2) << endl;       //3
    cout << *(arr+3) << endl;       //4
    cout << *(arr+4) << endl;       //6

    return 0;
}
