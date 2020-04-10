#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Автор: Чепель Егор Максимович\n";
	cout << "Циклические алгоритмы\n";

	double o1, o2;
	double r;

	char op;
	char k;

	do
	{
		cout << "Введите первое число: : ";
		cin >> o1;
		cout << "Операция: ";
		cin >> op;
		cout << "Введите второе число: ";
		cin >> o2;
		cout << "Результат: ";
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
			cout << "Неподдерживаемая операция" << endl;
			break;
		}
		cout << "\nПовторить?: ";
		cin >> k;
	}
	while (k == '1');

	system("pause");

	return 0;
}
