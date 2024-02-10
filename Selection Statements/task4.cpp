// preforming arithematic operation according to the operator enter by user
#include <iostream>
using namespace std;
int main()
{
    int m;
    int n;
    char a;
    cout << "enter first  digit " << endl;
    cin >> m;
    cout << "enter second  digit " << endl;
    cin >> n;
    cout << "enter a character :" << endl;
    cin >> a;
    if (a == '+')
    {
        cout << "sum is : " << m + n << endl;
    }
    else if (a == '-')
    {
        cout << "subtraction:" << m - n << endl;
    }
    else if (a == '*')
    {
        cout << "multiplication:" << m * n << endl;
    }
    else if (a == '/')
    {
        cout << "division:" << m / n << endl;
    }
    else if (a == '%')
    {
        cout << "reminder is:" << m % n << endl;
    }
    else
    {
        cout << "invalid" << endl;
    }

    return 0;
}
