// Leetcode Q169
//  majority element where an element e has occurrence of more than half of the number of element
// arr[n], maj>n/2;

#include <iostream>
#include <vector>
using namespace std;

int majorityElem(vector<int> nums){
    int size = nums.size();

    for (int i : nums){
        int count = 0;

        for (int j : nums){
            if (i == j)
            {
                count++;
            }
        }

        if (count > (size / 2)){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {2,2,1,1,1,1,2};
    int ans;
    ans = majorityElem(nums);

    if (ans != -1)
    {
        cout << "Element that has most occurrence: " << ans;
    }
    else
    {
        cout << "No major element found: " << ans;
    }
    return 0;
}