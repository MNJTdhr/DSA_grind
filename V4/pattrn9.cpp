#include <iostream>
int main()
{
    int n, k, l;
    std::cout << "Enter limit: ";
    std::cin >> n;

    for (int i = 0; i <= n; i++)
    {
        // space
        for (int j = n; j > i; j--)
        {
            std::cout << "   ";
        }
        // Digit
        k = 0;
        for (int j = 0; j < i; j++)
        {
            std::cout << " " << k + 1 << " ";
            k++;
        }
        // Digit2
        l = 1;
        for (int j = 1; j < i; j++)
        {
            std::cout << " " << l << " ";
            l++;
        }
        std::cout << '\n';
    }

    return 0;
}