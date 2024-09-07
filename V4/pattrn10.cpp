#include <iostream>

using std::cin, std::cout;

int main()
{
    int n, k, l;
    cout << "Enter length: ";
    // cout<<"4\n";
    cin >> n;
    // n = 4;

    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << '*';

        // star
        if (i != 0)
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            cout << '*';
        }
        cout << '\n';
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        cout << '*';
        if (i != n - 2)
        {
            for (int j = 0; j < 2 * (n - i) - 5; j++)
            {
                cout << ' ';
            }
            cout << '*';
        }
        cout << '\n';
    }

    return 0;
}

//      *     
//     * *    
//    *   *   
//   *     *  
//    *   *   
//     * *    
//      *     