// Leetcode Q169
//  majority element where an element e has occurrence of more than half of the number of element
// arr[n], maj>n/2;

#include <iostream>
#include <vector>
using namespace std;

int majorityElem(vector<int> nums){
    int size = nums.size();
    int count = 0, ans = 0;

    for (int i = 0; i < size; i++){
        if (count == 0){
            ans = nums[i];
        }

        if (ans == nums[i]){
            count++;
        }
        else{
            count--;
        }
    }

    int check = 0;
    for (int val : nums){
        if (val == ans)
        {
            check++;
        }
    }
    if (check > size / 2){
        return ans;
    }
    else
        return -1;
}

int main(){
    vector<int> nums = {2, 2, 2, 2, 1, 1, 1, 1};
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