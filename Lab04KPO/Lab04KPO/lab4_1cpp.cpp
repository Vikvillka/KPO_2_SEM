#include <iostream>

typedef unsigned char day;
typedef unsigned char month;
typedef unsigned short year;

struct Date
{
	day dd;
	month mm;
	year yyyy;
};

// >
bool operator>(Date date1, Date date2) {
	if (date1.yyyy > date2.yyyy) return true;
	if (date1.yyyy == date2.yyyy) {
		if (date1.mm > date2.mm) return true;
		if (date1.mm == date2.mm) {
			if (date1.dd > date2.dd) return true;
		}
	}
	else return false;
}

// <
bool operator<(Date date1, Date date2) {
	if (date1.yyyy < date2.yyyy) return true;
	if (date1.yyyy == date2.yyyy) {
		if (date1.mm < date2.mm) return true;
		if (date1.mm == date2.mm) {
			if (date1.dd < date2.dd) return true;
		}
	}
	else return false;
}

// ==
bool operator==(Date date1, Date date2) {
	if (date1.yyyy == date2.yyyy) {
		if (date1.mm == date2.mm)
			if (date1.dd == date2.dd)
				return true;
	}
	else return false;
}

int main() {

	using namespace std;
	setlocale(LC_ALL, "rus");

	Date date1 = { 7,1,1980 };
	Date date2 = { 7,2,1993 };
	Date date3 = { 7,1,1980 };

	if (date1 < date2) cout << "������" << endl;
	else cout << "����" << endl;

	if (date1 > date2) cout << "������" << endl;
	else cout << "����" << endl;

	if (date1 == date2) cout << "������" << endl;
	else cout << "����" << endl;

	if (date1 == date3) cout << "������" << endl;
	else cout << "����" << endl;

	return 0;
}