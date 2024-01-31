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
        /*if (key == 'w'|| key == 'W' || key == UP_ARROW)cout << "Вперед" << endl;
        else if (key == 's' || key == 'S' || key == DOWN_ARROW)cout << "Назад" << endl;
        else if (key == 'a'|| key == 'A' || key == LEFT_ARROW)cout << "Влево" << endl;
        else if (key == 'd' || key == 'D' || key == RIGHT_ARROW)cout << "Вправо" << endl;
        else if (key == ' ' || key == ' ')cout << "Прыжок" << endl;
        else if (key == 13)cout << "Огонь" << endl;
        else if (key != 27 && key != -32)cout << "Ошибка" << endl;*/

        switch (key)
        {
        case 'w': case 'W': case UP_ARROW:    cout << "Вперед" << endl; break;
        case 's': case 'S': case DOWN_ARROW:  cout << "Назад" << endl; break;
        case 'a': case 'A': case LEFT_ARROW:  cout << "Влево" << endl; break;
        case 'd': case 'D': case RIGHT_ARROW: cout << "Вправо" << endl; break;
        case Escape:cout << "Выход" << endl;
        case -32:break;
        default: cout << "Ошибка" << endl; break;
        }
    } while (key != 27);
    //cout << " -=Вас приветствует игра Shooter=- " << endl;
    //cout << "       ***Начните игру*** " << endl;
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
    //}
}