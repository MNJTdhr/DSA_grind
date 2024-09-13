#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,100};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++){
        cout << arr[i] << ' ';
    }


    int arr1[6];
    int arr2[3] = {1, 22, 33};

    cout<<"Enter array data: \n";
    for (int i = 0; i < 6; i++)
    {
        cin>>arr1[i];
    }
    cout<<"array data: ";
    for (int i = 0; i < 6; i++)
    {
        cout<<arr1[i]<<' ';
    }

    return 0;
}