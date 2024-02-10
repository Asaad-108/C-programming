// compiling result of students and find the highest aggregate
#include <iostream>
using namespace std;
int main()
{
    int roll_number1;
    int roll_number2;
    int roll_number3;
    int roll_number4;
    int roll_number5;
    int marksC1;
    int marksC2;
    int marksC3;
    int marksC4;
    int marksC5;
    // total marks for roll number is a long word so we use TM = total marks
    int TM1;
    int TM2;
    int TM3;
    int TM4;
    int TM5;

    cout << "Enter the roll number of student 1" << endl;
    cin >> roll_number1;
    cout << "enter the marks of C1:" << endl;
    cin >> marksC1;
    cout << "enter the marks of C2:" << endl;
    cin >> marksC2;
    cout << "enter the marks of C3:" << endl;
    cin >> marksC3;
    cout << "enter the marks of C4:" << endl;
    cin >> marksC4;
    cout << "enter the marks of C5:" << endl;
    cin >> marksC5;
    TM1 = marksC1 + marksC2 + marksC3 + marksC4 + marksC5;
    cout << "Enter the roll number of student 2" << endl;
    cin >> roll_number2;
    cout << "enter the marks of C1:" << endl;
    cin >> marksC1;
    cout << "enter the marks of C2:" << endl;
    cin >> marksC2;
    cout << "enter the marks of C3:" << endl;
    cin >> marksC3;
    cout << "enter the marks of C4:" << endl;
    cin >> marksC4;
    cout << "enter the marks of C5:" << endl;
    cin >> marksC5;
    TM2 = marksC1 + marksC2 + marksC3 + marksC4 + marksC5;
    cout << "Enter the roll number of student 3" << endl;
    cin >> roll_number3;
    cout << "enter the marks of C1:" << endl;
    cin >> marksC1;
    cout << "enter the marks of C2:" << endl;
    cin >> marksC2;
    cout << "enter the marks of C3:" << endl;
    cin >> marksC3;
    cout << "enter the marks of C4:" << endl;
    cin >> marksC4;
    cout << "enter the marks of C5:" << endl;
    cin >> marksC5;
    TM3 = marksC1 + marksC2 + marksC3 + marksC4 + marksC5;
    cout << "Enter the roll number of student 4" << endl;
    cin >> roll_number4;
    cout << "enter the marks of C1:" << endl;
    cin >> marksC1;
    cout << "enter the marks of C2:" << endl;
    cin >> marksC2;
    cout << "enter the marks of C3:" << endl;
    cin >> marksC3;
    cout << "enter the marks of C4:" << endl;
    cin >> marksC4;
    cout << "enter the marks of C5:" << endl;
    cin >> marksC5;
    TM4 = marksC1 + marksC2 + marksC3 + marksC4 + marksC5;
    cout << "Enter the roll number of student 5" << endl;
    cin >> roll_number5;
    cout << "enter the marks of C1:" << endl;
    cin >> marksC1;
    cout << "enter the marks of C2:" << endl;
    cin >> marksC2;
    cout << "enter the marks of C3:" << endl;
    cin >> marksC3;
    cout << "enter the marks of C4:" << endl;
    cin >> marksC4;
    cout << "enter the marks of C5:" << endl;
    cin >> marksC5;
    TM5 = marksC1 + marksC2 + marksC3 + marksC4 + marksC5;
    if (TM1 > TM2 && TM1 > TM3 && TM1 > TM4 && TM1 > TM5)
    {
        cout << roll_number1 << " has highest aggregate " << TM1 << endl;
    }
    else if (TM2 > TM1 && TM2 > TM3 && TM2 > TM4 && TM2 > TM5)
    {
        cout << roll_number2 << " has highest aggregate " << TM2 << endl;
    }
    else if (TM3 > TM1 && TM3 > TM2 && TM3 > TM4 && TM3 > TM5)
    {
        cout << roll_number3 << " has highest aggregate " << TM3 << endl;
    }
    else if (TM4 > TM2 && TM4 > TM3 && TM4 > TM1 && TM2 > TM5)
    {
        cout << roll_number4 << " has highest aggregate " << TM2 << endl;
    }
    else
    {
        cout << roll_number5 << " has highest aggregate " << TM5 << endl;
    }

    return 0;
}
