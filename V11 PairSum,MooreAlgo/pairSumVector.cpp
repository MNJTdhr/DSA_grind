#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> vec, int target){
    vector<int> ans;
    int n = vec.size();

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (vec[i] + vec[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> vec = {2, 7, 11, 15};
    int target = 13;

    vector<int> result = pairSum(vec, target);

    cout << "Vector Array: " << result[0]<<", " << result[1]<< endl;

    return 0;
}