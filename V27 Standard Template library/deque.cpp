#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> dq={1,2,3};
    dq.push_back(4);
    dq.push_front(0);
    dq.push_front(-1);
    for(int i:dq){
        cout<<i<<" ";
    }
    cout<<endl;
    
    dq.pop_front();
    dq.pop_back();
    for(int i:dq){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}