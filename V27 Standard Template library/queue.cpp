#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> qu;
    qu.push(0);
    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.pop();
    cout<<"Current front value: "<<qu.front()<<endl;
    cout<<"Current back value: "<<qu.back()<<endl;

    cout<<"Whole queue: "<<endl;
    while (!qu.empty()){
        cout<<qu.front()<<' ';
        qu.pop();
    }
    
    return 0;
}