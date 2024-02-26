// This C++ program calculates and prints the factorial of a given number entered by the user.
#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int factorial = 0;
    cout << "Enter a number to find Factorial :" << endl;
    cin >> num;
    factorial = num;
    if (num == 0)
    {
        factorial = 1;
    }
    else
    {
        for (int i = 1; i < num; i++)
        {
            factorial = factorial * i;
        }
    }
    cout << "The factorial of " << num << " is : " << factorial << endl;

    return 0;
}
