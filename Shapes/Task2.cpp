//Rectangle
#include <iostream>
using namespace std;
 
int main()
{
    int length=0;
    int width=0;
    cout<<"Enter the length of rectangle:";
    cin>>length;
    cout<<"Enter the width of rectangle:";
    cin>>width;

    for(int i=0;i<length;i++){
        for(int j=0;j<width;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
