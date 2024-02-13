// This C++ program calculates and prints the sum of even numbers up to the first input number (`num1`)
//  and the sum of odd numbers up to the second input number (`num2`).
#include <iostream>
using namespace std;
int main()
{
        int sum1 = 0;
        int sum2 = 0;

        int num1;
        cout << "enter num2 number :";
        cin >> num1;

        for (int i = 1; i <= num1; i++)
        {
                if (i % 2 == 0)
                {
                        sum1 += i;
                }
        }
        cout << "The sum of all even number form 1 to " << num1 << " is " << sum1 << endl;
        int num2;
        cout << "enter num2 number :";
        cin >> num2;

        for (int i = 1; i <= num2; i++)
        {
                if (i % 2 != 0)
                {
                        sum2 += i;
                }
        }
        cout << "The sum of all odd number form 1 to " << num2 << " is " << sum2 << endl;

        return 0;
}
