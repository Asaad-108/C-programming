// This C++ program takes user input for an array of size 10, then prints all odd numbers in the array.
#include <iostream>
using namespace std;
int main()
{
    const int size = 10;
    int arr[size];
    cout << "Enter the values in Array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < size; j++)
    {
        if (arr[j] % 2 != 0)
        {
            cout << "the odd number in arrays are:" << arr[j] << endl;
        }
    }

    return 0;
}
