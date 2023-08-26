//Suppose you earn RS 60, 000 per month and you are allowed to contribute a portion of your
//gross monthly pay to a retirement plan.You want to determine the amount of your pay that
//will go into the plan if you contribute 5 percent, 7 percent, or 10 percent of your gross pay.To
//make this determination write a C++ program.
//< Solution and output of Task 1>

#include<iostream>
using namespace std;
int main()
{
    int a = 60000; // "a" is the salary per month
    int b;    //b,c & d are the variables to store the contribution
    int c;    //for retirement.
    int d;
    cout<<"the total pay is 60000 per month"<<endl;
    b=a/100*5;
    cout<<"if you contribute 5% of your gross pay is :"<<b<<endl;
    c=a/100*7;
    cout<<"if you contribute 7% of your gross pay is :"<<c<<endl;
    d=a/100*10;
    cout<<"if you contribute 10% of your gross pay is :"<<d<<endl;

    return 0;
}
