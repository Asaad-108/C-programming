//This C++ program prints numbers between two user-inputted numbers (X and Y) that are 
// divisible by either 3 or 5.
#include <iostream>
using namespace std;

int main()
{
    int X;
    int Y;
    cout << "Enter two numbers X: ";
    cin >> X;
    cout << "Enter two numbers Y: ";
    cin >> Y;

    for (int i = X; i <= Y; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            cout << "number divisible by 3 or 5 are:" << i << endl;
            ;
        }
    }
    cout << endl;
    return 0;
}
