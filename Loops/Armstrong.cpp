// This C++ program checks whether a given number is an Armstrong number by summing the nth powers of its digits, where n is the number of digits in the number.
#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int remainder = 0;
    int count = 0;
    int sum = 0;
    int power = 0;
    cout << "Enter a number :" << endl;
    cin >> num;
    for (int i = num; i > 0; i = i / 10)
    {
        remainder = i % 10;
        count++;
    }
    cout << "The number of digits are :" << count << endl;
    for (int i = num; i > 0; i = i / 10)
    {
        power = 1;
        remainder = i % 10;
        cout << "The digit is : " << remainder << endl;
        for (int j = 0; j < count; j++)
        {
            power *= remainder;
        }
        cout << remainder << " power " << count << " is equal : " << power << endl;
        sum += power;
    }
    cout << endl;
    cout << "The sum of powers of digits are : " << sum << endl;
    if (num == sum)
    {
        cout << "The number is Armstrong " << endl;
    }
    else
    {
        cout << "The number is not Armstrong " << endl;
    }
    return 0;
}
