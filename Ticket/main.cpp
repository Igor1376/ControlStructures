#include <iostream>
#include<conio.h>
using namespace std;
//#define WHILE_1
//#define WHILE_2

void main()
{
    setlocale(LC_ALL, "");
    int number;
    int sum1, sum2;
    sum1 = sum2 = 0;
    cout << "Введите номер билета слитно без пробелов: "; cin >> number;
    while (number > 1000)
    {
        sum1 += number % 10;
        number /= 10;
    }
    while (number > 0)
    {
        sum2 += number % 10;
        number /= 10;
    }
    if (sum1 == sum2)
    {
    cout << "Номер счастливый" << endl;
    }
    else
    {
    cout << "Повезет в следующий раз" << endl;
    }
    //#ifdef WHILE_1
//    int number_ticket, left_number = 0, right_number = 0, variable;
//    cout << "Введите номер билета слитно без пробелов: " << endl;
//    cin >> number_ticket;
//    for (variable = 0; variable < 3; variable++)
//    {
//        right_number += (number_ticket % 10);
//        (number_ticket /= 10);
//    }
//    for (variable = 0; variable < 3; variable++)
//    {
//        left_number += (number_ticket % 10);
//        (number_ticket /= 10);
//    }
//    if (left_number == right_number)
//    {
//        cout << "Поздравляю вы обладатель счастливого билета" << endl;
//    }
//    else
//    {
//        cout << "Увы это не счастливый белет, повезет в следующий раз" << endl;
//    }
//#endif
//#ifdef WHILE_2
//cout << " -=Вас приветствует игра Shooter=- " << endl;
//cout << "       ***Начните игру*** " << endl;
//
//int _getch();
//while (_getch() != 0)
//{
//    if (_getch() == 13)
//    {
//        cout << " Enter огонь " << endl;
//    }
//    else if (_getch() == 32)
//    {
//        cout << " Space прыжок " << endl;
//    }
//    else if (_getch() == 27)
//    {
//        cout << " Escape выход " << endl;
//    }
//    else if (_getch() == 119)
//    {
//        cout << " w вперед " << endl;
//    }
//    else if (_getch() == 115)
//    {
//        cout << " s назад " << "\t" << endl;
//    }
//    else if (_getch() == 97)
//    {
//        cout << " a - влево " << endl;
//    }
//    else if (_getch() == 100)
//    {
//        cout << " d вправо " << endl;
//    }
//    else
//    {
//        cout << " Press any key to exit " << endl;
//    }
//
//    // 13 - Enter огонь, 32 - Space прыжок, 27 - Escape выход, 119 w вперед, 115 s назад, 97 a - влево, 100 d вправо
//#endif
}