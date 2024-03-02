// This C++ program prompts the user to input values into an array of size 10, then prints each element of the array alongside its adjacent elements, except for the first and last elements which are paired with their subsequent and preceding elements respectively.
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
    for (int j = 1; j < 10; j++)
    {
        cout << arr[j - 1] << " " << arr[j] << " " << arr[j + 1] << endl;
    }

    return 0;
}
