#include <iostream>
using namespace std;

void arrDoubler(int arr[], int size);

int main(){
    int arr[] = {1, 3, 2, 4, 6};
    int size = 5;

    cout << "Before Doubling: ";
    for (int i = 0; i < size; i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
    arrDoubler(arr, size);
    return 0;
}

void arrDoubler(int arr[], int size){
    cout << "\nAfter Doubling: ";
    for (int i = 0; i < size; i++){
        cout << (arr[i] * 2) << ' ';
    }
}