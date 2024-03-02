// This C++ program prompts the user to input values into an array of size 10, then prints each number in the array incremented by 1 if it's even, or decremented by 1 if it's odd.
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
    cout << "the numbers are :" << endl;
    for (int j = 0; j < size; j++)
    {
        if (arr[j] % 2 == 0)
        {
            cout << arr[j] + 1 << endl;
        }
        else
        {
            cout << arr[j] - 1 << endl;
        }
    }

    return 0;
}
