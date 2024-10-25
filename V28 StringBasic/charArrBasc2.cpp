#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    char chararr[100];
    cout << "Enter char array using cin.getline: ";
    cin.getline(chararr, 100); // char array, size
    cout << "Entered char array: " << chararr << endl;

    cout << "Enter again, ends with '.' :";
    cin.getline(chararr, 100, '.'); // char array, size, delimiter as '.'
    cout << "Entered char array before adding '.': " << chararr;

    return 0;
}