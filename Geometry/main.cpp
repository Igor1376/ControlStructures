//geometry
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define TRIANGLE_5
//#define TRIANGLE_6
//#define TRIANGLE_7
//#define ROMBUS_1
//#define ROMBUS_2

void main()
{
	//setlocale(LC_ALL, "");
	int n;
	cout << "Enter your number: "; cin >> n;
#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	

#endif	// SQUARE
#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif
#ifdef TRIANGLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif
#ifdef TRIANGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}
#endif
#ifdef TRIANGLE_4
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n-1; j++)cout << "  ";
		for (int j = 0; j <= i; j++)cout << "* ";
		cout << endl;
	}
#endif
#ifdef ROMBUS_1
	for (int i = 0; i < n; i++)
	{
	for (int j = i; j < n; j++)cout << " ";cout << "/";
	for (int j = 0; j < i; j++)cout << "  ";cout << "\\";
	cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " ";cout << "\\";
		for (int j = i; j < n-1; j++)cout << "  "; cout << "/";
		cout << endl;
	}
#endif
#ifdef ROMBUS_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " ";cout << "/";
		for (int j = 0; j < i*2; j++)cout << " ";cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " ";cout << "\\";
		for (int j = 0; j < (n - 1 - i)*2; j++)cout << " ";cout << "/";
		cout << endl;
	}
#endif
#ifdef TRIANGLE_5
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if ((i + j) % 2 == 0)cout << "+ ";else cout << "- ";
			if ((i % 2 == j % 2))cout << "* ";else cout << "  ";
			//((i % 2 == j % 2)) ? cout << char(254) : cout << "  ";
			//cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
#endif
#ifdef TRIANGLE_6
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)cout << "* ";
		for (int i = 0; i < n; i++)cout << "  ";
		for (int i = 0; i < n; i++)cout << "* ";
		for (int i = 0; i < n; i++)cout << "  ";
		for (int i = 0; i < n; i++)cout << "* ";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)cout << "  ";
		for (int i = 0; i < n; i++)cout << "* ";
		for (int i = 0; i < n; i++)cout << "  ";
		for (int i = 0; i < n; i++)cout << "* ";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)cout << "* ";
		for (int i = 0; i < n; i++)cout << "  ";
		for (int i = 0; i < n; i++)cout << "* ";
		for (int i = 0; i < n; i++)cout << "  ";
		for (int i = 0; i < n; i++)cout << "* ";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)cout << "  ";
		for (int i = 0; i < n; i++)cout << "* ";
		for (int i = 0; i < n; i++)cout << "  ";
		for (int i = 0; i < n; i++)cout << "* ";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)cout << "* ";
		for (int i = 0; i < n; i++)cout << "  ";
		for (int i = 0; i < n; i++)cout << "* ";
		for (int i = 0; i < n; i++)cout << "  ";
		for (int i = 0; i < n; i++)cout << "* ";
		cout << endl;
	}
#endif
#ifdef TRIANGLE_7
	cout << char(218);
	for (int i = 0; i < n * 2; i++)cout << char(196); cout << char(191) << endl;
	for (int l = 0; l < n; l++)
	{
		cout << char(179);
		for (int j = 0; j < n; j++)
		{
			
			if ((l % 2 == j % 2))cout << char(219); else cout << "  ";
			if ((l % 2 == j % 2))cout << char(219);
		}
		cout << char(179);
		cout << endl;
	}
	cout << char(192);
	for (int x = 0; x < n * 2; x++)cout << char(196); cout << char(217) << endl;
#endif



}