// leetcode q88
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mergeSortedVectors(vector<int>& vec1, int n, vector<int>& vec2, int m) {
    int idx = m + n - 1;
    int i = n - 1;
    int j = m - 1;
    
    while (i >= 0 && j >= 0) {
        if (vec1[i] >= vec2[j]) {
            vec1[idx] = vec1[i];
            idx--; i--;
        } else {
            vec1[idx] = vec2[j];
            idx--; j--;
        }
    }
    
    while (j >= 0) {
        vec1[idx--] = vec2[j--];
    }
}

void printArray(const vector<int>& vec) {
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    vector<int> vec1 = {4, 5, 6, 0, 0, 0};
    int n = 3;
    vector<int> vec2 = {1, 2, 3};
    int m = 3;

    mergeSortedVectors(vec1, n, vec2, m);
    cout << "Merged vectors: ";
    printArray(vec1);

    return 0;
}
