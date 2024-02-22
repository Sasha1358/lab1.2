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

		// Переведення в радіани
		double ToRadians() const;

		// Приведення до діапазону 0°–360°
		void Normalize();

		// Збільшення кута на задану величину
		void Increase(double value);

		// Зменшення кута на задану величину
		void Decrease(double value);

		// Отримання синуса
		double Sin() const;	
	};

