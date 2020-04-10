#include <iostream>

using namespace std;

int main()
{
	double o1, o2;
	double r;

	char op;
	char k;

	do
	{
		cout << "First: ";
		cin >> o1;
		cout << "Operation: ";
		cin >> op;
		cout << "Second: ";
		cin >> o2;
		cout << "Result: ";
		switch (op)
		{
		case '+':
			r = o1 + o2;
			cout << r;
			break;
		case '-':
			r = o1 - o2;
			cout << r;
			break;
		case '*':
			r = o1 * o2;
			cout << r;
			break;
		case '/':
			r = o1 / o2;
			cout << r;
			break;
		default:
			cout << "Unknown Operation" << endl;
			break;
		}
		cout << "\nRepeat?: ";
		cin >> k;
	}
	while (k == '1');
	return 0;
}
