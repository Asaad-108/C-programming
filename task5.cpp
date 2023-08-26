//Modify the program you wrote in Task 4 (Pizza)so that it reports the number of pizzas you
//need to buy for a party if each person attending is expected to eat an average of four slices.
//The program should ask the user for the number of people who will be at the party and for the
//diameter of the pizzas to be ordered.
//It should then calculate and display the number of pizzas to purchase.
//< Solution and output of Task 5>

#include<iostream>
using namespace std;
int main()
{
    int d;
    int slices;
    double a;
   int persons;
   cout<<"enter number of presons:"<<endl;
   cin >> persons;
   slices=persons*4;
   cout<<"the number of slices they eat is: "<<slices<<endl;
   d=sqrt(slices*(14.125*4)/3.14);
   cout<<"the size of pizza for "<<persons<<"is "<<d<<endl;

    return 0;
}

