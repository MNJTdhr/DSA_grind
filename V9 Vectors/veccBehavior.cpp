#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(11);
    vec.push_back(22);
    vec.push_back(33);
    vec.push_back(66);
    vec.push_back(44);

    for (int i : vec){
        cout<<i<<' ';   //11 22 33 66 44
    }
    cout << endl;

    cout<<vec.size()<<' '<<vec.capacity()<<endl; // 5 8

    return 0;
}