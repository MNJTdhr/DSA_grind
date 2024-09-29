// leetcode Question 11
#include <iostream>
#include <vector>
using namespace std;

int MostWater(vector<int> arr);

int main(){
    vector<int> arr = {1,8,6,2,5,4,8,3,7};
    
    int ans = MostWater(arr);
    cout << "Most Water: " << ans;

    return 0;
}

int MostWater(vector<int> arr){
    int maxWater = 0, width = 0, height = 0, area = 1;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            height = min(arr[i], arr[j]);
            width = j - i;
            area = height * width;
            maxWater = max(maxWater, area);
        }
    }

    return maxWater;
}