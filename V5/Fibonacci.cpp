#include <iostream>
using namespace std;

void fibonacci(int n);
void fibonacciMyWay(int n);

int main()
{
    int a;
    cout << "Enter a limit: ";
    cin >> a;
    fibonacci(a);
    fibonacciMyWay(a);
    return 0;
}

void fibonacciMyWay(int n)
{
    int lim = 0, k = 1, s = 1, a = 0;
    cout << "Fibonacci series: " << a << ", " << k << ", " << s << ", ";

    while (lim < n-3)
    {
        s = s + k;
        cout << s << ", ";
        k = s - k;
        // cout<<"k="<<k<<", "<<endl;

        lim++;
    }
}

void fibonacci(int n){
    int lim = 0, k = 1, s = 0, fnum = 0;
    cout << "Fibonacci series: " << s << ", " << k << ", ";

    while (lim < n-2){
        fnum = s + k;
        cout << fnum << ", ";
        s = k;
        k = fnum;
        lim++;
    }
    cout<<endl;
}