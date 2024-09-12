#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 6};
    int arr1[6];
    int arr2[] = {1, 22, 33};

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
    
    // cout<<"array data: ";
    // for (int i = 1; i < 7; i++)
    // {
    //     cout<<arr1[i]<<' ';
    // }

    return 0;
}