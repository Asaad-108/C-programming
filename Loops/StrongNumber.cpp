// This C++ program checks if a given number is a strong number by computing the factorial of each digit and summing them up, then comparing the sum with the original number.
#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int remainder = 0;
    int factorial = 0;
    int sum = 0;
    cout << "Enter a number :" << endl;
    cin >> num;
    for (int i = num; i > 0; i = i / 10)
    {
        remainder = i % 10;
        factorial = remainder;
        if (remainder == 0)
        {
            factorial = 1;
        }
        else
        {
            for (int j = 1; j < remainder; j++)
            {
                factorial = factorial * j;
            }
        }
        cout << "Factorial of " << remainder << " : " << factorial << endl;
        sum += factorial;
    }
    if (sum == num)
    {
        cout << "Digits Factorial sum is :" << sum << " , so " << num << " is a strong number " << endl;
    }
    else
    {
        cout << "Digits Factorial sum is :" << sum << " , so " << num << " is not a strong number " << endl;
    }
    return 0;
}
