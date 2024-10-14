// leetcode q75
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortedColors(vector<int>& vec) {
    int size = vec.size();
    int low = 0, mid = 0, high = size - 1;
    while (mid <= high) {
        if (vec[mid] == 0) {
            swap(vec[low], vec[mid]);
            mid++;
            low++;
        } else if (vec[mid] == 1) {
            mid++;
        } else {
            swap(vec[high], vec[mid]);
            high--;
        }
    }
}

void printArray(const vector<int>& vec) {
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    vector<int> vec = {0, 1, 2, 0, 1, 1, 2, 0};
    sortedColors(vec);
    cout << "sorted colors: ";
    printArray(vec);
    return 0;
}
