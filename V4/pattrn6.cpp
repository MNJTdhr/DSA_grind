#include <iostream>
int main()
{
    int n,k;
    std::cout << "Enter limit: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        k=i;
        for (int j = 0; j < i; j++)
        {  
            std::cout << k << ' ';
            k--;
        }
        std::cout << '\n';
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i+1; j > 0; j--)
    //     {
    //         std::cout << j << ' ';
    //     }
    //     std::cout << '\n';
    // }

    return 0;
}