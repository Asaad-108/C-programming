// checking the number are multiples of each other or not
#include <iostream>
    using namespace std;
int main()
{
    int num1;
    int num2;
    cout << "enter the frist number :" << endl;
    cin >> num1;
    cout << "enter the second number :" << endl;
    cin >> num2;
    if (num1 % num2 == 0)
    {
        cout << num1 << " is multiple of " << num2 << endl;
    }
    else if (num2 % num1 == 0)
    {
        cout << num2 << " is multiple of " << num1 << endl;
    }
    else
    {
        cout << "non" << endl;
    }

    return 0;
}
