//#include <iostream>
//#define X 13 // ���������� ��������(n = 4)
//#define Y 14
//#define Z 15
//#define S 5.0
//
//int sum(int x, int y) { // �-��� �����
//	return(x + y);
//}
//
//int(*func) (int, int); // ��������� �� �������
//
//int main()
//{
//	// bool(1 ����)
//	bool b1 = false; // ������������� ���������� b1 �� ��������� false
//	bool b2 = true; // b2 �� ��������� true
//
//	// char(1 ����)
//	char c1 = 'o'; // ������������� ���������� �1 �� ��������� 'o'(����������)
//	char c2 = '�'; // �2 �� ��������� 'o'(�������)
//
//	// wchar_t(2 �����)
//	wchar_t wc1 = L'v'; // ������������� ���������� wc1 �� ��������� L"v"
//	wchar_t wc2 = L'�'; // cw2 �� ��������� L"�"
//
//	// short(unsigned short) (2 �����)
//	short ishort1 = X; // DEC(13) -> HEX(D)
//	short ishort2 = -X; // DEC(-13) -> BIN(10001101) -> BIN(111111110011) -> HEX(F3)
//	short shortmax = 0x00007FFF; // HEX(7FFF)
//	short shortmin = 0xffff8000; // HEX(8000)
//	unsigned short unshortmin = 0x0; // HEX(0)
//	unsigned short unshortmax = 0x0000ffff; // HEX(ffff)
//
//	// int(unsigned int) (4 �����)
//	int iint1 = Y; // DEC(14) -> HEX(E)
//	int iint2 = -Y; // DEC(-14) -> BIN(10001110) -> BIN(11110010) -> HEX(fff2)
//	int intmax = 0x7fffffff; // HEX(7fffffff)
//	int intmin = 0x80000000; // HEX(80000000)
//	unsigned int unintmin = 0x0; // HEX(0)
//	unsigned int unintmax = 0xffffffff; // HEX(ffffffff)
//
//	// long(unsigned long) (8 ����)
//	long ilong1 = Z; // DEC(15) -> HEX(F)
//	long ilong2 = -Z; // DEC(-15) -> BIN(10001111) -> BIN(11110001) -> HEX(fff1)
//	long longmin = 0x80000000; // HEX(80000000)
//	long longmax = 0x7fffffff; // HEX(7fffffff)
//	unsigned long ulongmin = 0x0; // HEX(0)
//	unsigned long ulongmax = 0xFFFFFFFF; // HEX(ffffffff)
//
//	// float(4 �����)
//	float f1 = S; // DEC(5.0) -> HEX(5.000)
//	float f2 = -S; // DEC(-5.0) -> BIN(10000101) -> BIN(11111011) -> HEX(fffC.000)
//
//	float polInf = f1 / 0; // #INF
//	float otrInf = f2 / 0; // -#INF
//	float ind = sqrt(f2); // -#IND
//
//	char a = '�'; // ���������� ���������� ����� char, wchar_t, short, int, float, double
//	wchar_t b = L'�';
//	short c = 19;
//	int d = 191;
//	float f = 1.9f;
//	double g = 1.9e-5;
//
//	// ��������� �� ���������������������� ����������
//	char* pa = &a; // a -> c0
//	wchar_t* pb = &b; // b -> 10 04 -> 0410
//	short* pc = &c; // c -> 13 00 -> 0013
//	int* pd = &d; // d -> bf 00 00 00 -> 00bf 0000 -> 000000bf
//	float* pf = &f; // f -> 33 33 f3 3f -> 3333 3ff3 -> 3ff33333
//	double* pg = &g; // g -> 18 0a d8 0e 46 ec f3 3e -> 0a18 0ed8 ec46 3ef3 -> 0ed80a18 3ef3ec46 -> 3ef3ec460ed80a18
//
//	char* ax = pa + 3; // ax -> 16 fc 93 00
//	wchar_t* bx = pb + 3; // bx -> 0a fc 93 00
//	short* cx = pc + 3; // cx -> fe fb 93 00
//	int* dx = pd + 3; //dx -> f8 fb 93 00
//	float* fx = pf + 3; // fx -> ec fb 93 00
//	double* gx = pg + 3; // gx -> e8 fb 93 00
//
//	func = sum;
//	int a21 = func(5, 3);
//}