#include <iostream>
using namespace std;

int main(){
    //address
    int a=10;
    cout<<"&a: "<<&a            <<",\ta: "<<a                   <<endl;

    //pointer
    int *ptr=&a;
    cout<<"ptr: "<<ptr          <<",\t&ptr: "<<&ptr             <<",\t*ptr: "<<*ptr<<endl;

    //pointer to pointer
    int **ptr2=&ptr;
    cout<<"ptr2: "<<ptr2        <<",\t&ptr2: "<<&ptr2           <<",\t**ptr2: "<<**ptr2<<endl;

    //dereferencing operator
    cout<<"a: "<<a              <<",\t\t\t*(&a): "<<*(&a)       <<"\t\t&a: "<<&a<<endl;
    cout<<"*(ptr): "<<*(ptr)    <<",\t\t*(ptr2): "<<*(ptr2)     <<",\t**(ptr2): "<<**(ptr2)<<endl;

    return 0;
}
