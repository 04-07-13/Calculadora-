#include <iostream>
using namespace std;

int main()
{
	char op;
	float num1, num2;

	cout << "ingresa la operacion";
	cin >> op;

	cout << "ingresa dos numeros";
	cin >> num1 >> num2;

	switch (op)
	{
	case '+':
		cout << num1 + num2;
		break;
	case '-':
		cout << num1 - num2;
		break;
	case '*':
		cout << num1 * num2;
		break;
	case '/':
		cout << num1 / num2;
		break;
	default:
		cout << "error";
		break;

	}
	return 0;
}