// This C++ program separates and prints the digits of a user-inputted number in reverse order.
#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter a number to separate the digits: ";
	cin >> num;

	while (num != 0)
	{
		cout << num % 10 << endl;
		num /= 10;
	}

	return 0;
}
