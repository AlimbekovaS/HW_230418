#pragma once

//класс Date(дата)
//	Проверка на равенство двух дат(операция = = )
//	Изменение даты на указанное число дней(операции +=, -=)
//	Сложение и вычитание двух дат(операции + , -)


#include<iostream>
using namespace std;
class date
{
private:
	int day;
	int month;
	int year;
public:
	date() = default;
	date(int day, int month, int year)
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}

	int getDay() { return day; }
	int getMonth() { return month; }
	int getYear() { return year; }

	void setDay() { this->day = day; }
	void setMonth() { this->month = month; }
	void setYear() { this->year = year; }

	bool operator==(date obj)
	{
		return this->day == obj.day && this->month == obj.month && this->year == obj.year;
	}
	int operator+=(int d)
	{
		this->day += d;
		return day;
	}

	int operator-=(int d)
	{
		this->day -= d;
		return day;
	}
	
};