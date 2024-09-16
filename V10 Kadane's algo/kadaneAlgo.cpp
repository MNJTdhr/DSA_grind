/// LeetCodeQuestion: Q.53

#include <iostream>
#include <vector>

using namespace std;
int kadaneSubArrSum(vector<int> vec, int size);

int main()
{
    vector<int> vec = {-2,1,-3,4,-1,2,1,-5,4};
    int size = 5;
    int ans = kadaneSubArrSum(vec, size);

    cout << ans << endl;

    return 0;
}

int kadaneSubArrSum(vector<int> vec, int size){
    int currentSum = 0, maxSum = INT_MIN;

    for (int value: vec){
        currentSum += value;
        maxSum = max(currentSum, maxSum);

        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    return maxSum;
}