#include <iostream>
#include <math.h>

void findpow(int n);

int main(){
    int userInpCheck{1};

    do{
        int num;
        std::cout << "Enter limit: ";
        std::cin >> num;

        if (num >= 1){
            findpow(num);
            userInpCheck = 1;
        }else{
            std::cout << "Invalid number added. ";
            userInpCheck = 0;
        }

    } while (userInpCheck == 0);
    return 0;
}

void findpow(int n){
    std::cout << "Top "<<n<< " pow of 2 are below: " << std::endl;
    for (int i = 0; i < n; i++){
        int count = pow(2, i);
        std::cout << count <<' ';
    }
}