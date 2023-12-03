//электронная_библиотека: формат_файла(txt, pdf, …),
//размер_файла, название_книги, автор, для детей(да / нет),
//количество_страниц, дата_загрузки
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<fstream>
# include <iostream> 
#include <iostream>
#include <fstream>
#include <string>
# define str_len 256
# define Size 100
using namespace std;

struct book
{
	string format_file;
	unsigned size_of_file; 
	string name_of_book;
	string auther;
	unsigned number_str;
	unsigned day : 5;
	unsigned month : 4;
	unsigned year : 11;
	int for_child;
};

struct book information[Size], buff[1];
int current_size = 0;
int choice;
string str;
bool check;

enum for_child
{
	yes = 1, no
};
int l, z, x;

bool operator<(book book1, book book2) {
	if (book1.number_str < book2.number_str) return true;
	else return false;
}
bool operator>(book book1, book book2) {
	if (book1.number_str > book2.number_str) return true;
	else return false;
}
int operator+(int sum, book book) {
	return sum += book.size_of_file;
}

void enter_new()
{
	cout << "Bвод информации:" << endl;
	if (current_size < Size)
	{
		
		cout << endl << "Формат файла: " << endl;
		cin >> information[current_size].format_file;
		cout << "Размер файла(Мб): " << endl;
		cin >> information[current_size].size_of_file;
		cout << "Название книги: " << endl;
		cin.ignore();
		getline(cin, information[current_size].name_of_book);
		cout << "Автор: " << endl;
		cin.ignore();
		getline(cin, information[current_size].auther);
		while (true) {
			cout << "1 - для детей\n2 - не для детей\n";
			cin >> str;

			if (str[0] < '1' || str[0] > '2' || size(str) > 1) {

				cout << "Некорректное значение" << endl;

				continue;
			}
			break;
		}
		information[current_size].for_child = stoi(str);
		cout << "Дата загрузки:\n";
		
		int months[]{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

		while (true) {
			check = true;
			cout << "Месяц ";
			cin >> str;

			for (int j = 0; j < size(str); j++) {
				if (str[j] < '0' || str[j] > '9') {
					check = false;
				}
			}
			if (!check || stoi(str) > 12) {

				cout << "Некорректное значение" << endl;

				continue;
			}
			break;
		}
		information[current_size].month = stoi(str);

		while (true) {
			check = true;
			cout << "Год: ";
			cin >> str;

			for (int j = 0; j < size(str); j++) {
				if (str[j] < '0' || str[j] > '9') {
					check = false;
				}
			}
			if (!check || stoi(str) > 2023) {

				cout << "Некорректное значение" << endl;

				continue;
			}
			break;
		}
		information[current_size].year = stoi(str);
		int year;
		while (true) {
			check = true;
			cout << "День: ";
			cin >> str;

			for (int j = 0; j < size(str); j++) {
				if (str[j] < '0' || str[j] > '9') {
					check = false;
				}
			}
			year = 2000 + information[current_size].year;
			if ((year % 4 == 0) || ((year % 100 == 0) && (year % 400 == 0))) {
				if (information[current_size].month == 2 && stoi(str) > 29) {
					check = false;
				}
				if (information[current_size].month != 2 && stoi(str) > months[information[current_size].month - 1]) {
					check = false;
				}
			}
			else {
				if (stoi(str) > months[information[current_size].month - 1]) {
					check = false;
				}
			}
			if (!check) {

				cout << "Некорректное значение" << endl;

				continue;
			}

			break;
		}
		information[current_size].day = stoi(str);
		 
		cout << "Kоличество страниц: " << endl;
		cin >> information[current_size].number_str;
		current_size++;
	}
	else {
		cout << "введено максимальное кол-во строк";
		current_size++;
	}
}

void output() {
	int n;

	cout << "\nСколько книг вывести?\n";
	cin >> n;
	for (int j = 0; j < n; j++) {
		cout << "Формат файла - " << information[j].format_file << endl;
		cout << "Размер файла - " << information[j].size_of_file << "Мб" << endl;
		cout << "Название книги - " << information[j].name_of_book << endl;
		cout << "Автор - " << information[j].auther << endl;
		cout << "Число страниц - " << information[j].number_str << endl;
		cout << "Дата издания -  ";
		if (information[j].day < 10)
			cout << "0" << information[j].day << ".";
		else
			cout << information[j].day << ".";
		if (information[j].month < 10)
			cout << "0" << information[j].month << ".";
		else
			cout << information[j].month << ".";
		if (information[j].year < 10)
			cout << "0" << information[j].year << endl;
		else
			cout << information[j].year << endl;
		switch (information[j].for_child) {
		case yes: cout << "Книга для детей" << " "; break;
		case no: cout << "Книга не для детей\n" << " "; break;
		}

	}
	system("pause");
}
void sum() {
	int i, suma = 0;
	for (i = 0; i < current_size; i++) {
		suma = suma + information[i].size_of_file;
	}
	cout << "Общий размер " << suma << endl;
}
void stronic() {
	int i;
	buff[0] = information[0];

	for (i = 1; i < current_size; i++) {
		if (information[i] < buff[0])
			 buff[0] = information[i];
	}
	
		cout << "Формат файла - " << buff[0].format_file << endl;
		cout << "Размер файла - " << buff[0].size_of_file << "Мб" << endl;
		cout << "Название книги - " << buff[0].name_of_book << endl;
		cout << "Автор - " << buff[0].auther << endl;
		cout << "Число страниц - " << buff[0].number_str << endl;
		cout << "Дата издания -  ";
		if (buff[0].day < 10)
			cout << "0" << buff[0].day << ".";
		else
			cout << buff[0].day << ".";
		if (buff[0].month < 10)
			cout << "0" << buff[0].month << ".";
		else
			cout << buff[0].month << ".";
		if (buff[0].year < 10)
			cout << "0" << buff[0].year << endl;
		else
			cout << buff[0].year << endl;
		switch (buff[0].for_child) {
		case yes: cout << "Книга для детей" << " "; break;
		case no: cout << "Книга не для детей" << " "; break;
		}	
}
void stronicc() {
	int i;
	buff[0] = information[0];

	for (i = 1; i < current_size; i++) {
		if (information[i] > buff[0])
			buff[0] = information[i];
	}

	cout << "Формат файла - " << buff[0].format_file << endl;
	cout << "Размер файла - " << buff[0].size_of_file << "Мб" << endl;
	cout << "Название книги - " << buff[0].name_of_book << endl;
	cout << "Автор - " << buff[0].auther << endl;
	cout << "Число страниц - " << buff[0].number_str << endl;
	cout << "Дата издания -  ";
	if (buff[0].day < 10)
		cout << "0" << buff[0].day << ".";
	else
		cout << buff[0].day << ".";
	if (buff[0].month < 10)
		cout << "0" << buff[0].month << ".";
	else
		cout << buff[0].month << ".";
	if (buff[0].year < 10)
		cout << "0" << buff[0].year << endl;
	else
		cout << buff[0].year << endl;
	switch (buff[0].for_child) {
	case yes: cout << "Книга для детей" << " "; break;
	case no: cout << "Книга не для детей" << " "; break;
	}
}

int main()
{
	do
	{
		setlocale(LC_CTYPE, "Russian");
		cout << "введите:" << endl;
		cout << "1 - для ввода записи" << endl;
		cout << "2 - для вывода записи" << endl;
		cout << "3 - вывести книгу с найменьшим числом страниц " << endl;
		cout << "4 - вывести книгу с найбольшим числом страниц " << endl;
		cout << "5 - вывести общий размер файлов  " << endl;
		cin >> choice;
		switch (choice)
		{
		case 1: enter_new(); break;
		case 2: output(); break;
		case 3: stronic(); break;
		case 4: stronicc(); break;
		case 5: sum(); break;
		}
	} while (choice != 5);
}
