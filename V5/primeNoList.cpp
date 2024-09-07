#include <iostream>
using std::cin, std::cout;

bool primecheck(int n);
void primeprinter(int n);

int main() {
    int n;
    cout << "enter number: ";
    cin >> n;
    primeprinter(n);
    return 0;
}

bool primecheck(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

void primeprinter(int n) {
    if (n > 1) {
        for (int i = 2; i <= n; ++i) {
            if (primecheck(i)) {
                cout << i << ' ';
            }
        }
    } else {
        cout << "invalid, number should be above 1";
    }
}

/* ****************** */
/* ****************** */
/* Bug doesnt print 2 */
/* ****************** */
/* ****************** */

// #include <iostream>
// using std::cin, std::cout;

// int PrimeCheck(int n);
// int PrimePrinter(int n);

// int main()
// {
//     int n;
//     cout << "Enter number: ";
//     cin >> n;

//     PrimePrinter(n);

//     return 0;
// }

// int PrimeCheck(int n)
// {   
//     if (n==2) return true;
//     else
//     {
//         for (int i = 2; i < n; i++)
//         {
//             if (n % i == 0)
//             {
//                 return false;
//             }
//             else
//             {
//                 return true;
//             }
//         }
//     }

//     return 0;
// }

// int PrimePrinter(int n)
// {   
//     if (n > 1)
//     {
//         for (int i = 2; i < n; i++)
//         {
//             int z = PrimeCheck(i);
//             if (z == true)
//             {
//                 cout << i << ' ';
//             }
//         }
//     }
//     else
//     {
//         cout << "Invalid, number should be above 1";
//     }

//     return 0;
// }

