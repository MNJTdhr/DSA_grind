#include <iostream>
using namespace std;

int poww(int n, int p);

int main(){
    int n,p;
    cout<<"Enter number to find pow: ";
    cin>>n;
    cout<<"Enter number to pow: ";
    cin>>p;

    int ans=poww(n,p);
    cout<<"pow("<<n<<","<<p<<") = "<<ans;

    return 0;
}

int poww(int n, int p){
    int ans=1;
    for (int i = 1; i <= p; i++)
    {
        ans=ans*n;
    }
    return ans;
}