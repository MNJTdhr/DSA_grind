#include <iostream>
#include <string>
using namespace std;

int main(){
    char str[100];
    int size=0;
    cout << "Enter char array using cin.getline: ";
    cin.getline(str, 100);

    for (int i = 0; str[i]!='\0'; i++){
        size++;
    }
    cout<<"Length of string: "<<size<<endl;

    
    return 0;
}