#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> stk;
    stk.push(0);
    stk.push(1);
    stk.push(2);
    stk.push(3);
    cout<<"size of stk stack: "<<stk.size()<<endl;

    stack<int> stk2;
    stk2.swap(stk);

    cout<<"size of stk2 stack: "<<stk2.size()<<endl;
    cout<<"Whole stk2 stack: "<<endl;
    while (!stk2.empty()){
        cout<<stk2.top()<<' ';
        stk2.pop();
    }
    return 0;
}