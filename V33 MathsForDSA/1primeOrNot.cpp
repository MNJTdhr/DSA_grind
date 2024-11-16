#include <iostream>
using namespace std;

void isPrime(int num){
    if (num <= 1){
        cout << "Enter number greater than 1\n";
        return;
    } else{
        for (int i = 2; i * i < num; i++){
            if (num % i == 0){
                cout << "Number is non-prime\n";
                return;
            }
        }
    }
    cout << "Number is Prime\n";
    return;
}

int main(){
    isPrime(2);
    return 0;
}