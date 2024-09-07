#include <iostream>
using std::cin, std::cout;
int SumOfDigits(int n);

int main()
{
    int n;
    std::cout << "Enter Number: ";
    std::cin >> n;

    cout << "Sum of " << n << " is " << SumOfDigits(n);

    return 0;
}

int SumOfDigits(int n)
{
    int a, s = 0; // say n=123, a = unit digit
    while (n > 0)
    {
        a = n % 10; // a=3   a=2     a=1
        n = n / 10; // n=12  n=1     n=0
        s = s + a;  // 0+3   0+3+2   0+3+2+1
    }
    return s; // s=6
}