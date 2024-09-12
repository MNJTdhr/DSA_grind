#include <iostream>
using namespace std;

int main(){

    int arr[]={1,2,3,4,6,3,2,1,4,6,3,2,1,41,36};
    cout<<sizeof(arr)/sizeof(int)<<endl;

    cout<<"Elem data: ";
    cout<<arr[0]<<' ';
    cout<<arr[1]<<' ';
    cout<<arr[14]<<' ';
    cout<<arr[15]<<' ';

    return 0;
}