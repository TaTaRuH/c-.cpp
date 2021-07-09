#include <cstdlib>
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

const char zvezda = '*';

string DeleteStars(string stroka)
{
	string result = "";

	for (int i = 0; i < stroka.size(); i++)
	{
		if (i == 0)
		{
			result += stroka[i];
			continue;
		}
		if (stroka[i - 1] == zvezda && stroka[i] == zvezda)
			continue;
		result += stroka[i];
	}
	return result;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	string str1, str2, help1;
	cout << "Введите первую строку : ";
	cout << endl;
	getline(cin, str1);
	cout << endl;
	cout << "Введите вторую строку : ";
	cout << endl;
	getline(cin, str2);
	cout << endl;
	int n = str2.find("*");
	int i = 0;
	str2 = DeleteStars(str2);
	if (n == -1)
	{
		if (n == -1 and str1.size() == str2.size() and str1 == str2) // если нету звезд и строки равны
		{
			cout << "ОК";
			return 0;

		}
		else
		{
			cout << "KO";
			return 0;
		}
	}
	else
	{
		int elemstr1 = 0;
		int elemstr2 = 0;
		while (elemstr1 <= str1.size()-1)
		{
			if (str1[elemstr1] == str2[elemstr2])
			{
				elemstr1++;
				elemstr2++;
				continue;
			}
			if (str2[elemstr2] == zvezda)
			{
				if (elemstr2 + 1 != str2.size())
				{
					if (str2[elemstr2 + 1] == str1[elemstr1])
					{
						elemstr2++;
						continue;
					}
				}
				else
				{
					cout << "OK";
					break;
				}
				elemstr1++;
			}
			else
			{
				cout << "KO";
				break;
			}
			if (elemstr1 == str1.size()-1)
			{
				cout << "OK";
				break;
			}

		}
	}
	return 0;
}


//{
//	while (i < str2.size() and str2[i] == str2[n]) // если str2 полностью *
//	{
//		i++;

//	}
//	if (i = str2.size())
//	{
//		cout << "OK";
//		return 0;
//	}
//	
//	i = 0;
//	while (i != n)  // проверка символов до *
//	{
//		if (str1[i] == str2[i])
//		{
//			i++;
//		}
//		else
//		{
//			cout << "KO";
//			return 0;
//		}
//	}
//	if (n == str2.size()-1)   // если после * нету символов
//	{
//		cout << "OK";
//		return 0;
//	} 



//	if (n < str2.size()-1)  // если после * есть символы
//	{
//		i = n;
//		while (i < str2.size()and str2[i]==str2[n])  // если все оставшиеся *
//		{
//			i++;
//			if (i = str2.size())
//			{
//				cout << "OK";
//			}

//		}
//		i = 0;
//		
//	}



