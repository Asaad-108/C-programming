// This C++ program prints numbers in descending order from the user-inputted number to 0,
// then prints numbers in ascending order from 1 to the user-inputted number.
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter the number:" << endl;
    cin >> x;
    for (int i = x; i >= 0; i--)
    {
        cout << i << endl;
    }
    for (int j = 1; j <= x; j++)
    {
        cout << j << endl;
    }

    return 0;
}
