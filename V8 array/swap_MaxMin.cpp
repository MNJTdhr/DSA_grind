#include <iostream>
using namespace std;

void swapMaxMin(int arr[], int size);

int main(){
    int arr[] = {10,22,3,44,5,6,77,81,9,10};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++){
        cout << arr[i] << ' ';
    }

    swapMaxMin(arr,size);
    return 0;
}

void swapMaxMin(int arr[], int size){
    int smol=INT_MAX, larg=INT_MIN, smol_loc, larg_loc;
    for (int i = 0; i < size; i++){
        if (smol>arr[i])
        {
            smol=arr[i];
            smol_loc=i;
        }
        if (larg<arr[i])
        {
            larg=arr[i];
            larg_loc=i;
        }
    }
    cout << "\nsmallestV: "<<smol<<", location: "<<smol_loc;
    cout << "\nlargestV: "<<larg<<", location: "<<larg_loc;

    arr[larg_loc]=smol;
    arr[smol_loc]=larg;

    cout << "\nAfter swapping smallest and largest elements in array: ";
    for (int i = 0; i < size; i++){
        cout << arr[i] << ' ';
    }
}