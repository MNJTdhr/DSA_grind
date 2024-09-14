///LeetCodeQuestion: Q.136

#include <iostream>
#include <vector>

using namespace std;
int singleNum(vector<int> vec, int size);

int main(){
    vector<int> vec={1,2,3,2,1};
    int size=5;
    int ans=singleNum(vec, size);

    cout<<ans<<endl;

    return 0;
}

int singleNum(vector<int> vec, int size){
    int singNum;
    for(int i:vec){
        singNum=singNum^i;
    }
    return singNum;
}
