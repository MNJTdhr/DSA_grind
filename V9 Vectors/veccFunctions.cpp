#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vec1(5, 1);
    cout<<"Print size of vec: "<< vec1.size()<< endl;
    
    vector<int> vec={1,2,3};
    cout<<"Size of vec before: "<< vec.size()<< endl;

    vec.push_back(10);
    cout<<"Size of vec after: "<< vec.size()<< endl;
    vec.push_back(22);
    vec.push_back(44);
    cout<<"Size of vec after +2 inputs: "<< vec.size()<< endl;
    
    cout<<"All values in vec: "<< endl;
    for (int i : vec){
        cout << i << ' ';
    }
    cout << endl;

    vec.pop_back();
    cout<<"All values in vec after popback: "<< endl;
    for (int i : vec){
        cout << i << ' ';
    }
    cout << endl;

    cout<<"Front/Top value of vec is: "<< endl;
    cout << vec.front() << endl;

    cout<<"Back/end value of vec is: "<< endl;
    cout << vec.back() << endl;
    
    cout<<"To gt element at any position vec is: "<< endl;
    cout << vec.at(1) <<' '<< vec.at(2) << endl;

    return 0;
}