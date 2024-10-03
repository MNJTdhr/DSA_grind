#include <iostream>
#include <vector>

using namespace std;

int binarySearch(const vector<int> &vec, int start, int end, int key){
    if (end >= start){
        int mid = start + (end - start) / 2;

        if (vec[mid] > key){
            return binarySearch(vec, start, mid - 1, key);
        }

        else if (vec[mid] < key){
            return binarySearch(vec, mid + 1, end, key);
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> vec = {2, 3, 4, 10, 40};
    int key = 10;
    int result = binarySearch(vec, 0, vec.size() - 1, key);

    if (result != -1)
        cout << "Element is present at index " << result << endl;
    else
        cout << "Element is not present in vector." << endl;

    return 0;
}
