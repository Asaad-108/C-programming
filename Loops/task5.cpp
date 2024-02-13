//  printing lowercase vowels ('a', 'e', 'i', 'o', 'u')
#include <iostream>
using namespace std;
int main()
{
    cout << "Vowels :-" << endl;
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u')
        {
            cout << i << endl;
        }
    }

    return 0;
}
