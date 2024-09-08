#include <iostream>
#include <math.h>
using std::cin, std::cout;

int deciToBinary(int n);

int main()
{
    int inp, n, ans;
    cout << "Enter Decimal number: ";
    // cout << "6\n";
    cin >> inp;
    // inp = 6;

    ans = deciToBinary(inp);

    cout << "Binary value of " << inp << " is: " << ans;

    return 0;
}

int deciToBinary(int n)
{
    int r, ans = 0, p = 1;
    while (n > 0)       // say n=1234
    {
        r = n % 2;      // r=0            1           0
        n = n / 2;      // n=617          308         154

        ans += r * p;   // ans=0*1=0     1*10+0=10   0*100+10+0=010
        p *= 10;        // p=10          100         1000
    }
    return ans;
}
