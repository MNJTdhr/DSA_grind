#include <iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > curr){  //To go rev: (prev >= 0 && arr[prev] < curr)
            arr[prev + 1] = arr[prev];
            prev = prev - 1;
        }
        arr[prev + 1] = curr;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, size);
    cout << "Sorted array: \n";
    printArray(arr, size);
    return 0;
}
