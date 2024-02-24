// This C++ program reverses the digits of a user-inputted integer and displays the result.
#include <iostream>
using namespace std;
int main()
{

  int num = 0;
  int x = 0;
  int y = 0;

  cout << "Enter an integer: " << endl;
  cin >> num;

  while (num != 0)
  {
    y = num % 10;
    x = x * 10 + y;
    num /= 10;
  }

  cout << "Reversed Number = " << x << endl;
}
