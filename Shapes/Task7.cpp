// Hollow Daimond
#include <iostream>
using namespace std;

int main()
{
  int rows;
  cout << "enter the number of rows:" << endl;
  cin >> rows;
  int space = rows;
  for (int i = 0; i < rows; i++)
  {
    for (int j = rows; j > i; j--)
    {
      cout << "*";
    }
    for (int a = 0; a < i * 2; a++)
    {
      cout << " ";
    }
    for (int k = rows; k > i; k--)
    {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = 0; i < rows; i++)
  {
    for (int b = 0; b <= i; b++)
    {
      cout << "*";
    }
    for (int c = space * 2; c > 2; c--)
    {
      cout << " ";
    }
    for (int d = 0; d <= i; d++)
    {
      cout << "*";
    }
    space--;
    cout << endl;
  }

  return 0;
}
