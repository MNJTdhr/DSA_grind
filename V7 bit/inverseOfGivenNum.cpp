#include <iostream>
#include <math.h>
using namespace std;

int numReverserMyWay(int n);
int numReverser(int n);
int numDigitCounter(int n);
int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    cout << numReverser(num);
    // cout << numReverserMyWay(num);
    return 0;
}

int numReverser(int n){
    int orinum=n, s=0, r=1;
    while(n!=0){
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    return s;
}


int numReverserMyWay(int n)
{
    int sum = 0, r, mul{1};
    int x = numDigitCounter(n);

    for (int i = 1; i < x; i++) // say n=1234
    {
        mul=mul*10;             // mul=1000
    }
    
    cout<<"mul: "<<mul<<endl;

    while (n > 0) // say n=1234
    {
        r = n % 10;             // r=4                  3                   2                   1
        n = n / 10;             // n=123                12                  1                   0
        sum = sum + r * mul;    // sum=0+4*1000=4000    4000+3*100=4300     4300+2*10=4320      4320+1*1=4321
        mul/=10;                // mul=100              10                  1                   0
        // cout<<r<<" "<<n<<" "<<sum<<" "<<mul<<endl;
    }

    return sum;
}

int numDigitCounter(int n)
{
    int total = 0;
    while (n > 0) // say n=1234
    {
        n = n / 10; // n=123
        total++;    // t=1
    }
    return total;
}
