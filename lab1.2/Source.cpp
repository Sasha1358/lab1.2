#include <iostream>
#include "Angle.h"
#include <Windows.h> 

using namespace std;

Angle makeAngle(double grades, double minutes)
{
    Angle z{};
    if (!z.Init(grades, minutes))
        cout << "���������� ��������� ��� Init!" << endl;
    return z;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Angle z{};
    z.Read();
    z.Display();

    cout << "������������ � �����: " << z.ToRadians() << " ������" << endl;
    cout << "���������� ���: ";
    z.Normalize();
    z.Display();

    double increase_value;
    cout << "������ ��������, ��� �������� ���: "; cin >> increase_value;
    z.Increase(increase_value);
    cout << "��������� ���: ";
    z.Display();

    double decrease_value;
    cout << "������ ��������, ��� �������� ���: ";cin >> decrease_value;
    z.Decrease(decrease_value);
    cout << "��������� ���: ";
    z.Display();

    cout << "����� ����: " << z.Sin() << endl;

    return 0;
}
