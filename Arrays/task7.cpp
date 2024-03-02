// This C++ program prompts the user to input values into an array of size 10, then prints numbers in the array that are divisible either by the first or last element of the array.
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
        if (arr[j] % arr[0] == 0 || arr[j] % arr[9] == 0)
            cout << arr[j] << endl;
    }

    return 0;
}
