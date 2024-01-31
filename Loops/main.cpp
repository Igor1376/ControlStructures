#include<iostream>
#include<conio.h>
using namespace std;

//#define WHILE_1
//#define WHILE_2
//#define WHILE_3
//#define WHILE_4
#define WHILE_5

void main()
{
	//setlocale(LC_ALL, "");
#ifdef WHILE_1
//	int i = 0;
//	int n;
//	cout << "¬вести количество итераций"; cin >> n;
//	while (i < n)
//	{
//		cout << " Hello world! ";
//		cout << ++i << endl;
//		//i++;
//	}
#endif // WHILE_1

#ifdef WHILE_2
	char key;
	do
	{
		key = _getch(); 
		// функци€ '_getch()' ожидает нажатие клавиши и возвращает ASCII код нажатой клавиши
		// функци€ '_getch()' объ€влени€ в библиотеке <conio.h>
		cout << (int)key << "\t" << key << endl;
		// (int)key - это €вное преобразование переменной key  в тип данных int 
		// дл€ того чтобы увидеть ASCII код символа хран€щегос€ в переменной key
	}	while (key != 27);
#endif

	//ѕерва€ задача ‘рактар:
#ifdef WHILE_3
	//int number, fctrl, i;
	//fctrl = 1; 
	//i = 1;
	//cout << "¬ведите выражение" << endl;
	//cin >> number;
	//while (i <= number)
	//{
	//	fctrl = fctrl * i;
	//	i++;
	//}
	//cout << fctrl << endl;
#endif 
	//¬тора€ задача степень:
#ifdef WHILE_4
	double number;
	int pokaz_step;
	double step = 1;
	cout << "¬ведите число которое хотите возвести в степень" << endl; cin >> number;
	cout << "¬ведите степень" << endl; cin >> pokaz_step;
	if (pokaz_step < 0)
	{
		number = 1 / number;
		pokaz_step = -pokaz_step;
	}
	int i = 0;
	while (i++ < pokaz_step) step *= number;
	cout << step << endl;
#endif 
	// “реть€ задача табрица ASCII делал после командировки по видео повтору
#ifdef WHILE_5
	
	int i = 0;
	int n = 256;
	while (i < n)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i++ << " ";
		
	}
	
#endif 	
}