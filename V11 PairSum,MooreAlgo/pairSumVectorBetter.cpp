#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> vec, int target){
    vector<int> ans;
    int n = vec.size();
    int i = 0, j = n - 1;

    while (i < j)
    {
        int psum = vec[i] + vec[j];
        if (psum > target)
        {
            j--;
        }
        else if (psum < target)
        {
            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main(){
    vector<int> vec = {2, 7, 11, 15};
    int target = 13;

    vector<int> result = pairSum(vec, target);

    cout << "Vector Array: " << result[0] << ", " << result[1] << endl;

    return 0;
}