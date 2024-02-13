// This C++ program calculates and prints the sum of integers from 1 to the input number (`n`).
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number :";
    cin >> n;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "The sum of all numbers form 1 to " << n << " is : " << sum << endl;

    return 0;
}
