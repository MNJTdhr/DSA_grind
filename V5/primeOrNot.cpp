#include <iostream>
using std::cin, std::cout;

void PrimeCheck(int n);

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    PrimeCheck(n);

    return 0;
}

void PrimeCheck(int n){
    if (n > 1)
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                cout << "Number is not Prime";
                break;
            }
            else
            {
                cout << "Number is Prime";
                break;
            }
        }
    }
    else
    {
        cout << "Invalid, number should be above 1";
    }
}
