#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void PrintTXT(char* fname) // виведення файлу на екран
{
	ifstream fin(fname); // відкрили файл для зчитування
	string s; // прочитаний рядок
	while (getline(fin, s)) // поки можна прочитати рядок
	{
		cout << s << endl; // виводимо його на екран
	}
	cout << endl;
}
int ProcessTXT1(char* fname) // обчислення загальної кількості символів + - =
{
	ifstream fin(fname); // відкрили файл для зчитування
	string s; // прочитаний рядок
	int k = 0; // загальна кількість символів + - =
	while (getline(fin, s)) // поки можна прочитати рядок
	{ // скануємо його і обчислюємо кількість + - =
		for (unsigned i = 0; i < s.length(); i++)
			if (s[i] == '+' || s[i] == '-' || s[i] == '=')
				k++;
	}
	return k;
}

int main()
{
	// text files
	char fname[100]; // ім'я першого файлу
	cout << "enter file name 1: "; cin >> fname;

	PrintTXT(fname); // вивели вміст першого файлу на екран
	cout << "k(+-=) = " << ProcessTXT1(fname) << endl;

	return 0;
}