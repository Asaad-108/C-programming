// This C++ program prompts the user to input two numbers, then prints all even numbers
// up to the first number and all odd numbers up to the second number
#include <iostream>
using namespace std;
int main()
{
    int num1;
    cout << "enter num2 number :";
    cin >> num1;
    cout << "All even numbers form 1 to " << num1 << " are :-" << endl;
    for (int i = 1; i <= num1; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
    int num2;
    cout << "enter num2 number :";
    cin >> num2;
    cout << "All odd numbers form 1 to " << num2 << " are :-" << endl;
    for (int i = 1; i <= num2; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}
