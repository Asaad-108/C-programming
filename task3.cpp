//A movie theater only keeps a percentage of the revenue earned from ticket sales.The remainder
//goes to the movie distributor.Write a program that calculates a theater’s gross and net box
//office profit for a night.The program should ask how many adult and child tickets were sold.
//(The price of an adult ticket is RS 600.00 and a child’s ticket is RS 350.00.) It should display
//a report similar to
//Adult Tickets Sold : 382
//Child Tickets Sold : 127
//Gross Box Office Profit : RS 273, 650
//Net Box Office Profit : RS 54, 730
//Amount Paid to Distributor : RS 218, 920
//Note : Assume the theater keeps 20 percent of the gross box office profit.
//< Solution and output of Task 3 >

#include<iostream>
using namespace std;
int main()
{
    int adult_ticket;
    int child_ticket;
    int price_of_adult_ticket=600;
    int price_of_child_ticket=350;
    int gross_profit;
    int net_profit ;
    int amount_paid;
    cout<<"enter number of adult ticket sold: ";
    cin>>adult_ticket;
    cout<<"enter number of child ticket sold: ";
    cin>>child_ticket;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    gross_profit=(adult_ticket*price_of_adult_ticket)+(child_ticket*price_of_child_ticket);
    net_profit = (gross_profit/100)*20;
    amount_paid= gross_profit - net_profit;
    cout<<"adult ticket sold:"<<adult_ticket <<endl;
    cout<<"child ticket sold:"<<child_ticket <<endl;
    cout<<"Gross Box Office Profit:"<< gross_profit <<endl;
    cout<<"net Box Office Profit:"<< net_profit <<endl;
    cout<<"amount paid to distributor"<<amount_paid <<endl;

    return 0;
}
