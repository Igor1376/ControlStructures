#include<iostream>
using namespace std;

//#define 

void main()
{
	setlocale(LC_ALL, "");
		
	int i, j;
	cout << "¬ведите значение i: ";
	cin >> i;
	cout << "¬ведите значение j: ";
	cin >> j;
	i ^= j;
	j ^= i;
	i ^= j;
	cout << "«начение i: " << i << "\t" << "«начение j: " << j << endl;

}