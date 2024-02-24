// This C++ program prints the ASCII characters corresponding to the integer values from 0 to 255.
#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i <= 255; i++)
    {
        cout << i << ": " << char(i) << endl;
    }
    return 0;
}
