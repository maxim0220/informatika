﻿// Лаболаторная работа № 8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include<iostream>
using namespace std;
int min(int k, ...)
{
    int* p = &k;
    int miim = *p;
    while (*p)
    {
        if (*p < miim)
        {
            miim = *p;
        }
        p++;
    }
    return miim;
}
int main()
{
    setlocale(LC_ALL, "RUS");
    cout << "Минимальные значения: ";
    cout << "\nОт 5-ти переменных: " << min(9, 76, 3, 2, 8, 0);
    cout << "\nОт 10-ти переменных: " << min(56, 85, 12, 5, 7, 45, 14, 9, 16, 18, 0);
    cout << "\nОт 12-ти переменных: " << min(1, 2, 4, 8, 3, 6, 5, 11, 12, 1, 3, 18, 0) << endl;
    system("pause");
    return 0;
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
