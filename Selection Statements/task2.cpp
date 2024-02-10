// Selection statement , And operator
// assigning grade according to marks
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter the test score:" << endl;
    cin >> x;
    if (x >= 90 && x <= 100)
    {
        cout << "the grade is A ";
    }
    if (x >= 80 && x <= 90)
    {
        cout << "the grade is B ";
    }
    if (x >= 70 && x <= 80)
    {
        cout << "the grade is C ";
    }
    if (x >= 60 && x <= 70)
    {
        cout << "the grade is D ";
    }
    if (x <= 60)
    {
        cout << "the grade is F ";
    }
    return 0;
}
