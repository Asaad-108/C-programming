// This C++ program prompts the user to enter a number, then prints its multiplication table up to 10.
#include <iostream>
using namespace std;

int main()
{
   int num;
   cout << "Enter a number: ";
   cin >> num;
   cout << "The table of " << num << " is :-" << endl;
   for (int i = 1; i <= 10; i++)
   {
      cout << num << " * " << i << " = " << num * i << endl;
   }

   return 0;
}
