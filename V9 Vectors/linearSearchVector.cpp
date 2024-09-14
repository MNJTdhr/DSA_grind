#include <iostream>
#include <vector>

using namespace std;
int linearSearch(vector<int> vec, int size, int key);

int main(){
    vector<int> vec={1,2,3,4,5,6};
    int size=5,key=2;
    int ans=linearSearch(vec, size, key);

    if (ans==1)
    {
        cout<<"key found!";
    } else {
        cout<<"key not found!";
    }
    return 0;
}

int linearSearch(vector<int> vec, int size, int key){
    int ans;
    for(int i: vec){
        if (i==key)
        {
            return 1;
        }
    }
    return 0;
}
