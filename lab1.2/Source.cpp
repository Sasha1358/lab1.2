#include <iostream>
#include "Angle.h"
#include <Windows.h> 

using namespace std;

Angle makeAngle(double grades, double minutes)
{
    Angle z{};
    if (!z.Init(grades, minutes))
        cout << "Неправильні аргументи для Init!" << endl;
    return z;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Angle z{};
    z.Read();
    z.Display();

    cout << "Перетворення в радіан: " << z.ToRadians() << " радіани" << endl;
    cout << "Нормальний кут: ";
    z.Normalize();
    z.Display();

    double increase_value;
    cout << "Введіть значення, щоб збільшити кут: "; cin >> increase_value;
    z.Increase(increase_value);
    cout << "Збільшений кут: ";
    z.Display();

    double decrease_value;
    cout << "Введіть значення, щоб зменшити кут: ";cin >> decrease_value;
    z.Decrease(decrease_value);
    cout << "Зменшений кут: ";
    z.Display();

    cout << "Синус кута: " << z.Sin() << endl;

    return 0;
}
