//Right-angle Triangle
#include <iostream>
using namespace std;
 
int main()
{
    int heigth=0;
    cout<<"Enter the heigth of Triangle:";
    cin>>heigth;

    for(int i=0;i<heigth;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
