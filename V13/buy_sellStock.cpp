//leetcode Question 121
#include <iostream>
using namespace std;

int findMaxProfit(int arr[], int size);

int main(){
    int arr[]={4,2,3,1,6,4,1,8,4,3};
    int size=sizeof(arr)/sizeof(int);
    int ans=findMaxProfit(arr, size);
    cout<<"Max profit: "<<ans;
    return 0;
}

int findMaxProfit(int arr[], int size){
    int bestBuy=arr[0], maxProfit=0, ans=0;
    for (int i = 1; i <= size; i++)
    {
        if (arr[i]>bestBuy)
        {
            maxProfit=max(maxProfit, arr[i]-bestBuy);
        }
        
        bestBuy=min(bestBuy,arr[i]);
    }
    
    return maxProfit;
}