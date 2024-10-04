//leetcode Q33
#include <iostream>
#include <vector>
using namespace std;

int searchRSA(vector<int> vec, int key){
    int start=0, end=vec.size()-1;

    while (start<=end){
        int mid=start+(end-start)/2;
        if (vec[mid]==key){
            return mid;
        }
        if (vec[start]<=vec[mid]){
            if (vec[start]<=key && key<=vec[mid]){
                end=mid-1;          // for vec={4,5,6,7,0,1,2}
            } else{
                start=mid+1;
            }
        }
        else{
            if (vec[mid]<=key && key<=vec[end]){
                start=mid+1;        // for vec={4,5,6,0,1,2,3}
            } else{
                end=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> vec={4,5,6,7,0,1,2};
    int key=6;

    int result=searchRSA(vec,key);

    if (result!=-1)
    {
        cout<<"Key found at index: "<<result;
    } else {
        cout<<"Key not found";
    }
    
    return 0;
}