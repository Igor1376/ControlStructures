#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define TEMPERATURE
//#define CALC_1
#define CALC_2

void main()
{
	setlocale(LC_ALL, "");
#ifdef TEMPERATURE
	cout << "Hello controls" << endl;
	int temperature1;
	int temperature2;
	cout << "Введите температуру воздуха:";
	cin >> temperature1;
	temperature2 = (temperature1 % 10);
	if (temperature2 == 1)
	{
		cout << "Температура воздуха:" << temperature1 << " Градус\n";
	}
	else if (temperature2 == 2 or temperature2 == 3 or temperature2 == 4)
	{
		cout << "Температура воздуха:" << temperature1 << " Градуса\n";
	}
	else
	{
		cout << "Температура воздуха:" << temperature1 << " Градусов\n";
	}
	
	

	//int number1, number2;
	//char operators;
	//cout << "Введите два операнда:" << endl;
	//cin >> number1 >> number2;
	//cout << "Введите операторы:" << endl;
	//cin >> operators;
	//cout << number1 << " " << operators << " " << number2 << " = " << endl;
	//switch (operators)
	//{
	//case '+':
	//	cout << number1 + number2 << endl;
	//	break;
	//case '-':
	//	cout << number1 - number2 << endl;
	//	break;
	//case '*':
	//	cout << number1 * number2 << endl;
	//	break;
	//case '/':
	//	if (number2 != 0)
	//		cout << number1 / number2 << endl;
	//	else
	//		cout << "Нельзя делить на ноль, но можно попробовать" << endl;
	//	break;
	//default:
	//	cout << "Законченная операция" << endl;
	//}
#endif
#ifdef CALC_1
	double a, b; // числа, вводимые с клавиатуры
	char s; // s - Sign (знак операций)
	cout << " Введите выражение: ";
	cin >> a >> s >> b;
	cout << a << s << b << endl;
	if (s == '+')
	{
		cout << a << " + " << b << " = " << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << " - " << b << " = " << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << " * " << b << " = " << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << " / " << b << " = " << a / b << endl;
	}
#endif
#ifdef CALC_2
	double a, b;
	char s;
	cout << " ВВедите выражение ";
	cin >> a >> s >> b;
	switch (s)
	{
	case '+' :cout << a << " + " << b << " = " << a + b << endl; break;
	case '-' :cout << a << " - " << b << " = " << a - b << endl; break;
	case '*' :cout << a << " * " << b << " = " << a * b << endl; break;
	case '/' :cout << a << " / " << b << " = " << a / b << endl; break;
	default: cout << "Error: no operation" << endl;
	}
#endif

}