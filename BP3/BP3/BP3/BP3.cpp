// BP3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;

	cin >> a;
	if (a>100 || a < 119){
	b = (a % 100);
	switch (b)
	{
	case 10:
	cout << "сто десять" << endl;
		break;
	case 11:
		cout << "сто одиннадцать" << endl;
		break;
	case 12:
		cout << "сто двенадцать" << endl;
		break;
	case 13:
		cout << "сто тринадцать" << endl;
		break;
	case 14:
		cout << "сто четырнадцать" << endl;
		break;
	case 15:
		cout << "сто пятнадцать" << endl;
		break;
	case 16:
		cout << "сто шестнадцать" << endl;
		break;
	case 17:
		cout << "сто семнадцать" << endl;
		break;
	case 18:
		cout << "сто восемнадцать" << endl;
		break;
	case 19:
		cout << "сто девятнадцать" << endl;
		break;
	}
	}
	else {
		c = (a / 100);
		switch (c)
		{
	case 1:
		cout << "сто ";
		break;
	case 2:
		cout << "двести ";
		break;
	case 3:
		cout << "триста ";
		break;
	case 4:
		cout << "четыреста ";
		break;
	case 5:
		cout << "пятьсот ";
		break;
	case 6:
		cout << "шестьсот ";
		break;
	case 7:
		cout << "семьсот ";
		break;
	case 8:
		cout << "восемьсот ";
		break;
	case 9:
		cout << "девятьсот ";
		break;

		}
	}

	d = (a / 10) % 10;
	switch (d)
	{
	case 2:
		cout << "двадцать ";
		break;
	case 3:
		cout << "тридцать ";
		break;
	case 4:
		cout << "сорок ";
		break;
	case 5:
		cout << "пятьдесят ";
		break;
	case 6:
		cout << "шестьдесят ";
		break;
	case 7:
		cout << "семьдесят ";
		break;
	case 8:
		cout << "восемьдесят ";
		break;
	case 9:
		cout << "девяносто ";
		break;

	}
	d = (a % 10);
	switch (d)
	{
	case 1:
		cout << "один" << endl;
		break;
	case 2:
		cout << "два" << endl;
		break;
	case 3:
		cout << "три" << endl;
		break;
	case 4:
		cout << "четыре" << endl;
		break;
	case 5:
		cout << "пять" << endl;
		break;
	case 6:
		cout << "шесть" << endl;
		break;
	case 7:
		cout << "семь" << endl;
		break;
	case 8:
		cout << "восемь" << endl;
		break;
	case 9:
		cout << "девять" << endl;
		break;
	case 10:
		cout << "десять" << endl;
		break;

	}
}
