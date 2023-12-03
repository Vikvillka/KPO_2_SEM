#include <iostream>

using namespace std;

int defaultparm(int a, int b, int c, int d, int e, int f = 1, int g = 2) {

	return (a + b + c + d + e + f + g) / 7;
}

int main() {

	setlocale(0, "ru");

	int a1 = 1;
	int a2 = 2;
	int a3 = 3;
	int a4 = 4;
	int a5 = 5;
	int a6 = 6;
	int a7 = 7;

	int x1 = defaultparm(a1, a2, a3, a4, a5);
	int x2 = defaultparm(a1, a2, a3, a4, a5, a6, a7);

	cout<< x1 <<endl;
	cout << x2;
	return 0;
}