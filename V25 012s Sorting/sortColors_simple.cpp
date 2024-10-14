//leetcode q75
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortedColors(vector<int>& vec){
    // sort(vec.begin(), vec.end());   // not legal
    int size=vec.size();
    int count0=0, count1=0, count2=0;
    for (int i = 0; i < size; i++){
        if (vec[i]==0){
            count0++;
        }
        if (vec[i]==1){
            count1++;
        }
        if (vec[i]==2){
            count2++;
        }
    }
    int indx=0;
    for (int i = 0; i < count0; i++){
        vec[indx++]=0;
    }
    for (int i = 0; i < count1; i++){
        vec[indx++]=1;
    }
    for (int i = 0; i < count2; i++){
        vec[indx++]=2;
    }
}

void printArray(vector<int>& vec){
    int size=vec.size();
    for (int i = 0; i < size; i++){
        cout<<vec[i]<<' ';
    }
    
}

int main(){
    vector<int>vec={0,1,2,0,1,1,2,0};
    sortedColors(vec);
    cout<<"Sorted colors: ";
    printArray(vec);

    return 0;
}
