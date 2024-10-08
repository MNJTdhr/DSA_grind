// leetcode 540
#include <iostream>
#include <vector>
using namespace std;

int singleElemSearch(vector<int> vec)
{
    int start = 0, end = vec.size() - 1;
    int size = vec.size() - 1;
    
    if (size == 1){                         // checks if an array has
        return vec[0];                      // only one single elem
    }

    while (start <= end){
        int mid = start + (end - start) / 2;

        if (mid == 0 && vec[0] != vec[1]){  //if the first elem is the
            return vec[mid];                //single elem
        }
        if (mid == size - 1 && vec[size - 1] != vec[size - 2]){
            return vec[mid];                //if the last elem is single
        }

        if (vec[mid - 1] != vec[mid] && vec[mid] != vec[mid + 1]){
            return vec[mid];                //main condition we check 
        }

        if (mid % 2 == 0){                  // for even elem on both side
            if (vec[mid - 1] == vec[mid]){  // right
                end = mid - 1;
            } else{                         // left
                start = mid + 1;
            }
        } else{                             // for odd elem on both side
            if (vec[mid - 1] == vec[mid]){  // right
                start = mid + 1;
            }
            else{                           // left
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> vec = {1, 1, 2, 3, 3, 4, 4, 6, 6};

    int result = singleElemSearch(vec);

    if (result != -1){
        cout << "Single element is: " << result;
    } else{
        cout << "Key not found";
    }
    return 0;
}
