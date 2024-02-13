// This C++ program calculates and prints the number of digits in a given integer using while & for loop.
#include <iostream>
using namespace std;

int main()
{

   // With while loop
   // int n, count = 0;
   // cout << "Enter an integer: ";
   // cin >> n;
   // if (n < 10)
   // {
   //    count++;
   // }
   // else
   // {
   //    while (n != 0)
   //    {
   //       n /= 10;
   //       count++;
   //    }

   //    cout << "Number of digits: " << count << endl;
   // }

   // With for loop
   int n=0;
   cout << "enter a number:" << endl;
   cin >> n;
   int count=0;
   if (n < 10)
   {
      count++;
   }
   else
   {
      for (int i = n; i != 0; i /= 10)
      {
         count++;
      }
   }
        cout << "Number of digits: " << count << endl;

   return 0;
}
