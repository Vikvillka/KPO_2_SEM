//�����������_����������: ������_�����(txt, pdf, �),
//������_�����, ��������_�����, �����, ��� �����(�� / ���),
//����������_�������, ����_��������
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
	cout << "B��� ����������:" << endl;
	if (current_size < Size)
	{
		
		cout << endl << "������ �����: " << endl;
		cin >> information[current_size].format_file;
		cout << "������ �����(��): " << endl;
		cin >> information[current_size].size_of_file;
		cout << "�������� �����: " << endl;
		cin.ignore();
		getline(cin, information[current_size].name_of_book);
		cout << "�����: " << endl;
		cin.ignore();
		getline(cin, information[current_size].auther);
		while (true) {
			cout << "1 - ��� �����\n2 - �� ��� �����\n";
			cin >> str;

			if (str[0] < '1' || str[0] > '2' || size(str) > 1) {

				cout << "������������ ��������" << endl;

				continue;
			}
			break;
		}
		information[current_size].for_child = stoi(str);
		cout << "���� ��������:\n";
		
		int months[]{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

		while (true) {
			check = true;
			cout << "����� ";
			cin >> str;

			for (int j = 0; j < size(str); j++) {
				if (str[j] < '0' || str[j] > '9') {
					check = false;
				}
			}
			if (!check || stoi(str) > 12) {

				cout << "������������ ��������" << endl;

				continue;
			}
			break;
		}
		information[current_size].month = stoi(str);

		while (true) {
			check = true;
			cout << "���: ";
			cin >> str;

			for (int j = 0; j < size(str); j++) {
				if (str[j] < '0' || str[j] > '9') {
					check = false;
				}
			}
			if (!check || stoi(str) > 2023) {

				cout << "������������ ��������" << endl;

				continue;
			}
			break;
		}
		information[current_size].year = stoi(str);
		int year;
		while (true) {
			check = true;
			cout << "����: ";
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

				cout << "������������ ��������" << endl;

				continue;
			}

			break;
		}
		information[current_size].day = stoi(str);
		 
		cout << "K��������� �������: " << endl;
		cin >> information[current_size].number_str;
		current_size++;
	}
	else {
		cout << "������� ������������ ���-�� �����";
		current_size++;
	}
}

void output() {
	int n;

	cout << "\n������� ���� �������?\n";
	cin >> n;
	for (int j = 0; j < n; j++) {
		cout << "������ ����� - " << information[j].format_file << endl;
		cout << "������ ����� - " << information[j].size_of_file << "��" << endl;
		cout << "�������� ����� - " << information[j].name_of_book << endl;
		cout << "����� - " << information[j].auther << endl;
		cout << "����� ������� - " << information[j].number_str << endl;
		cout << "���� ������� -  ";
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
		case yes: cout << "����� ��� �����" << " "; break;
		case no: cout << "����� �� ��� �����\n" << " "; break;
		}

	}
	system("pause");
}
void sum() {
	int i, suma = 0;
	for (i = 0; i < current_size; i++) {
		suma = suma + information[i].size_of_file;
	}
	cout << "����� ������ " << suma << endl;
}
void stronic() {
	int i;
	buff[0] = information[0];

	for (i = 1; i < current_size; i++) {
		if (information[i] < buff[0])
			 buff[0] = information[i];
	}
	
		cout << "������ ����� - " << buff[0].format_file << endl;
		cout << "������ ����� - " << buff[0].size_of_file << "��" << endl;
		cout << "�������� ����� - " << buff[0].name_of_book << endl;
		cout << "����� - " << buff[0].auther << endl;
		cout << "����� ������� - " << buff[0].number_str << endl;
		cout << "���� ������� -  ";
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
		case yes: cout << "����� ��� �����" << " "; break;
		case no: cout << "����� �� ��� �����" << " "; break;
		}	
}
void stronicc() {
	int i;
	buff[0] = information[0];

	for (i = 1; i < current_size; i++) {
		if (information[i] > buff[0])
			buff[0] = information[i];
	}

	cout << "������ ����� - " << buff[0].format_file << endl;
	cout << "������ ����� - " << buff[0].size_of_file << "��" << endl;
	cout << "�������� ����� - " << buff[0].name_of_book << endl;
	cout << "����� - " << buff[0].auther << endl;
	cout << "����� ������� - " << buff[0].number_str << endl;
	cout << "���� ������� -  ";
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
	case yes: cout << "����� ��� �����" << " "; break;
	case no: cout << "����� �� ��� �����" << " "; break;
	}
}

int main()
{
	do
	{
		setlocale(LC_CTYPE, "Russian");
		cout << "�������:" << endl;
		cout << "1 - ��� ����� ������" << endl;
		cout << "2 - ��� ������ ������" << endl;
		cout << "3 - ������� ����� � ���������� ������ ������� " << endl;
		cout << "4 - ������� ����� � ���������� ������ ������� " << endl;
		cout << "5 - ������� ����� ������ ������  " << endl;
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
