#include <iostream>
using namespace std;

int arrReverser(int arr[], int size);

int main(){
    int arr[] = {1, 2, 3, 6, 4, 7, 8, 11, 46};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Reversed array: ";
    for (int i = 0; i < size; i++){
        cout << arr[i] << ' ';
    }
    cout << "\nTotal size of the array: " << size;

    cout << "\nReversed array: ";
    arrReverser(arr, size);

    return 0;
}

int arrReverser(int arr[], int size){
    int start = 0, end = size - 1;

    while (start < end){
        swap(arr[end], arr[start]);
        end--;
        start++;
    }

    for (int i = 0; i < size; i++){
        cout << arr[i] << ' ';
    }
    return 0;
}