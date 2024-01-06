// Calculating the number of slices of a pizza
// through daimeter (given)
#include <iostream>
using namespace std;
int main()
{
    float daimeter,radius,area,numOfSlices=0;
    cout<<"enter the diameter of pizza in inches:"<<endl;
    cin>>daimeter;
    radius=daimeter/2;
    area=3.14*(radius*radius);
    numOfSlices=area/14.125;
    cout<<"the number of slice of pizza will be "<<numOfSlices<<endl;

    return 0;
}
