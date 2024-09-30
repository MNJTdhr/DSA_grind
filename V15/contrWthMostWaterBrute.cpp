// leetcode Question 238
#include <iostream>
#include <vector>
using namespace std;

vector<int> prodOfarrXnumX(vector<int> vec);

int main(){
    vector<int> vec = {1,2,3,4};

    vector<int> ansVec = prodOfarrXnumX(vec);
    
    for (int j : ansVec)
    {
        cout << j << ' ';
    }

    return 0;
}

vector<int> prodOfarrXnumX(vector<int> vec){
    int a = 1;
    vector<int> ansVec;

    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec.size(); j++)
        {
            if (vec[i] != vec[j])
            {
                a = a * vec[j];
            }
        }
        ansVec.push_back(a);
        a = 1;
    }

    return ansVec;
}