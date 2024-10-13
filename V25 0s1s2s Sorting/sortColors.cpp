//leetcode q75
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortedColors(vector<int>& vec){
    sort(vec.begin(), vec.end());   // not legal
    
    
}

void printArray(vector<int>& vec){
    int size=vec.size();
    for(int i:vec){
        cout<<i<<" ";
    }
}

int main(){
    vector<int>vec={0,1,2,0,1,1,2,0};
    sortedColors(vec);
    cout<<"Sorted colors: ";
    printArray(vec);

    return 0;
}
