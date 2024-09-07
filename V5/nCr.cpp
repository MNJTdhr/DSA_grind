#include <iostream>
using namespace std;

int Facto(int n);
int Final(int n, int r);

int main()
{
    int n, r;
    cout << "nCr Calculator\n";
    cout << "Enter n,r: ";
    cin >> n>>r;

    cout << "nCr: "<<Final(n,r);

    return 0;
}

int Facto(int n)
{
    int s = 1;
    for (int i = 1; i <= n; i++)
    {
        s = s * i;
    }
    return s;
}

int Final(int n, int r){
    int x=Facto(n);
    int y=Facto(r);
    int z=Facto(n-r);

    int result=x/(y*z);
    return result;
}
