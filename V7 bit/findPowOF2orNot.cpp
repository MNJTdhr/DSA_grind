#include <iostream>
#include <math.h>
using namespace std;

void usingLoop(int n);
void usingBitOp(int n);

int main()
{
    int userInpCheck{1};
    do
    {
        int num;
        cout << "Enter a number greater than 2: ";
        cin >> num;

        if (num >= 2)
        {   
            usingBitOp(num);
            usingLoop(num);
            userInpCheck=1;
        }
        else
        {
            cout << "Invalid number added. ";
            userInpCheck=0;
        }

    } while (userInpCheck==0);
}

void usingLoop(int n)
{
    int count, i = 0;
    while (n > count)
    {
        count = pow(2, i);
        if (count == n)
        {
            cout << "Power of 2 concluded using Loop" << endl;
            break;
        }
        i++;
    }
    if (count > n)
        cout << "Not a Power of 2 concluded using Loop" << endl;

}

void usingBitOp(int n)
{
    int count, i = 0;
    while (n > count)
    {
        count = (1<<i);
        if (count == n)
        {
            cout << "Power of 2 concluded using BitShiftOp" << endl;
            break;
        }
        i++;
    }
    if (count > n)
        cout << "Not a Power of 2 concluded using BitShiftOp" << endl;

}