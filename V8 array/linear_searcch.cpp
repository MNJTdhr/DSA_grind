#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key);

int main()
{
    int key;
    int arr[] = {1, 2, 3, 6, 4, 7, 8, 11, 46, 116, 13, 32, 442, 36, 123, 6221, 44, 22, 332, 131};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Enter key: ";
    cin >> key;

    int res = linearSearch(arr, size, key);

    if (res == 1)
    {
        cout << "key found" << endl;
    }
    else
        cout << "key not found" << endl;

    return 0;
}

int linearSearch(int arr[], int size, int key)
{
    cout << "Total size of the array: " << size << endl;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << "key found at posi: " << i + 1 << endl;
            return 1;
        }
    }
    return -1;
}