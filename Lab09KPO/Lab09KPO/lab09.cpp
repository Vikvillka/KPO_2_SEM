#include <iostream>
#include <locale>
#include "Varparm.h"

using namespace Varparm;
using namespace std;


int main() {

	//ivarparm
	ivarparm(1, INT_MAX);
	ivarparm(1, 2, INT_MAX);
	ivarparm(1, 2, 3, INT_MAX);
	ivarparm(1, 2, 3, 4, 5, 6, 7, INT_MAX);

	cout << "\n";

	svarparm(1, SHRT_MAX);
	svarparm(1, 2, SHRT_MAX);
	svarparm(1, 2, 3, SHRT_MAX);
	svarparm(1, 2, 3, 4, 5, 6, 7, SHRT_MAX);

	cout << "\n";

	fvarparm(1.0, FLT_MAX);
	fvarparm(1.0, 2.0, FLT_MAX);
	fvarparm(1.0, 2.0, 3.0, FLT_MAX);
	fvarparm(1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, FLT_MAX);

	cout << "\n";

	dvarparm(1.0, DBL_MAX);
	dvarparm(1.0, 2.0, DBL_MAX);
	dvarparm(1.0, 2.0, 3.0, DBL_MAX);
	dvarparm(1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, DBL_MAX);

	return 0;
}