#include "func.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a = 1, menu1(), menu2();

	do {
		//������� ����
		menu1();
		char n;
		cin >> n;

		while ('2' < n || n < '1') {
			cout << "\n";
			cout << "||  �� ����� ������������ ������� ���������� ���������  || \t\n";
			cout << "\n\n";
			menu2();
			cin >> n;
			cout << "\n";
		}
		system("cls");

		switch (n) {
		case '1': {
			cout << "\n";
			cout << "||  ������� ���� � ������� ��������  || \t\n";
			cout << "\n";
			static char data[chislo];
			cin >> data;
			for (int i = 0; i < 8; i++)
			{
				if (data[i] > '9' || data[i] < '0') {
					system("cls");
					cout << "\n";
					cout << "||       �� ����������o ����� ����     || \t\n";
					cout << "\n";
					cout << "\n";
					cout << "||   ������� ���� � ������� ��������   || \t\n";
					cout << "\n";
					cin >> data;
				}
			}
			int dol;
			//���������� ������ �� ����
			int mes = (data[2] - '0') * 10 + data[3] - '0';
			//���������� ��� �� ����
			int den = (data[0] - '0') * 10 + data[1] - '0';
			//��� �������� ������������ ����
			int cel = 0;
			int god = (data[4] - '0') * 1000 + (data[5] - '0') * 100 + (data[6] - '0') * 10 + data[7] - '0';
			
			//�������� ����
			int Checking(int x, int y);
			while (Checking(god, cel) == 0 && mes == 2 && den > 28) {
				system("cls");

				cout << "||           �� ����������� ����� ����!                 ||\n";

				cout << "\n\n";

				cout << "||           ������� ����(� ������� ��������):          ||\n";
				cout << "\n\n";
				cin >> data;
				//���������� ������ �� ����
				mes = (data[2] - '0') * 10 + data[3] - '0';
				//���������� ��� �� ����
				den = (data[0] - '0') * 10 + data[1] - '0';
				god = (data[4] - '0') * 1000 + (data[5] - '0') * 100 + (data[6] - '0') * 10 + data[7] - '0';
			}
			while (data[0] > '3' || data[0] < '0' || mes > 12 || mes < 1 || den < 1 || den > 31) {

				system("cls");

				cout << "||           �� ����������� ����� ����!               ||\n";

				cout << "\n\n";

				cout << "||           ������� ����(� ������� ��������):          ||\n";
				cout << "\n\n";
				cout << ">";
				cin >> data;
				//���������� ������ �� ����
				mes = (data[2] - '0') * 10 + data[3] - '0';
				//���������� ��� �� ����
				den = (data[0] - '0') * 10 + data[1] - '0';
				god = (data[4] - '0') * 1000 + (data[5] - '0') * 100 + (data[6] - '0') * 10 + data[7] - '0';

			}
			//���������� ���� �� ����
			god = (data[4] - '0') * 1000 + (data[5] - '0') * 100 + (data[6] - '0') * 10 + data[7] - '0';
			system("cls");
			//���� ���� ��������
			cout << "||      ������� ���� ��������(� ������� ��������):      ||\n";
			cout << "\n\n";
			static char happy[chislo];

			cin >> happy;
			//�������� ������������ ����
			for (int i = 0; i < 8; i++) {

				if (happy[i] > '9' || happy[i] < '0') {
					system("cls");

					cout << "||           �� ����������� ����� ����!!!               ||\n";
					cout << "\n\n";

					cout << "||    ������� ���� ��������(� ������� ��������):        ||\n";
					cout << "\n\n";

					cin >> happy;

				}
			}
			//���������� ������ �� ����
			int meshappy = (happy[2] - '0') * 10 + happy[3] - '0';
			//���������� ��� �� ����
			int denhappy = (happy[0] - '0') * 10 + happy[1] - '0';
			//��� �������� ������������ ����
			int Checking(int x, int y);
			int godhappy = (happy[4] - '0') * 1000 + (happy[5] - '0') * 100 + (happy[6] - '0') * 10 + happy[7] - '0';
			while (Checking(godhappy, cel) == 0 && meshappy == 2 && denhappy > 28) {
				system("cls");

				cout << "||           �� ����������� ����� ����!!!               ||\n";
				cout << "\n\n";

				cout << "||           ������� ����(� ������� ��������):          ||\n";
				cout << "\n\n";
				cin >> data;
				//���������� ������ �� ����
				mes = (data[2] - '0') * 10 + data[3] - '0';
				//���������� ��� �� ����
				den = (data[0] - '0') * 10 + data[1] - '0';
				godhappy = (happy[4] - '0') * 1000 + (happy[5] - '0') * 100 + (happy[6] - '0') * 10 + happy[7] - '0';
			}
			while (happy[0] > '3' || happy[1] < '0' || meshappy > 12 || meshappy < 1 || denhappy < 1 || denhappy > 31) {
				system("cls");

				cout << "||           �� ����������� ����� ����!!!               ||\n";
				cout << "\n\n";

				cout << "||    ������� ���� ��������(� ������� ��������):        ||\n";
				cout << "\n\n";

				cin >> happy;
				//���������� ������ �� ����
				meshappy = (happy[2] - '0') * 10 + happy[3] - '0';
				//���������� ��� �� ����
				denhappy = (happy[0] - '0') * 10 + happy[1] - '0';
				godhappy = (happy[4] - '0') * 1000 + (happy[5] - '0') * 100 + (happy[6] - '0') * 10 + happy[7] - '0';
			}
			//���������� ���� �� ����
			godhappy = (happy[4] - '0') * 1000 + (happy[5] - '0') * 100 + (happy[6] - '0') * 10 + happy[7] - '0';

			//����� ���������� � ����
			system("cls");
			cout << "__________________________________________________________\n";
			cout << "|| ���� �������� ����: " << den << ":" << mes << ":" << god << "\t\t\t||\n";
			cout << "||                                                      ||\n";
			cout << "|| ��� ���� ��������: " << denhappy << ":" << meshappy << ":" << godhappy << "\t\t\t\t||\n";
			cout << "||______________________________________________________||\n\n\n\n";

			cout << "||        �������������� �������� ���� ����            \n";

			cel = 0;
			//�������� �� ������������
			int Checking(int x, int y);
			if (Checking(god, cel) == 1) {
				cout << "|| ������ ��� �������� ����������                   \n";
			}
			else {
				cout << "|| ������ ��� �� �������� ����������                \n";
			}
			//���������� ����������� ������ ��� � ����
			int quantity(int x, int y, int z);
			cout << "|| �������� ���� ���� �������� " << quantity(mes, den, Checking(god, cel)) << " � ���� \n";

			//���������� ���������� ���� �� ������ ���������� ��� ��������
			if (quantity(mes, den, Checking(god, cel)) < quantity(meshappy, denhappy, Checking(god, cel))) {

				int daycout = quantity(mes, den, Checking(god, cel));
				int dayhappys = quantity(meshappy, denhappy, Checking(god, cel));
				int colvoday = dayhappys - daycout;
				cout << "|| �� ���������� ������ ��� �������� " << colvoday << " ���(��) \n";

			}
			else if (quantity(mes, den, Checking(god, cel)) == quantity(meshappy, denhappy, Checking(god, cel))) {
				cout << "|| ����������, � ��� ������� ���� �������� \n";


			}
			else {

				int daycout = quantity(mes, den, Checking(god, cel));
				int jatgod = god + 1;
				int dayhappys = quantity(meshappy, denhappy, Checking(jatgod, cel));
				int daygod = 365 + Checking(god, cel);
				int daystar = daygod - daycout;
				int colvoday = dayhappys + daystar;
				cout << "|| �� ���������� ������ ��� �������� " << colvoday << " ���(��) \n";

			}
			int month_day(int x);
			month_day(mes);
			int day_proger(int x);
			day_proger(Checking(god, cel));

			cout << "\n\n";
			system("pause");
			system("cls");
			break;
		}

		case '2': {
			system("cls");
			cout << "\n";
			cout << "||  ���������� ���������   || \t\n";
			cout << "\n";
			return 0;
		}
		}
	} while (a != 0);
	return 0;
}