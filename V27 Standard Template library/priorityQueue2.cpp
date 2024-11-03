#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int> p_qu;   // Max-Heap by default
    p_qu.push(1);
    p_qu.push(3);
    p_qu.push(2);
    p_qu.push(0);
    cout<<"Current front value: "<<p_qu.top()<<endl;    // 0

    cout<<"Whole priorityqueue: "<<endl;    // 0 1 2 3
    while (!p_qu.empty()){
        cout<<p_qu.top()<<' ';
        p_qu.pop();
    }
    
    return 0;
}

