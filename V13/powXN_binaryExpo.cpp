//Leetcode Question 50

#include <iostream>
using namespace std;

int powBinaryExpo(int n, int p);

int main(){
    int n,p;
    cout<<"Enter number to find pow: ";
    cin>>n;
    cout<<"Enter number to pow: ";
    cin>>p;

    int ans=powBinaryExpo(n,p);
    cout<<"pow("<<n<<","<<p<<") = "<<ans;

    return 0;
}

int powBinaryExpo(int n, int p){
    if(p==0) return 1;
    if(n==0) return 0;
    if(n==1) return 1;
    if(n==-1 && p%2 ==0) return 1;
    if(n==-1 && p%2 !=0) return -1;

    long binform=p;
    if(p<0){
        n=1/n;
        binform=-binform;
    }

    double ans=1;
    while (binform>0)
    {
        if (binform%2==1)
        {
            ans*=n;
        }
        n*=n;
        binform/=2;
    } 
    return ans;
}
