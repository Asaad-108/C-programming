//Square
#include <iostream>
using namespace std;
 
int main()
{
    int length=0;
    cout<<"Enter the length of square:";
    cin>>length;

    for(int i=0;i<length;i++){
        for(int j=0;j<length;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
 
    return 0;
}
