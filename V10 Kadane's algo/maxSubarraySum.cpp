#include <iostream>
using namespace std;

int main(){
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int size = sizeof(arr) / sizeof(int);
    int maxSum = INT_MIN;

    for (int st = 0; st < size; st++)
    {
        int currentSum = 0;
        for (int end = 0; end < size; end++)
        {
            currentSum += arr[end];
            maxSum = max(currentSum, maxSum);
        }
    }

    cout << "Max suubarray sum: " << maxSum << endl;

    return 0;
}