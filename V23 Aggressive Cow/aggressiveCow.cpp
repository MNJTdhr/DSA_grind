#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isValid(vector<int> vec, int slot_n, int cowsNum_m, int minallowedDist_mid) {
    int cowws = 1, slott = vec[0];
    
    for (int i = 0; i < slot_n; i++)
    {
        if (vec[i]-slott>=minallowedDist_mid)
        {
            cowws++;
            slott=vec[i];
        } 
        if(cowws==cowsNum_m){
            return true;
        }
    }
    
    return false;
}

int cowAlloc(vector<int> vec, int slot_n, int cowsNum_m) {
    sort(vec.begin(), vec.end());

    int start=1, end=vec[slot_n-1]-vec[0], ans=-1;

    while (start<=end){
        int mid=start+(end-start)/2;

        if (isValid(vec, slot_n, cowsNum_m, mid)){
            ans=mid;
            start=mid+1;
        } else{
            end=mid-1;
        }
    }  
    return ans;
}

int main() {
    vector<int> vec = {1,2,8,4,9};
    int cowsNum_m = 3, slot_n = 5;
    int result = cowAlloc(vec, slot_n, cowsNum_m);
    if (result != -1) {
        cout << "Min possible maximum distance can take: " << result<<" unit distance.";
    } else {
        cout << "Allocation not possible.";
    }
    return 0;
}
