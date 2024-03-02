// This C++ program prompts the user to input values into an array of size 7, then prints the last roll number entered, updates the third element of the array based on the sum of the first two elements minus 2, sets the fifth element to 40, and finally prints all elements of the array.
#include <iostream>
using namespace std;
int main()
{
    const int size = 7;
    int arr[size];
    cout << "Enter the values in Array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "last roll number is :" << arr[6] << endl;
    arr[2] = arr[0] + arr[1] - 2;
    arr[4] = 40;
    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << endl;
    }

    return 0;
}
