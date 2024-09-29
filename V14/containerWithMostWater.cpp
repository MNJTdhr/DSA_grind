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
    int maxWater = 0, w, h, area = 1;
    int start=0, end=arr.size()-1;

    while(start<end){
        w=end-start;
        h=min(arr[start], arr[end]);
        area=w*h;
        maxWater=max(maxWater,area);

        (arr[start]<arr[end]) ? start++ : end--;
    }

    return maxWater;
}