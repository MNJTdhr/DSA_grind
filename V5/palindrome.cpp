#include <iostream>
using namespace std;

void palinOrNot(int num);

int main(){
    int num, originalNum, remainder, reversedNum = 0;

    cout << "Enter an integer: ";
    cin >> num;

    palinOrNot(num);

    return 0;
}

void palinOrNot(int num){
    int originalNum = num, remainder, reversedNum = 0;

    while (num != 0){
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum){
        cout << originalNum << " is a palindrome." << endl;
    } else {
        cout << originalNum << " is not a palindrome." << endl;
    }
}