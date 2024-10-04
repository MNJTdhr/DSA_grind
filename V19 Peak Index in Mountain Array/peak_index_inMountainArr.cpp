//leetcode 852
#include <iostream>
#include <vector>
using namespace std;

int searchRSA(vector<int> vec, int key){
    int start=1, end=vec.size()-2;

    while (start<=end){
        int mid=start+(end-start)/2;
        if (vec[mid-1]<vec[mid] && vec[mid]>vec[mid+1]){
            return mid;
        }
        else if (vec[mid-1]<vec[mid])
        {
            start=mid+1;
        }
        else if (vec[mid]>vec[mid+1])
        {
            end=mid-1;
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
        cout<<"Peak element at posi: "<<result;
    } else {
        cout<<"Key not found";
    }
    
    return 0;
}