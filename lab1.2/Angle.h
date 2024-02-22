#pragma once
#include <string>
#include <cmath>
#include <iostream>
using namespace std;
class Angle
{
	private:
		double grades;
		double minutes;
	public:
		double GetGrades() const { return grades;}
		double GetMinutes() const { return minutes;}
		void SetGrades(double value);
		void SetMinutes(double value);

		bool Init(double, double);
		void Read();
		void Display() const;

		// ����������� � ������
		double ToRadians() const;

		// ���������� �� �������� 0��360�
		void Normalize();

		// ��������� ���� �� ������ ��������
		void Increase(double value);

		// ��������� ���� �� ������ ��������
		void Decrease(double value);

		// ��������� ������
		double Sin() const;	
	};

