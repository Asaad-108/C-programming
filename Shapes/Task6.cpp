// Daimond
#include <iostream>
using namespace std;

int main()
{
    int rows=0;
    cout << "enter number of rows:";
    cin >> rows;
    int space = rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = rows; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 0; k <= i * 2; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < rows; i++)
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
