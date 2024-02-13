//  printing all the integers from 1 to n
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number :";
    cin >> n;
    cout << "Natural numbers up to " << n << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }

    return 0;
}
