#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
#include "Dictionary.h"
#include "stdafx.h"


#if (defined TEST_CREATE_01 && defined TEST_CREATE_02) || (defined TEST_CREATE_01 && defined TEST_ADDENTRY_03) || (defined TEST_CREATE_01 && defined TEST_ADDENTRY_04) || (defined TEST_CREATE_01 && defined TEST_GETENTRY_05) || (defined TEST_CREATE_01 && defined TEST_DELENTRY_06) || \
(defined TEST_CREATE_01 && defined TEST_UPDENTRY_07) || (defined TEST_CREATE_01 && defined TEST_UPDENTRY_08) || (defined TEST_CREATE_01 && defined TEST_DICTIONARY) || (defined TEST_CREATE_02 && defined TEST_ADDENTRY_03) || (defined TEST_CREATE_02 && defined TEST_ADDENTRY_04) || \
(defined TEST_CREATE_02 && defined TEST_GETENTRY_05) || (defined TEST_CREATE_02 && defined TEST_DELENTRY_06) || (defined TEST_CREATE_02 && defined TEST_UPDENTRY_07) || (defined TEST_CREATE_02 && defined TEST_UPDENTRY_08) || (defined TEST_CREATE_02 && defined TEST_DICTIONARY) || \
(defined TEST_ADDENTRY_03 && defined TEST_ADDENTRY_04) || (defined TEST_ADDENTRY_03 && defined TEST_GETENTRY_05) || (defined TEST_ADDENTRY_03 && defined TEST_DELENTRY_06) || (defined TEST_ADDENTRY_03 && defined TEST_UPDENTRY_07) || (defined TEST_ADDENTRY_03 && defined TEST_UPDENTRY_08) || \
(defined TEST_ADDENTRY_03 && defined TEST_DICTIONARY) || (defined TEST_ADDENTRY_04 && defined TEST_GETENTRY_05) || (defined TEST_ADDENTRY_04 && defined TEST_DELENTRY_06) || (defined TEST_ADDENTRY_04 && defined TEST_UPDENTRY_07) || (defined TEST_ADDENTRY_04 && defined TEST_UPDENTRY_08) || \
(defined TEST_ADDENTRY_04 && defined TEST_DICTIONARY) || (defined TEST_GETENTRY_05 && defined TEST_DELENTRY_06) || (defined TEST_GETENTRY_05 && defined TEST_UPDENTRY_07) || (defined TEST_GETENTRY_05 && defined TEST_UPDENTRY_08) || (defined TEST_GETENTRY_05 && defined TEST_DICTIONARY) || \
(defined TEST_DELENTRY_06 && defined TEST_UPDENTRY_07) || (defined TEST_DELENTRY_06 && defined TEST_UPDENTRY_08) || (defined TEST_DELENTRY_06 && defined TEST_DICTIONARY) || (defined TEST_UPDENTRY_07 && defined TEST_UPDENTRY_08) || (defined TEST_UPDENTRY_07 && defined TEST_DICTIONARY) || (defined TEST_UPDENTRY_08 && defined TEST_DICTIONARY)
#error Определено слишком много макроссов
#endif

using namespace std;
using namespace Dictionary;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	try {
#ifdef TEST_CREATE_01
		Instance d1 = Create("Оооооооооооооооооооооооооооооооченьбольшоеимя", 7);
#elif defined TEST_CREATE_02
		Instance d1 = Create("Преподаватели", 1000);
#elif !defined TEST_DICTIONARY
		Instance d1 = Create("Преподаватели", 6);
#elif defined TEST_DICTIONARY
		Instance d1 = Create("Преподаватели", 7);
#endif

		Entry e1 = { 1, "Наркевич" }, e2 = { 2, "Белодед" }, e3 = { 3, "Барковский" }, e4 = { 4, "Иосько" }, e5 = { 5, "Мисевич" }, e6 = { 6, "Мущук" }, e7 = { 7, "Калашникова" }, e8 = { 3, "Гринюк" };
		AddEntry(d1, e1);
		AddEntry(d1, e2);
		AddEntry(d1, e3);
		AddEntry(d1, e4);
		AddEntry(d1, e5);
		AddEntry(d1, e6);
#ifdef TEST_DICTIONARY
		AddEntry(d1, e7);
#elif defined TEST_ADDENTRY_03
		Entry e9 = { 12, "Грицкевич" }, e10 = { 21, "Бай" };
		AddEntry(d1, e9);
		AddEntry(d1, e10);
#elif defined TEST_ADDENTRY_04
		AddEntry(d1, e8);
#endif

#ifdef TEST_DELENTRY_06
		DelEntry(d1, 25);
#elif defined TEST_DICTIONARY
		DelEntry(d1, 2);
#endif

#ifdef TEST_GETENTRY_05
		GetEntry(d1, 22);
#elif defined TEST_DICTIONARY
		DelEntry(d1, 4);
#endif

#ifdef TEST_UPDENTRY_07
		Entry newentry = { 16, "Воронова" };
		UpdEntry(d1, 22, newentry);
#elif defined TEST_UPDENTRY_08
		Entry newentry = { 5, "Воронова" };
		Dictionary::UpdEntry(d1, 1, newentry);
#elif defined TEST_DICTIONARY
		Entry newentry = { 16, "Воронова" };
#endif	
#if defined TEST_DICTIONARY
		Dictionary::UpdEntry(d1, 3, newentry);
#endif

		Print(d1);
		Instance d2 = Create("Ученики", 7);
		Entry s1 = { 9, "Казанцева" }, s2 = { 8, "Бычковская" }, s3 = { 7, "Грицкевич" }, s4 = { 6, "Костюкович" }, s5 = { 5, "Вертинский" }, s6 = { 4, "Лионова" }, s7 = { 3, "Черная" };
		AddEntry(d2, s1);
		AddEntry(d2, s2);
		AddEntry(d2, s3);
		AddEntry(d2, s4);
		AddEntry(d2, s5);
		AddEntry(d2, s6);
		AddEntry(d2, s7);
		Entry newentry2 = { 16, "Лаптик" };
		UpdEntry(d2, 8, newentry2);
		Print(d2);
		Delete(d1);
		Delete(d2);
	}
	catch (const char* e) {
		cout << e << endl;
	};
	system("pause");
	return 0;
}