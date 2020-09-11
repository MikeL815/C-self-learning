#include <iostream>

using namespace std;

int function(int num1, int num2, string op);

int main()
{
	int num1, num2,result;
	string op;
	bool bool_result;

	cout << "Please inpiut a number(1): ";
	cin >> num1;
	cout << "Please input a number(2): ";
	cin >> num2;
	cout << "Please input a operation symbol: ";
	cin >> op;
	
	cout << function(num1, num2, op);
}

int function(int num1, int num2, string op)
{
	int result;

	if (op == "*")
	{
		result = num1 * num2;
	}
	else if (op == "+")
	{
		result = num1 + num2;
	}
	else if (op == "/")
	{
		result = num1 / num2;
	}
	else if (op == "-")
	{
		result = num1 - num2;
	}
	else
	{
		result = num1 + num2;
	}
	return result;
}