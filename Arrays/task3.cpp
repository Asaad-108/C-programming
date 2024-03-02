// This C++ program prompts the user to input values into an array of size 10, then prints the values in reverse order.
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
    cout << "revers order" << endl;
    for (int j = size - 1; j >= 0; j--)
    {
        cout << arr[j] << endl;
    }

    return 0;
}
