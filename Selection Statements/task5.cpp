// finding the highest average form multiple sections
#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f=0;
    cout << "enter PF average of section A" << endl;
    cin >> a;
    cout << "enter PF average of section B" << endl;
    cin >> b;
    cout << "enter PF average of section C" << endl;
    cin >> c;
    cout << "enter PF average of section D" << endl;
    cin >> d;
    cout << "enter PF average of section E" << endl;
    cin >> e;
    cout << "enter PF average of section F" << endl;
    cin >> f;
    if (a > b && a > c && a > d && a > e && a > f)
    {
        cout << "A got the highest average " << a << endl;
    }
    else if (b > a && b > c && b > d && b > e && b > f)
    {
        cout << "B got the highest average " << b << endl;
    }
    else if (c > a && c > b && c > d && c > e && c > f)
    {
        cout << "C got the highest average " << c << endl;
    }
    else if (d > b && d > c && d > a && d > e && d > f)
    {
        cout << "D got the highest average " << d << endl;
    }
    else if (e > b && e > c && e > d && e > a && e > f)
    {
        cout << "E got the highest average " << e << endl;
    }
    else
    {
        cout << "F got the highest average " << f << endl;
    }

    return 0;
}
