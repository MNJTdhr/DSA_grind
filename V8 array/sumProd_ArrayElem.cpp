#include <iostream>
using namespace std;

int sum(int arr[], int size);
int prod(int arr[], int size);

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,100};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++){
        cout << arr[i] << ' ';
    }

    int s=sum(arr, size);
    int p=prod(arr, size);

    cout<<"\nSum of all elements in the array: "<<s<<"\nProduct of all elements in the array: "<<p<<endl;

    return 0;
}

int sum(int arr[], int size){
    int s=0;
    for (int i = 0; i < size; i++)
    {
        s+=arr[i];
    }
    return s;
}

int prod(int arr[], int size){
    int p=1;
    for (int i = 0; i < size; i++)
    {
        p*=arr[i];
    }
    return p;
}