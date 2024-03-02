// This C++ program calculates the sum and average of even numbers entered into an array of size 10.
#include <iostream>
using namespace std;
int main()
{
    float sum = 0;
    float avg = 0;
    int count = 0;
    const int size = 10;
    int arr[size];
    cout << "Enter the values in Array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < size; j++)
    {
        if (arr[j] % 2 == 0)
        {
            count++;
            sum += arr[j];
        }
    }
    cout << "sum:" << sum << endl;
    avg = sum / count;
    cout << "average:" << avg << endl;

    return 0;
}
