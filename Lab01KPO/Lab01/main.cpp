#include "func.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a = 1, menu1(), menu2();

	do {
		//ГЛАВНОЕ МЕНЮ
		menu1();
		char n;
		cin >> n;

		while ('2' < n || n < '1') {
			cout << "\n";
			cout << "||  Вы ввели некорректный вариант выполнения программы  || \t\n";
			cout << "\n\n";
			menu2();
			cin >> n;
			cout << "\n";
		}
		system("cls");

		switch (n) {
		case '1': {
			cout << "\n";
			cout << "||  Введите дату в формате ДДММГГГГ  || \t\n";
			cout << "\n";
			static char data[chislo];
			cin >> data;
			for (int i = 0; i < 8; i++)
			{
				if (data[i] > '9' || data[i] < '0') {
					system("cls");
					cout << "\n";
					cout << "||       Вы некорректнo ввели дату     || \t\n";
					cout << "\n";
					cout << "\n";
					cout << "||   Введите дату в формате ДДММГГГГ   || \t\n";
					cout << "\n";
					cin >> data;
				}
			}
			int dol;
			//извлечение месяца из даты
			int mes = (data[2] - '0') * 10 + data[3] - '0';
			//извлечение дня из даты
			int den = (data[0] - '0') * 10 + data[1] - '0';
			//Доп проверка корректности даты
			int cel = 0;
			int god = (data[4] - '0') * 1000 + (data[5] - '0') * 100 + (data[6] - '0') * 10 + data[7] - '0';
			
			//ПРОВЕРКА ДАТЫ
			int Checking(int x, int y);
			while (Checking(god, cel) == 0 && mes == 2 && den > 28) {
				system("cls");

				cout << "||           Вы некорректно ввели дату!                 ||\n";

				cout << "\n\n";

				cout << "||           Введите дату(в формате ДДММГГГГ):          ||\n";
				cout << "\n\n";
				cin >> data;
				//извлечение месяца из даты
				mes = (data[2] - '0') * 10 + data[3] - '0';
				//извлечение дня из даты
				den = (data[0] - '0') * 10 + data[1] - '0';
				god = (data[4] - '0') * 1000 + (data[5] - '0') * 100 + (data[6] - '0') * 10 + data[7] - '0';
			}
			while (data[0] > '3' || data[0] < '0' || mes > 12 || mes < 1 || den < 1 || den > 31) {

				system("cls");

				cout << "||           Вы некорректно ввели дату!               ||\n";

				cout << "\n\n";

				cout << "||           Введите дату(в формате ДДММГГГГ):          ||\n";
				cout << "\n\n";
				cout << ">";
				cin >> data;
				//извлечение месяца из даты
				mes = (data[2] - '0') * 10 + data[3] - '0';
				//извлечение дня из даты
				den = (data[0] - '0') * 10 + data[1] - '0';
				god = (data[4] - '0') * 1000 + (data[5] - '0') * 100 + (data[6] - '0') * 10 + data[7] - '0';

			}
			//извлечение года из даты
			god = (data[4] - '0') * 1000 + (data[5] - '0') * 100 + (data[6] - '0') * 10 + data[7] - '0';
			system("cls");
			//Ввод даты рождения
			cout << "||      Введите дату рождения(в формате ДДММГГГГ):      ||\n";
			cout << "\n\n";
			static char happy[chislo];

			cin >> happy;
			//Проверка корректности даты
			for (int i = 0; i < 8; i++) {

				if (happy[i] > '9' || happy[i] < '0') {
					system("cls");

					cout << "||           Вы некорректно ввели дату!!!               ||\n";
					cout << "\n\n";

					cout << "||    Введите дату рождения(в формате ДДММГГГГ):        ||\n";
					cout << "\n\n";

					cin >> happy;

				}
			}
			//извлечение месяца из даты
			int meshappy = (happy[2] - '0') * 10 + happy[3] - '0';
			//извлечение дня из даты
			int denhappy = (happy[0] - '0') * 10 + happy[1] - '0';
			//Доп проверка корректности даты
			int Checking(int x, int y);
			int godhappy = (happy[4] - '0') * 1000 + (happy[5] - '0') * 100 + (happy[6] - '0') * 10 + happy[7] - '0';
			while (Checking(godhappy, cel) == 0 && meshappy == 2 && denhappy > 28) {
				system("cls");

				cout << "||           Вы некорректно ввели дату!!!               ||\n";
				cout << "\n\n";

				cout << "||           Введите дату(в формате ДДММГГГГ):          ||\n";
				cout << "\n\n";
				cin >> data;
				//извлечение месяца из даты
				mes = (data[2] - '0') * 10 + data[3] - '0';
				//извлечение дня из даты
				den = (data[0] - '0') * 10 + data[1] - '0';
				godhappy = (happy[4] - '0') * 1000 + (happy[5] - '0') * 100 + (happy[6] - '0') * 10 + happy[7] - '0';
			}
			while (happy[0] > '3' || happy[1] < '0' || meshappy > 12 || meshappy < 1 || denhappy < 1 || denhappy > 31) {
				system("cls");

				cout << "||           Вы некорректно ввели дату!!!               ||\n";
				cout << "\n\n";

				cout << "||    Введите дату рождения(в формате ДДММГГГГ):        ||\n";
				cout << "\n\n";

				cin >> happy;
				//извлечение месяца из даты
				meshappy = (happy[2] - '0') * 10 + happy[3] - '0';
				//извлечение дня из даты
				denhappy = (happy[0] - '0') * 10 + happy[1] - '0';
				godhappy = (happy[4] - '0') * 1000 + (happy[5] - '0') * 100 + (happy[6] - '0') * 10 + happy[7] - '0';
			}
			//извлечение года из даты
			godhappy = (happy[4] - '0') * 1000 + (happy[5] - '0') * 100 + (happy[6] - '0') * 10 + happy[7] - '0';

			//Вывод информации о дате
			system("cls");
			cout << "__________________________________________________________\n";
			cout << "|| Ваша введённая дата: " << den << ":" << mes << ":" << god << "\t\t\t||\n";
			cout << "||                                                      ||\n";
			cout << "|| Ваш день рождения: " << denhappy << ":" << meshappy << ":" << godhappy << "\t\t\t\t||\n";
			cout << "||______________________________________________________||\n\n\n\n";

			cout << "||        Характеристика введённой Вами даты            \n";

			cel = 0;
			//Проверка на високосность
			int Checking(int x, int y);
			if (Checking(god, cel) == 1) {
				cout << "|| Данный год является високосным                   \n";
			}
			else {
				cout << "|| Данный год не является високосным                \n";
			}
			//Вычисление порядкового номера дня в году
			int quantity(int x, int y, int z);
			cout << "|| Введённый Вами день является " << quantity(mes, den, Checking(god, cel)) << " в году \n";

			//Вычисление количества дней до Вашего ближайшего дня рождения
			if (quantity(mes, den, Checking(god, cel)) < quantity(meshappy, denhappy, Checking(god, cel))) {

				int daycout = quantity(mes, den, Checking(god, cel));
				int dayhappys = quantity(meshappy, denhappy, Checking(god, cel));
				int colvoday = dayhappys - daycout;
				cout << "|| До ближайшего Вашего дня рождения " << colvoday << " дня(ей) \n";

			}
			else if (quantity(mes, den, Checking(god, cel)) == quantity(meshappy, denhappy, Checking(god, cel))) {
				cout << "|| Поздравляю, у Вас сегодня день рождения \n";


			}
			else {

				int daycout = quantity(mes, den, Checking(god, cel));
				int jatgod = god + 1;
				int dayhappys = quantity(meshappy, denhappy, Checking(jatgod, cel));
				int daygod = 365 + Checking(god, cel);
				int daystar = daygod - daycout;
				int colvoday = dayhappys + daystar;
				cout << "|| До ближайшего Вашего дня рождения " << colvoday << " дня(ей) \n";

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
			cout << "||  Завершение программы   || \t\n";
			cout << "\n";
			return 0;
		}
		}
	} while (a != 0);
	return 0;
}