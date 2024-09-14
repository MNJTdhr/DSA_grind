#include <iostream>
#include <vector>

using namespace std;
void reverseVector(vector<int> vec, int size);

int main(){
    vector<int> vec={1,2,3,4,5,6};
    int size=5;
    cout<<"original vector: ";
    for(int i: vec){
        cout<<i<<' ';
    }
    cout<<endl;
    
    cout << "Total size & capacity of the vector: " << vec.size()<<", "<<vec.capacity();
    cout<<endl;

    cout << "Reversed vector: ";
    reverseVector(vec, size);
    return 0;
}

void reverseVector(vector<int> vec, int size){
    int ans, start=0, end=size;

    while(start<end){
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
    
    for (int i : vec){
        cout<<i<<' ';
    }
}
