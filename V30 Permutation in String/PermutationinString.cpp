// leetcode q567
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isFreqSame(const vector<int>& freq, const vector<int>& windFreq) {
    for (int i = 0; i < 26; i++) {
        if (freq[i] != windFreq[i]) {
            return false;
        }
    }
    return true;
}

bool isPermutationInString(string keyArr, string subjeckArr) {
    if (keyArr.length() > subjeckArr.length()) return false;

    vector<int> freq(26, 0);    //26 spaces full of 0
    for (char c : keyArr) {
        freq[c - 'a']++;
        // int indx=keyArr[i]-'a'; indx++; 
    }

    vector<int> windFreq(26, 0);
    for (int i = 0; i < subjeckArr.length(); i++) {
        windFreq[subjeckArr[i] - 'a']++;

        if (i >= keyArr.length()) {
            windFreq[subjeckArr[i - keyArr.length()] - 'a']--;
        }

        if (isFreqSame(freq, windFreq)) {
            return true;
        }
    }
    return false;
}

int main() {
    string subjeckArr = "eidbaooo";
    string keyArr = "ab";

    if (isPermutationInString(keyArr, subjeckArr)) {
        cout << "Present" << endl;
    } else {
        cout << "Absent" << endl;
    }

    return 0;
}
