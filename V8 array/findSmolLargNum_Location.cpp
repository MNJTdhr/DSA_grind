#include <iostream>
using namespace std;

int main() {
    int arr[5] = {2,6,3,4,1};
    int smol = INT_MAX, larg = INT_MIN;
    int smol_posi = INT_MAX, larg_posi = INT_MIN;
    int size = 5;

    // Find smallest number
    cout << "Smallest data: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] < smol) {
            smol = arr[i];
            smol_posi = i;
        }
    }
    cout << smol << " at position " << smol_posi+1 << '\n';

    // Find largest number
    cout << "Largest data: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] > larg) {
            larg = arr[i];
            larg_posi = i;
        }
    }
    cout << larg << " at position " << larg_posi+1 << '\n';

    return 0;
}
