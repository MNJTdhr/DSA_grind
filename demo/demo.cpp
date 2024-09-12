#include <iostream>
using namespace std;

void fun(int n);

int main(){
    int a = 1236;
    fun(a);
    return 0;
}

void fun(int n){
    int r, sum, mul, total = 0;
    while (n > 0){  // say n=1234
        n = n / 10; // n=123
        total++;
        // cout<<r<<" "<<n<<" "<<ans<<" "<<p<<" "<<endl;
    }
    cout << total;
}