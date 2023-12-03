#include "func.h";
//ФУНКЦИИ
int menu1() {
	using namespace std;
	cout << "\n\n";
	cout << "||         Выберите вариант выполнения программы:       ||\n";
	cout << "|| 1 - Информация о введённой Вами дате                 ||\n";
	cout << "|| 2 - Выход из программы                               ||\n";
	cout << "\n\n";
	return 0;
}
int menu2() {
	int menu1();
	using namespace std;
	system("cls");
	cout << "\n";
	cout << "Вы ввели некорректный вариант выполнения программы,и были возвращены в меню\t\n";
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
//Функция вычисляющая порядковый номер введенного дня
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
		cout << "|| Месяц даты,которую Вы ввели, - Январь  \n";

		break;
	}
	case 2: {
		cout << "|| Месяц даты,которую Вы ввели, - Февраль  \n";

		break;
	}
	case 3: {
		cout << "|| Месяц даты,которую Вы ввели, - Март  \n";

		break;
	}
	case 4: {
		cout << "|| Месяц даты,которую Вы ввели, - Апрель  \n";

		break;
	}
	case 5: {
		cout << "|| Месяц даты,которую Вы ввели, - Май  \n";

		break;
	}
	case 6: {
		cout << "|| Месяц даты,которую Вы ввели, - Июнь  \n";

		break;
	}
	case 7: {
		cout << "|| Месяц даты,которую Вы ввели, - Июль  \n";

		break;
	}
	case 8: {
		cout << "|| Месяц даты,которую Вы ввели, - Август  \n";

		break;
	}
	case 9: {
		cout << "|| Месяц даты,которую Вы ввели, - Сентябрь  \n";

		break;
	}
	case 10: {
		cout << "|| Месяц даты,которую Вы ввели, - Октябрь  \n";

		break;
	}
	case 11: {
		cout << "|| Месяц даты,которую Вы ввели, - Ноябрь  \n";

		break;
	}
	case 12: {
		cout << "|| Месяц даты,которую Вы ввели, - Декабрь  \n";

		break;
	}
	}
	return 0;
}
int day_proger(int x) {
	if (x == 1) {
		cout << "|| День программиста в введённом Вами году - 12 сент.\n";
		
	}
	else {
		cout << "|| День программиста в введённом Вами году - 13 сент.\n";
		
	}
	return 0;
}
