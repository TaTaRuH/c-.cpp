#include <math.h>
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

string perevod(unsigned int a, string b)
{
	int sis = stoi(b);
	char buffer[100];
	_itoa_s(a, buffer, sis);
	string result = string(buffer);
	return result;
}

int main()
{
	int value{ 0 };
	int sis4{ 0 };
	setlocale(LC_ALL, "Russian");
	cout << "Введите число: ";
	cin >> value;
	if (cin.fail())
	{
		cout << " usage";
		return 0;
	}
	if (value)
		cout << endl << "Введите нужную систему счисления: ";
	cin >> sis4;
	if (cin.fail())
	{
		cout << " usage";
		return 0;
	}
	auto str = to_string(sis4);
	string res=perevod(value, str);
	cout << "Введённое число в " << sis4 << " системе счисления: " << res << endl;
	system("pause");
	return 0;
}

//int value;
//char string[100] = "";
//setlocale(LC_ALL, "Russian");
//cout << "Введите число: ";
//cin >> value;
//_itoa_s(value, string, 10);
//cout << "Введённое число при radix = 10: " << string << endl;
//cout << "Элементы строки: " << endl;
//for (int i = 0; i < 100; i++)
//    cout << string[i];
//cout << "." << endl;
//_itoa_s(value, string, 16);
//cout << "Введённое число при radix = 16: " << string << endl;
//system("pause");
//return 0;
