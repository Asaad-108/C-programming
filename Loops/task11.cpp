// This C++ program finds and prints the first and last digits of a user-inputted number.
#include <iostream>
using namespace std;
int main()
{
    int num;
    int firstDigit;
    int lastDigit;
    cout << "input any number:" << endl;
    cin >> num;
    firstDigit = num;
    lastDigit = num % 10;
    for (firstDigit = num; firstDigit >= 10; firstDigit = firstDigit / 10)
        ;
    cout << "frist digit is :" << firstDigit << endl;
    cout << "last digit is :" << lastDigit << endl;

    return 0;
}
