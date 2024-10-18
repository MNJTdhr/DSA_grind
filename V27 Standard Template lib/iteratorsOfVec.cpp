#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr={1,2,3,4,6};
    vector<int>::iterator it;   
    
    //in modern cpp we can use 'auto'
    for (it = arr.begin(); it != arr.end(); it++){
        cout<<*it<<" ";     //1 2 3 4 6 
    }
    cout<<endl;

    //to reverse, we use rbegin and rend;
    for (auto itr = arr.rbegin(); itr != arr.rend(); itr++){
        cout<<*itr<<" ";    ///6 4 3 2 1 
    }
    cout<<endl;
    
    return 0;
}