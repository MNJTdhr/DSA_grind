#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<pair<int, int>> vecp={{1,2},{2,3},{3,1}};
    vecp.push_back({4,6});          //we have to create objects
    vecp.emplace_back(4,6);         //auto create objects for us(in place creates object)

    for(pair<int,int> i : vecp){    //can also use (auto i:vecp)
        cout<< i.first<<'\t'<<i.second<<endl;
    }
    cout<<endl;

    return 0;
}