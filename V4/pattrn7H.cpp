#include <iostream>
int main()
{
    int n;
    char k=65;
    std::cout << "Enter limit: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {  
            std::cout << k << ' ';
            k++;
        }
        std::cout << '\n';
    }

    return 0;
}