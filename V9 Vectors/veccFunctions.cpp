#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;
    vector<int> vec2 = {1, 2, 3, 1, 2};

    // cout<<vec[0]; an error
    cout << vec2[0] << endl;

    vector<int> vec3(3, 0);
    cout << vec3[0] << ' ';
    cout << vec3[1] << ' ';
    cout << vec3[2] << ' ';
    cout << endl;

    vector<int> vec4(5, 1);
    for (int i : vec4){
        cout << vec4[i] << ' ';
    }
    cout << endl;

    vector<char> vec5={'a', 'b', 'x', 'c', 'w', 'y', 'z'};
    for (char i : vec5){
        cout << i << ' ';
    }
    cout << endl;
    
    return 0;
}