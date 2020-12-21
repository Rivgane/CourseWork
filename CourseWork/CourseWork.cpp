#include <iostream>

using namespace std;

int Laba1();
int Laba2();
int Laba3();
int Laba4();
short int coursemainmenu();

int main()
{
	setlocale(LC_ALL, "Russian");

	short int choose_menu, exit = 0;

	while (1)
	{
		choose_menu = coursemainmenu();
		switch (choose_menu)
		{
		case 1:
			system("cls");
			cout << "Лабораторная работа №1 \n";
			Laba1();
			system("cls");
			break;
		case 2:
			system("cls");
			Laba2();
			system("pause");
			system("cls");
			break;
		case 3:
			system("cls");
			Laba3();
			system("pause");
			system("cls");
			break;
		case 4:
			system("cls");
			Laba4();
			system("cls");
			break;
		case 0:
			return -1;
			break;

		}
	}

	return 0;
}
	
short int coursemainmenu() // меню, выбор задания
{
	setlocale(LC_ALL, "Russian");
	short int i;
	cout << "Курсовая работа \n\n";
	cout << "Выберите один из пунктов меню (1-4), чтобы выполнить соответствующую ей лабораторную работу, или 0, чтобы выйти. \n";
	cout << "1) Лабораторная работа №1 \n";
	cout << "2) Лабораторная работа №2 \n";
	cout << "3) Лабораторная работа №3 \n";
	cout << "4) Лабораторная работа №4 \n";
	cout << "0) Выход\n" << endl;

	cout << "Выбор: ";

	while (1)
	{
		cin >> i;
		if ((i >= 0) & (i <= 4))
			break;
		else
			cout << "Некорректный ввод, повторите попытку.\n";
	}
	cout << "\n";
	return i;
}

