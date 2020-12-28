﻿// Лаболаторная работа № 7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Лабораторная работа №7
// 7.1. Перегрузка функций
// Написать перегруженные функции и основную программу, которая их вызывает
// а) Для сложения вещественных чисел.
// б) Для сложения комплексных чисел.

#include <iostream> // Библиотека стандартного ввода вывода.

using namespace std; //использования пространство имен std

//Описываем комплексное число.
//Комплексное число состоит из мнимой и действительной частей
struct Complex
{
    float Real; //Действительная часть комплексного числа
    float Mnim; //Мнимая часть комплексного числа
};
// Функция сложения вещественных чисел
float Summ(float a, float b)
{
    float Summa = a + b;
    cout << "\n\nСумма вещественных чисел равна = " << Summa << endl;
    return Summa;
};

// Функция сложения комплексных чисел
Complex Summ(Complex a, Complex b)
{
    Complex Summa;
    Summa.Real = a.Real + b.Real;
    Summa.Mnim = a.Mnim + b.Mnim;
    cout << "\n\nСумма комплексных чисел равна = " << Summa.Real << "+i" << Summa.Mnim << endl;
    return Summa;
}

int main()
{
    //Русский язык в консоли (вывод)
    setlocale(LC_ALL, "RUS");

    //Ввод комплексного числа 1
    Complex CompChislo1;
    cout << "\nВведите действительную часть первого комплексного числа ";
    cin >> CompChislo1.Real;
    cout << "\nВведите мнимую часть первого комплексного числа ";
    cin >> CompChislo1.Mnim;

    //Ввод комплексного числа 2
    Complex CompChislo2;
    cout << "\nВведите действительную часть второго комплексного числа ";
    cin >> CompChislo2.Real;
    cout << "\nВведите мнимую часть второго комплексного числа ";
    cin >> CompChislo2.Mnim;

    //Ввод вещественных чисел

    float fChislo1;
    float fChislo2;

    cout << "\nВведите первое вещественное число ";
    cin >> fChislo1;

    cout << "\nВведите второе вещественное число ";
    cin >> fChislo2;

    //Выполнение перегрузки функций.

    Summ(fChislo1, fChislo2);
    Summ(CompChislo1, CompChislo2);
    system("Pause");
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
