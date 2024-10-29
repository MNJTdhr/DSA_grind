//leetcode q125
#include <iostream>
#include <string>

using namespace std;

bool isAlphaNum(char ch){
    if ((ch>='0'&&ch<='9')||(tolower(ch)>='a' && tolower(ch)<='z'))
    {
        return true;
    }
    return false;
}

bool isPalindrome(string s) {
    int start = 0, end = s.length() - 1;
    while (start < end) {
        if (!isAlphaNum(s[start])) {
            start++;
            continue;
        }
        if (!isAlphaNum(s[end])) {
            end--;
            continue;
        }
        if (tolower(s[start]) != tolower(s[end])) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    string s = "A man, a plan, a canal: Panama";
    if (isPalindrome(s)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}
