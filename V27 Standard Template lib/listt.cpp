#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> arr={0};
    arr.push_back(6);
    arr.push_back(4);
    arr.push_front(3);
    arr.push_front(2);
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    
    arr.pop_front();
    arr.pop_back();
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    
    
    return 0;
}