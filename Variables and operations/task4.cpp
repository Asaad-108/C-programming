// Pizza Hut needs a program to calculate the number of slices a pizza of any size can be divided
// into.The program should perform the following steps :
// A) Ask the user for the diameter of the pizza in inches.
// B) Calculate the number of slices that may be taken from a pizza of that size.
// C) Display a message telling the number of slices.
// To calculate the number of slices that may be taken from the pizza, you must know the
// following facts :
// • Each slice should have an area of 14.125 inches.
// • To calculate the number of slices, simply divide the area of the pizza by 14.125.
// • The area of the pizza is calculated with this formula : Area = πr2
// Note : PI(π) value is 3.14159.The variable r is the radius of the pizza.
// Divide the diameter by 2 to get the radius.
//< Solution and output of Task 4 >

#include <iostream>
using namespace std;
int main()
{
    int diameter = 0;
    int radius = 0;
    double numbr_slice = 0;
    cout << "enter the diameter of pizza:";
    cin >> diameter;
    radius = diameter / 2;
    numbr_slice = 3.14 * (radius * radius);
    cout << "the number of slices are : " << numbr_slice / 14.125 << endl;

    return 0;
}
