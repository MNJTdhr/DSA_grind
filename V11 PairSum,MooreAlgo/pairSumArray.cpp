#include <iostream>
using namespace std;

int pairSum(int arr[], int size, int n){
    int ans=0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(arr[i]+arr[j]==n){
                ans=ans+arr[i]+arr[j];
                cout<<"Matches with: "<<arr[i]<<"+"<<arr[j]<<"="<<ans<<endl;
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int arr[] = {2,7,11,15};
    int n=13;
    int size = sizeof(arr) / sizeof(int);
    
    int result=pairSum(arr, size, n);
    if (result==0)
    {
        cout<<"No Matches found with "<<n<<endl;
    }
    
    return 0;
}