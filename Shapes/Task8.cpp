// Butterfly
#include <iostream>
using namespace std;

int main()
{
    int rows = 0;
    cout << "enter the number of rows: ";
    cin >> rows;
    int space = rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = space * 2; k > 2; k--)
        {
            cout << " ";
        }
        for (int l = 0; l <= i; l++)
        {
            cout << "*";
        }
        space--;
        cout << endl;
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = rows; j > i; j--)
        {
            cout << "*";
        }
        for (int k = 0; k < i * 2; k++)
        {
            cout << " ";
        }
        for (int l = rows; l > i; l--)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
