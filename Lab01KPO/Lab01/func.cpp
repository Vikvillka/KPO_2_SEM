#include "func.h";
//�������
int menu1() {
	using namespace std;
	cout << "\n\n";
	cout << "||         �������� ������� ���������� ���������:       ||\n";
	cout << "|| 1 - ���������� � �������� ���� ����                 ||\n";
	cout << "|| 2 - ����� �� ���������                               ||\n";
	cout << "\n\n";
	return 0;
}
int menu2() {
	int menu1();
	using namespace std;
	system("cls");
	cout << "\n";
	cout << "�� ����� ������������ ������� ���������� ���������,� ���� ���������� � ����\t\n";
	cout << "\n\n";
	menu1();
	return 0;
}
int Checking(int x, int y) {
	using namespace std;
	if (x % 4 == 0 && x % 400 != 100 && x % 400 != 200 && x % 400 != 300) {
		y = 1;
	}
	else {
		y = 0;
	}
	return y;
}
//������� ����������� ���������� ����� ���������� ���
int quantity(int x, int y, int z) {
	using namespace std;
	int Mounthes[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int sumday = 0;
	if (z == 1) {
		Mounthes[1] = 29;
	}
	for (int i = 0; i < x - 1; i++) {
		sumday = sumday + Mounthes[i];
	}
	sumday = sumday + y;

	return sumday;
}

int month_day(int x) {
	switch (x) {
	case 1: {
		cout << "|| ����� ����,������� �� �����, - ������  \n";

		break;
	}
	case 2: {
		cout << "|| ����� ����,������� �� �����, - �������  \n";

		break;
	}
	case 3: {
		cout << "|| ����� ����,������� �� �����, - ����  \n";

		break;
	}
	case 4: {
		cout << "|| ����� ����,������� �� �����, - ������  \n";

		break;
	}
	case 5: {
		cout << "|| ����� ����,������� �� �����, - ���  \n";

		break;
	}
	case 6: {
		cout << "|| ����� ����,������� �� �����, - ����  \n";

		break;
	}
	case 7: {
		cout << "|| ����� ����,������� �� �����, - ����  \n";

		break;
	}
	case 8: {
		cout << "|| ����� ����,������� �� �����, - ������  \n";

		break;
	}
	case 9: {
		cout << "|| ����� ����,������� �� �����, - ��������  \n";

		break;
	}
	case 10: {
		cout << "|| ����� ����,������� �� �����, - �������  \n";

		break;
	}
	case 11: {
		cout << "|| ����� ����,������� �� �����, - ������  \n";

		break;
	}
	case 12: {
		cout << "|| ����� ����,������� �� �����, - �������  \n";

		break;
	}
	}
	return 0;
}
int day_proger(int x) {
	if (x == 1) {
		cout << "|| ���� ������������ � �������� ���� ���� - 12 ����.\n";
		
	}
	else {
		cout << "|| ���� ������������ � �������� ���� ���� - 13 ����.\n";
		
	}
	return 0;
}
