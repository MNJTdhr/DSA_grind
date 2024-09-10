#include <iostream>
#include <math.h>

using std::cin, std::cout, std::endl;

int binaryToDeci(int n);

int main()
{
    int inp, n, ans;
    cout << "Enter Binary number: ";
    // cout << "0110\n";
    cin >> inp;
    // inp = 110;

    ans = binaryToDeci(inp);

    cout << "Decimal value of " << inp << " is: " << ans;

    return 0;
}

int binaryToDeci(int n){
    int r, ans = 0, p = 1;
    while (n > 0)           // say n=110
    {
        r = n % 10;         // r=0              1           1
        n = n / 10;         // n=11             1           0
        ans=ans+r*p;        // ans=0+0*1=0      0+1*2=2     2+1*4=6
        p*=2;               // p=2              4           8
    }
    return ans;
}
