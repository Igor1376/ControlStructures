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
    cout << "������� ����� ������ ������ ��� ��������: "; cin >> number;
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
    cout << "����� ����������" << endl;
    }
    else
    {
    cout << "������� � ��������� ���" << endl;
    }
    //#ifdef WHILE_1
//    int number_ticket, left_number = 0, right_number = 0, variable;
//    cout << "������� ����� ������ ������ ��� ��������: " << endl;
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
//        cout << "���������� �� ���������� ����������� ������" << endl;
//    }
//    else
//    {
//        cout << "��� ��� �� ���������� �����, ������� � ��������� ���" << endl;
//    }
//#endif
//#ifdef WHILE_2
//cout << " -=��� ������������ ���� Shooter=- " << endl;
//cout << "       ***������� ����*** " << endl;
//
//int _getch();
//while (_getch() != 0)
//{
//    if (_getch() == 13)
//    {
//        cout << " Enter ����� " << endl;
//    }
//    else if (_getch() == 32)
//    {
//        cout << " Space ������ " << endl;
//    }
//    else if (_getch() == 27)
//    {
//        cout << " Escape ����� " << endl;
//    }
//    else if (_getch() == 119)
//    {
//        cout << " w ������ " << endl;
//    }
//    else if (_getch() == 115)
//    {
//        cout << " s ����� " << "\t" << endl;
//    }
//    else if (_getch() == 97)
//    {
//        cout << " a - ����� " << endl;
//    }
//    else if (_getch() == 100)
//    {
//        cout << " d ������ " << endl;
//    }
//    else
//    {
//        cout << " Press any key to exit " << endl;
//    }
//
//    // 13 - Enter �����, 32 - Space ������, 27 - Escape �����, 119 w ������, 115 s �����, 97 a - �����, 100�d�������
//#endif
}