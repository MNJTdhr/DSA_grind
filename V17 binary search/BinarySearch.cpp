#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(vector<int> vec, int target){
    int start = 0;
    int end = vec.size() - 1;

    while (start <= end){
        int mid = start + (end - start) / 2;

        if (vec[mid] < target){
            start=mid+1;
        }
        else if (vec[mid] > target){
            end=mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> vec = {1,2,3,4,5,6};

    sort(vec.begin(), vec.end());

    int target = 4;
    int index = binarySearch(vec, target);

    if (index != -1){
        cout << "Element " << target << " found at index " << index << endl;
    } else{
        cout << "Element " << target << " not found in the vector" << endl;
    }

    return 0;
}