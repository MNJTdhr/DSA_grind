#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> qu;
    qu.push(0);
    qu.push(1);
    qu.push(2);
    qu.push(3);
    cout<<"size of qu queue: "<<qu.size()<<endl;

    queue<int> qu2;
    qu2.swap(qu);

    cout<<"size of qu2 queue: "<<qu2.size()<<endl;
    cout<<"Whole qu2 queue: "<<endl;
    while (!qu2.empty()){
        cout<<qu2.front()<<' ';
        qu2.pop();
    }
    return 0;
}