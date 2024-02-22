#define _USE_MATH_DEFINES
#include "Angle.h"
#include <iostream>
#include <cmath>

using namespace std;
void Angle::SetGrades(double value)
{
    grades = value;
}
void Angle::SetMinutes(double value)
{
    minutes = value;
}
bool Angle::Init(double new_grades, double new_minutes)
{
    if (new_grades >= 0 && new_grades < 360 && new_minutes >= 0 && new_minutes < 60)
    {
        grades = new_grades;
        minutes = new_minutes;
        Normalize();
        return true;
    }
    else
    {
        cout << "������ ������ ��������. ������� ����� ���� � [0, 360), � ������� � [0, 60)." << endl;
        return false;
    }
}
void Angle::Read()
{
    double new_grades = 0.0, new_minutes = 0.0;
    do {
        cout << "��� ������ ������������." << endl;
        cout << "������ �������: ";cin >> new_grades;
        cout << "������ ������: ";cin >> new_minutes;

    } while (!Init(new_grades, new_minutes));
}
void Angle::Display() const
{
    cout << "Angle: " << grades << "� " << minutes << "'" << endl;
}

double Angle::ToRadians() const
{
    return (grades + minutes / 60) * M_PI / 180.0;//������ ����������� ������� � ������. ������,
    //�� ����������� ��������, ��� ������� ��������� �� ������� ������� ��� ��������� �������� �������� � �������.
}

void Angle::Normalize()
{
    while (grades >= 360)
    {
        grades -= 360;
    }
    while (grades < 0)
    {
        grades += 360;
    }
}

void Angle::Increase(double value)
{
    grades += value;
    Normalize();
}

void Angle::Decrease(double value)
{
    grades -= value;
    Normalize();
}

double Angle::Sin() const
{
    return sin(ToRadians());
}