// Reverse Equilateral Triangle
#include <iostream>
using namespace std;

int main()
{
    int heigth = 0;
    cout << "Enter the heigth of Triangle:";
    cin >> heigth;
    int space = heigth;

    for (int i = 0; i < heigth; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        for (int k = space * 2; k > 1; k--)
        {
            cout << "*";
        }
        space--;
        cout << endl;
    }

    return 0;
}
