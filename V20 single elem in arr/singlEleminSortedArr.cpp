//leetcode 540
#include <iostream>
#include <vector>
using namespace std;

int singleElemSearch(vector<int> vec){
    int start=0, end=vec.size()-1;
    while (start<=end){
        int mid=start+(end-start)/2;
        if (vec[mid]==vec[mid-1]){
            end=mid-1;
            if (vec[mid-1]!=vec[mid] && vec[mid+1]!=vec[mid]){
                return vec[mid];
            }
            
        }
        else if (vec[mid]==vec[mid+1]){
            start=mid+1;
            if (vec[mid-1]!=vec[mid] && vec[mid+1]!=vec[mid]){
                return vec[mid];
            }
        }
        
    }
    return -1;
}

int main(){
    vector<int> vec={1,1,2,3,3,4,4,6,6};

    int result=singleElemSearch(vec);

    if (result!=-1){
        cout<<"Single element is: "<<result;
    } else {
        cout<<"Key not found";
    }
    
    return 0;
}