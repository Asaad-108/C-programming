// This C++ program prompts the user to input values into an array of size 10, calculates the sum and average of the values, then prints both the sum and the average.
#include <iostream>
using namespace std;
int main()
{
    float sum = 0;
    float avg;
    const int size = 10;
    int arr[size];
    cout << "Enter the values in Array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout << "sum" << endl;
    cout << sum << endl;
    cout << "average" << endl;
    avg = sum / size;
    cout << avg << endl;

    return 0;
}
