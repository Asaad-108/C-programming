//A customer in a store is purchasing five items.The prices of the five items are :
//Price of item 1 = RS 120.95
//Price of item 2 = RS 240.95
//Price of item 3 = RS 60.95
//Price of item 4 = RS 140.95
//Price of item 5 = RS 30.95
//Write a program that holds the prices of the five items in five variables.Display each item’s
//price, the subtotal of the sale, the amount of sales tax, and the total.Assume the sales tax is
//6 % .
//< Solution and output of Task 2 >

#include<iostream>
using namespace std;
int main()
{
    int x=120; //declare and initialize
    int y=240;
    int z=60;   //x,y,z,p & q are the name of 5 items
    int p=140;
    int q=30;
    int subtotal=0;
    int saletax=0;
    int total=0;
    cout<<"the amount of item 1 =  "<<x<<endl;
    cout<<"the amount of item 2 = "<<y<<endl;
    cout<<"the amount of item 3 =  "<<z<<endl;
    cout<<"the amount of item 4 =  "<<p<<endl;
    cout<<"the amount of item 5 =  "<<q<<endl;
    subtotal=x+y+z+p+q;
    cout<<"the sub total is = "<<subtotal<<endl;
    saletax=subtotal/100*6;
    cout<<"the sale tax is ="<<saletax<<endl;
    total=subtotal-saletax;
    cout<<"the total is ="<<c<<endl;

    return 0;
}
