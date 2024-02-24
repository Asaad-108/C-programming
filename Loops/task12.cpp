// This C++ program calculates the sum of the squares of all digits in a user-inputted number.
#include<iostream>
using namespace std;
int main()
{
   int num=0;
   int reminder=0;
   int sq=0;
   int sum=0;
   cout<<"Enter a Number: ";
   cin>>num;
   while(num>0)
   {
      reminder = num%10;
      if(reminder==0)
         sq = 1;
      else
         sq = reminder*reminder;
      sum = sum + sq;
      num = num/10;
   }
   cout<<"Sum of squares of all digits = "<<sum<<endl;
   return 0;
}
