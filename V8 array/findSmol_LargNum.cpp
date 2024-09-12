#include <iostream>
using namespace std;

int main(){
    int arr[5] = {2, 6, 3, 5, 4}, smol = INT_MAX, larg = INT_MIN;
    int size = 5;

    //find smallest number
    cout << "Smallest data: ";
    for (int i = 0; i < size; i++){
        if (arr[i] < smol){
            smol = arr[i];
        }
    }
    cout << smol << '\n';

    //find largest number
    cout << "Largest data: ";
    for (int i = 0; i < size; i++){
        if (arr[i] > larg){
            larg = arr[i];
        }
    }
    cout << larg << '\n';

    return 0;
}