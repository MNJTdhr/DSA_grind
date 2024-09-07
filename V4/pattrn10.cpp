#include <iostream>

using std::cin, std::cout;

int main()
{
    int n, k, l;

    cout << "Enter length: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = n; j > i; j--)
        {
            cout << "<>";
        }

        // star
        for (int j = n; j > i; j--)
        {
            cout << "<>";
        }

        cout << '\n';
    }

    return 0;
}