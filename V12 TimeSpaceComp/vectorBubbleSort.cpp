#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i<n-1; i++)
    {
        for (int j = 0; j<n-i-1; j++)
        {
            cout << "i=" << i << " " << "j=" << j<<'\n';
            if (v[j] > v[j + 1]){
                swap(v[j], v[j + 1]);
            }
        }
    }
}

int main()
{
    vector<int> v = {5, 1, 4, 2, 8};
    bubbleSort(v);
    cout << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}
