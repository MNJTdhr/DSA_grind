#include <iostream>
using namespace std;

int main(){
    int a=0;
    
    //NULL pointer
    int **ptr;
    cout<<"ptr: "<<ptr<<endl;
    
    int **ptr2=NULL;
    cout<<"ptr2: "<<ptr2<<endl;

    cout<<"*(ptr2): "<<*(ptr2)<<endl;

    return 0;
}
