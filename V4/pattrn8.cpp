#include <iostream>
int main()
{
    int n,k{1};
    std::cout << "Enter limit: ";
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        //Space
        for (int j = 0; j < i; j++)
        {  
            std::cout << "__";
        }
        //Digit
        for (int j = n; j > i; j--)
        {  
            std::cout << i+1 << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}