// Calculating net profit & gross profit
// Calculating paid amount of tickets sold
#include <iostream>
using namespace std;
int main ()
{
    int adultticket;
    int childticket;
    int pricechild;
    int priceadult;
    int grossprofit;
    int netprofit;
    int paidamount;
    cout<<"adult tickets sold :"<<endl;
    cin>>adultticket;
    cout <<"child tickets sold :"<<endl;
    cin>>childticket;
    priceadult=600;
    cout<<"price of adult ticket:"<<priceadult<<endl;
    pricechild=350;
    cout<<"price of child ticket:"<<pricechild<<endl;
    grossprofit =adultticket*priceadult + childticket*pricechild ;
    cout<<"gross profit is :"<<grossprofit<<endl;
    netprofit = (20*grossprofit)/100;
    cout<<"net profit is :"<<netprofit<<endl;
    paidamount =grossprofit - netprofit ;
    cout<<"Paid amount is :"<<paidamount<<endl;

    return 0;
}
