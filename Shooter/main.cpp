#include<iostream>
#include<conio.h>
using namespace std;
#define UP_ARROW 72 // 
#define DOWN_ARROW 80
#define LEFT_ARROW 75
#define RIGHT_ARROW 77
#define Enter 13
#define Escape 27

void main()
{
    setlocale(LC_ALL, "");
    char key;
    do
    {
        key = _getch();
        //cout << (int)key << "\t" << key << endl;
        /*if (key == 'w'|| key == 'W' || key == UP_ARROW)cout << "������" << endl;
        else if (key == 's' || key == 'S' || key == DOWN_ARROW)cout << "�����" << endl;
        else if (key == 'a'|| key == 'A' || key == LEFT_ARROW)cout << "�����" << endl;
        else if (key == 'd' || key == 'D' || key == RIGHT_ARROW)cout << "������" << endl;
        else if (key == ' ' || key == ' ')cout << "������" << endl;
        else if (key == 13)cout << "�����" << endl;
        else if (key != 27 && key != -32)cout << "������" << endl;*/

        switch (key)
        {
        case 'w': case 'W': case UP_ARROW:    cout << "������" << endl; break;
        case 's': case 'S': case DOWN_ARROW:  cout << "�����" << endl; break;
        case 'a': case 'A': case LEFT_ARROW:  cout << "�����" << endl; break;
        case 'd': case 'D': case RIGHT_ARROW: cout << "������" << endl; break;
        case Escape:cout << "�����" << endl;
        case -32:break;
        default: cout << "������" << endl; break;
        }
    } while (key != 27);
    //cout << " -=��� ������������ ���� Shooter=- " << endl;
    //cout << "       ***������� ����*** " << endl;
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
    //}
}