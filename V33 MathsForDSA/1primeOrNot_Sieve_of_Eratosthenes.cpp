// leetcode q204
#include <iostream>
#include <vector>
using namespace std;

int countPrimes(int n) {
    if (n <= 2) return 0;
    vector<bool> isPrime(n, true);
    int count = 0;
    for (int i = 2; i < n; i++) {
        if (isPrime[i]) {
            count++;
            for (int j = i * 2; j < n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    return count;
}

int main() {
    cout << countPrimes(10) << endl; 
    return 0;
}
