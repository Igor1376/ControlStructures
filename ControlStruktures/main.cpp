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
	cout << "������� ����������� �������:";
	cin >> temperature1;
	temperature2 = (temperature1 % 10);
	if (temperature2 == 1)
	{
		cout << "����������� �������:" << temperature1 << " ������\n";
	}
	else if (temperature2 == 2 or temperature2 == 3 or temperature2 == 4)
	{
		cout << "����������� �������:" << temperature1 << " �������\n";
	}
	else
	{
		cout << "����������� �������:" << temperature1 << " ��������\n";
	}
	
	

	//int number1, number2;
	//char operators;
	//cout << "������� ��� ��������:" << endl;
	//cin >> number1 >> number2;
	//cout << "������� ���������:" << endl;
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
	//		cout << "������ ������ �� ����, �� ����� �����������" << endl;
	//	break;
	//default:
	//	cout << "����������� ��������" << endl;
	//}
#endif
#ifdef CALC_1
	double a, b; // �����, �������� � ����������
	char s; // s - Sign (���� ��������)
	cout << " ������� ���������: ";
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
	cout << " ������� ��������� ";
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