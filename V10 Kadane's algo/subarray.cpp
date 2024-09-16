#include <iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);

    for (int start = 0; start < size; start++)
    {
        for (int end = start; end < size; end++)
        {
            for (int i = start; i <= end; i++)
            {
                cout<<arr[i];
                // cout<<"Loop3 "<<" i="<<i<<" s="<<start<<" e="<<end<<"\n";
            }
            cout<<' ';
            // cout<<"Loop2 "<<"e="<<end<<" s="<<start<<"\n";
        }
        // cout<<"Loop1 "<<"s="<<start<<" si="<<size<<"\n";
        cout<<endl;
    }
    
    return 0;
}