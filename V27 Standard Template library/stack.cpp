#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> stk;
    stk.push(0);
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.pop();
    cout<<"Current top value: "<<stk.top()<<endl;

    cout<<"Whole stack: "<<endl;
    while (!stk.empty()){
        cout<<stk.top()<<' ';
        stk.pop();
    }
    
    return 0;
}