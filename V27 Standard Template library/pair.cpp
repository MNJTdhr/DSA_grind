#include <iostream>
#include <string>
using namespace std;

int main(){
    pair<int, int> p_intint={12,23};
    cout<<p_intint.first<<'\t';
    cout<<p_intint.second<<'\t';
    cout<<endl;

    pair<string, int> p_charint={"Three",3};
    cout<<p_charint.first<<'\t';
    cout<<p_charint.second<<'\t';
    cout<<endl;

    pair<string, pair<int, int>> p_charpair={"Three", p_intint={12,23}};
    cout<<p_charpair.first<<'\t';
    cout<<p_charpair.second.first<<'\t';
    cout<<p_charpair.second.second<<'\t';
    cout<<endl;

    return 0;
}