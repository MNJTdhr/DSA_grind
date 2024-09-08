#include <iostream>
#include <math.h>

using std::cin, std::cout;

int binaryToDeci(int n);

int main()
{
    int inp, n, ans;
    cout << "Enter Binary number: ";
    cout << "0110\n";
    // cin >> inp;
    inp = 110;

    ans = binaryToDeci(inp);

    cout << "Decimal value of " << inp << " is: " << ans;

    return 0;
}

int binaryToDeci(int n)
{
    int r, ans = 0, p = 1;
    while (n > 0)       // say n=110
    {
        r = n % 10;      // r=0 
        n = n / 10;      // n=11

        ans=ans+r*p;
        p*=2;
    }
    return ans;
}
