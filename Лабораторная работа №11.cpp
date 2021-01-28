// Лабораторная работа №11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <stdio.h>
#pragma warning(disable:4996)

using namespace std;
struct point
{
	char* key;
	point* next;
	point* pred;
};
point* make_point()
{
	setlocale(LC_ALL, "Russian");
	point* p = new(point);
	p->next = 0;
	p->pred = 0;
	char s[50];
	cout << "\n введите элемент ";
	cin >> s;
	p->key = new char[strlen(s) + 1];
	strcpy(p->key, s);
	return p;
}
point* make_list(int n)
{
	point* p, * beg;
	beg = make_point();
	for (int i = 1; i < n; i++)
	{
		p = make_point();
		p->next = beg;
		beg->pred = p;
		beg = p;
	}
	return beg;
}
void vivod()
{
	point* p = new(point);
	for (p = head; p; p = p->next)
	{
		cout << p->key << " ";
	}
}
int main()
{
	int n=1;
	setlocale(LC_ALL, "Russian");
	for (int i = 1; i < n; i++)
	{
		make_point();
	}
	vivod();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
