// This C++ program counts and prints the divisors of a given number entered by the user.
#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int count = 0;
    cout << "Enter a number :" << endl;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
            cout << i << "\t";
        }
    }
    cout<<endl;
    cout << "The total number of divisors of " << num << " are : " << count << endl;

    return 0;
}
