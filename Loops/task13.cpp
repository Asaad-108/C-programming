// This C++ program checks if a user-inputted number is a palindrome or not.
#include <iostream>
using namespace std;
int main()
{
    int num, x, y = 0;

    cout << "enter a number:" << endl;
    cin >> num;
    int p = num;
    while (num > 0)
    {
        x = num % 10;
        y = (y * 10) + x;
        num = num / 10;
    }
    if (p == y)
        cout << "the number is palindrome:" << endl;

    else
    {
        cout << "the number is not a palindrome:" << endl;
    }
    return 0;
}
