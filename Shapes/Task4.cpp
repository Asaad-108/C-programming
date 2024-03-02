// Equilateral Triangle
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
        for (int j = heigth; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 0; k <= i * 2; k++)
        {
            cout << "*";
        }
        space--;
        cout << endl;
    }

    return 0;
}
