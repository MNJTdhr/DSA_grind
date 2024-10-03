#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> vec, int key) {
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == key) {
            return i;
        }
    }
    return -1; 
}

int main() {
    vector<int> vec = {2, 3, 4, 10, 40};
    int key = 10;
    
    int result = linearSearch(vec, key);
    if (result == -1) {
        cout << "Element is not present in array" << endl;
    } else {
        cout << "Element is present at index " << result << endl;
    }
    
    return 0;
}
