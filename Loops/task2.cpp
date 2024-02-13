// printing all integers from n down to 1
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number :";
    cin >> n;
    cout << "Integers from " << n << " down to 1:" << endl;
    for (int i = n; i >= 1; i--)
    {
        cout << i << endl;
    }

    return 0;
}
