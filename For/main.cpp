#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define FOR_BASICS
//#define FOR_DEBUG
//#define FACTORIAL
//#define POWER
//#define FIBONACCI
#define SIMPLE_NUMBERS

void main()
{
	setlocale(LC_ALL, "");
	/*int n = 5;
	for (int i = 0;
		i < n;
		i++)
	{
		cout << i << "\t";

	}
	//cout << endl;*/

	/*int n, f = 1, n_1 = 0, n_2 = 1;
	cout << "Введите ряд фибоначи: " << endl;
	cin >> n;
	if (n >= 1)
		cout << 0 << "\t";
	if (n >= 2)
		cout << 1 << "\t";
	for (int i = 0; i < n; i++)
	{
		f = n_1 + n_2;
		n_1 = n_2;
		n_2 = f;
		cout << f << "\t";
	}*/

	/*double n, f = 0, n_1 = 0, n_2 = 0;
	cout << "Введите ряд фибоначи: " << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		f = n_2 + i;

		cout << n_1 << "\t";

	}*/

	/*int n, n_1 = 0;
	cout << "Введите число: "; cin >> n;
	for (int i = 2; i < n; i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)	break;
			else if (i == j + 1)
			{
				cout << i << "\t";
				n_1++;
			}
		}
	}
	cout << endl << "Простых чисел:" << n_1 << endl;*/

	/*int n_1 = 1, j = 1;
	for (int i = 0; i < 10; i++, n_1++)
	{
		for (j = 1; j <= 10; j++)
		{
			cout << n_1 << " * " << j << " = " << n_1 * j << endl;
		}
			cout << endl;
		}*/

		/*for (int i = 1; i <= 10; i++)
		{
			for (int j = 1; j <= 10; j++)
			{
				cout << i * j << "\t";
			}
				cout << endl;
		}*/
	
#ifdef FACTORIAL
		/*int n;
	cout << " Введите число: "; cin >> n;
	int f = 1;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;*/
#endif

#ifdef POWER
	int a; // основание степени
	int n; // показатель
	int N = 1; // степень
	cout << " Введите основние степени "; cin >> a;
	cout << " Введите показатель степени "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif

	//int n;
	//cout << ""; cin >> n;
	////for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
	//for (int a = 0, b = 1, c = a + b; a < n; с = (a = b) + (b = c))
	//{
	//	cout << a << " \t";
	//}
	//cout << endl;
	// 
	//
	int n = 10;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
	}
	
}



