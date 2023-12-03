#include <iostream>
#include <Windows.h>

using namespace std;
int sum(int x, int y) 
{ 
	return x + y; 
}

int(*f) (int, int);

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	//задание 4 // bool(1 байт)
	bool a4_1 = false; //00
	bool a4_2 = true;  //01
	
	//задание 5,6 // char(1 байт)
	char a5 = 'y'; //79
	char a6 = 'ы'; //fb
	
	//задание 7,8 // wchar_t(2 байта)
	wchar_t a7 = L'B';//42 00
	wchar_t a8 = L'Б';  //11 04
	
	//задание 9 // 
	short a9_1 = 11; //DEC(11) -> HEX(B)
	short a9_2 = -11; //DEC(-11) ->BIN(10001011) ->BIN(11110101) // HEX(F5)
	
	//задание 10
	short a10_1 = 0x8000; //-32768 HEX(8000)
	short a10_2 = 0x7fff;  //32767 HEX(7FFF)
	
	//задание 11
	unsigned short a11_1 = 0x0000;  //0  HEX(0)
	unsigned short a11_2 = 0xffff;  //65535 HEX(ffff)
	
	//задание 12
	int a12_1 = 12;  //0c 00 00 00 DEC(12) -> HEX(C)
	int a12_2 = -12; // f4 ff ff ff //DEC(-12) ->BIN(10001100) ->BIN(11110100) // HEX(F4)
	
	//задание 13
	int a13_1 = 0x80000000;  //-2147483648
	int a13_2 = 0x7FFFFFFF;  // 2147483647
	
	//задание 14
	unsigned int a14_1 = 0x0;//00 00 00 00
	unsigned int a14_2 = 0xffffffff; //ff ff ff ff
	
	//задание 15 // long(unsigned long) (4 байт)
	long a15_1 = 13; // 0d 00 00 00 DEC(13) -> HEX(D)
	long a15_2 = -13;// f3 ff ff ff DEC(-12) ->BIN(10001101) ->BIN(11110101) // HEX(F3)
	
	//задание 16
	long a16_1 = 0x80000000; // HEX(80000000)
	long a16_2 = 0x7FFFFFFF; // HEX(7fffffff)
	
	//задание 17
	unsigned long a17_1 = 0x0;//00 00 00 00
	unsigned long a17_2 = 0xFFFFFFFF; // ff ff ff ff
	
	//задание 18 // float(4 байта)
	float a18_1 = -3.0;//  DEC(-3.0) -> BIN(10000011) -> BIN(11111101) -> HEX(fffD.000)
	float a18_2 = 3.0;  // DEC(3.0) -> HEX(3.000)
	
	//задание 19
	float a19_1 = a18_1 / 0; //00 00 80 ff
	float a19_2 = a18_2 / 0; //00 00 80 7f
	float a19_3 = sqrt(-2.0); //00 00 c0 ff
	cout << a19_1 << ", " << a19_2 << ", " << a19_3 << " " << endl;
	
	//задание 20
	//Переменные
	char a20_1 = 'А';
	wchar_t a20_2 = L'А';
	short a20_3 = 18;
	int a20_4 = 180;
	float a20_5 = 18.5f;
	double a20_6 = 18.5e-5;

	//Указатели
	char* p20_1 = &a20_1;   //0x003ef77b //5b f6 f3 00
	wchar_t* p20_2 = &a20_2;//0x003ef76c //4c f6 f3 00
	short* p20_3 = &a20_3;  //0x003ef760 //40 f6 f3 00
	int* p20_4 = &a20_4;    //0x003ef754 //34 f6 f3 00
	float* p20_5 = &a20_5;  //0x003ef748 //28 f6 f3 00
	double* p20_6 = &a20_6; //0x003ef738 //18 f6 f3 00
	
	//Увеличение на 3
	char* p20_1_1 = p20_1 + 3;    //0x003ef77e //5e f6 f3 00
	wchar_t* p20_2_2 = p20_2 + 3; //0x003ef772
	short* p20_3_3 = p20_3 + 3;   //0x003ef766
	int* p20_4_4 = p20_4 + 3;     //0x003ef760
	float* p20_5_5 = p20_5 + 3;   //0x003ef754
	double* p20_6_6 = p20_6 + 3;  //0x003ef750 //30 f6 f3 00
	
	//задание 21
	f = sum; 
	
	int a21 = f(2, 2); //04 00 00 00
	cout << "Задание 21: " << a21;
	return 0;
}