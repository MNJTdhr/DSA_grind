#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int stringCompress(string s) {
    int size = s.size();
    int idx = 0;
    for (int i = 0; i < size; i++) {
        char ch = s[i];
        int count = 0;
        while (i < size && s[i] == ch) {
            count++;
            i++;
        }
        if (count == 1) {
            s[idx++] = ch;
        } else {
            s[idx++] = ch;
            string str = to_string(count);
            for (char dig : str) {
                s[idx++] = dig;
            }
        }
        i--;
    }
    s.resize(idx);
    for (int i = 0; i < size; i++) {
        cout << s[i] << ' ';
    }
    cout << endl;
    return idx;
}

int main() {
    vector<char> chhar = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    string s(chhar.begin(), chhar.end());
    int idx = stringCompress(s);
    cout << "idx= " << idx << endl;
    return 0;
}
