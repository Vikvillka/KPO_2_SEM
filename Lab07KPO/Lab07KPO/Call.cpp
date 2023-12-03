#include <iostream>
#include <locale>
#include "Call.h"

using namespace std;
using namespace Call;

int main() {

	setlocale(LC_ALL, "ru");

	int a = 1,
		b = 2,
		c = 3,
		d = 4;

	int r1 = cdevl(a, b, c);
	int r2 = cstd(a, b, c);
	int r3 = cfst(a, b, c, d);

	cout << "(_cdecl:) сумма = " << cdevl(a, b, c) << endl;
	cout << "(_stdcall) произведение = " << cstd(a, b, c) << endl;
	cout << "(_fastcall) сумма = " << cfst(a, b, c, d) << endl;

	return 0;
}