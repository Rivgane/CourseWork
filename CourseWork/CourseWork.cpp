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
			cout << "������������ ������ �1 \n";
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
	
short int coursemainmenu() // ����, ����� �������
{
	setlocale(LC_ALL, "Russian");
	short int i;
	cout << "�������� ������ \n\n";
	cout << "�������� ���� �� ������� ���� (1-4), ����� ��������� ��������������� �� ������������ ������, ��� 0, ����� �����. \n";
	cout << "1) ������������ ������ �1 \n";
	cout << "2) ������������ ������ �2 \n";
	cout << "3) ������������ ������ �3 \n";
	cout << "4) ������������ ������ �4 \n";
	cout << "0) �����\n" << endl;

	cout << "�����: ";

	while (1)
	{
		cin >> i;
		if ((i >= 0) & (i <= 4))
			break;
		else
			cout << "������������ ����, ��������� �������.\n";
	}
	cout << "\n";
	return i;
}

