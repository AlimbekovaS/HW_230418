//класс Date(дата)
//	Проверка на равенство двух дат(операция = = )
//	Изменение даты на указанное число дней(операции +=, -=)
//	Сложение и вычитание двух дат(операции + , -)
#include<iostream>
#include"Date.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int d, m, y, d2, m2, y2, chislo, Nday, Nday2;
	cout << "Enter day: ";
	cin >> d;
	cout << "Enter month: ";
	cin >> m;
	cout << "Enter year: ";
	cin >> y;
	cout << "Next date\n";
	cout << "Enter day: ";
	cin >> d2;
	cout << "Enter month: ";
	cin >> m2;
	cout << "Enter year: ";
	cin >> y2;

	int maxd;
	//31.12.2018

	if ((d > 0 && d <= 31) && (m > 0 && m <= 12) && (y > 0 && y < 9999) && (d2 > 0 && d2 <= 31) && (m2 > 0 && m2 <= 12) && (y2 > 0 && y2 < 9999))
	{
		int maxd;
		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
		{
			switch (m)
			{
			case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			{
				maxd = 31;
				break;
			}
			case 2:
			{
				maxd = 29;
				break;
			}
			case 4:case 6:case 9:case 11:
			{
				maxd = 30;
				break;
			}
			}
		}
		else
		{
			switch (m)
			{
			case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			{
				maxd = 31;
				break;
			}
			case 2:
			{
				maxd = 28;
				break;
			}
			case 4:case 6:case 9:case 11:
			{
				maxd = 30;
				break;
			}
			}
		}
		if (d > maxd)
		{
			cout << "Вы ввели неправильное число \n";
		}
		else
		{
			date Date1(d, m, y);
			date Date2(d2, m2, y2);
			cout << (Date1 == Date2) << endl;
			cout << "Введите на сколько дней увеличить дату: ";
			cin >> chislo;
			int day = d += chislo;
			if (day > maxd)
			{
				Nday = day - maxd;
				m++;
				if (m > 12)
				{
					m--;
					y++;
				}
			}
			else
			{
				Nday = day;
			}
			cout << "New date= " << Nday << "." << m << "." << y << endl;
			cout << "Введите на сколько дней уменьшить дату: ";
			cin >> chislo;
			day = d -= chislo;
			if (day < chislo)
			{
				Nday2 = chislo-day;
				m--;
			}
			else
			{
				Nday2 = day;
			}

			cout << "New date: " << Nday2 << "." << m << "." << y << endl;
				
		}
	}

	else
	{
		cout << "Вы ввели несуществующую дату";
		d = 0;
		m = 0;
		y = 0;
		d2 = 0;
		m2 = 0;
		y2 = 0;

	}
	
	
	
	
	system("pause");
	return 0;
}