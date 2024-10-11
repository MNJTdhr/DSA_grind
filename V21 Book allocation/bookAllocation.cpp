#include <iostream>
#include <vector>
using namespace std;

bool isvalid(vector<int> vec, int books_n, int students_m, int maxallowedpages_mid) {
    int stud = 1, pages = 0;
    for (int i = 0; i < books_n; i++) {  // Iterate over books_n, not students_m
        if (vec[i] > maxallowedpages_mid) {
            return false;
        }
        if (pages + vec[i] <= maxallowedpages_mid) {
            pages += vec[i];
        } else {
            stud++;
            pages = vec[i];
        }
    }
    return stud <= students_m;  // Correct condition
}

int bookalloc(vector<int> vec, int books_n, int students_m) {
    if (students_m > books_n) {
        return -1;
    }
    int sum = 0;
    for (int i = 0; i < books_n; i++) {
        sum += vec[i];
    }
    int start = 0, end = sum;  // Range of possible answers
    int ans = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (isvalid(vec, books_n, students_m, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> vec = {15,17,20};
    int students_m = 2, books_n = 3;
    int result = bookalloc(vec, books_n, students_m);
    if (result != -1) {
        cout << "Min possible maximum a student can get: " << result;
    } else {
        cout << "Allocation not possible.";
    }
    return 0;
}
