#include<iostream>
using namespace std;

//#define 

void main()
{
	setlocale(LC_ALL, "");
		
	int i, j;
	cout << "������� �������� i: ";
	cin >> i;
	cout << "������� �������� j: ";
	cin >> j;
	i ^= j;
	j ^= i;
	i ^= j;
	cout << "�������� i: " << i << "\t" << "�������� j: " << j << endl;

}