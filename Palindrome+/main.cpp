#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int number; // число введенное с клавиатуры
	int reverse = 0; // исходное число записанное в обратном порядке (цифры задом на перед)
	cout << "Введите число:"; cin >> number;
	int buffer = number; // копируем введенное число, чтобы данны, введенные пользователем остались не изменными
	while (buffer)
	{
		reverse *= 10; // прежде чем сохранить следующий младший разряд нужно освободить под него место
		reverse += buffer % 10; // сохраняем младший разряд буфера
		buffer /= 10; // сохраняем младший разряд из буфера
	}
	cout << number << endl;
	cout << buffer << endl;
	cout << reverse << endl;
}