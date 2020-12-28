﻿// Лаболаторная работа№ 6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <cctype>

std::string& part_ch(std::string& s) {
    std::string d;
    d.resize(s.length());
    std::string::iterator j = d.begin();

    std::string::iterator i, e = s.end();
    for (i = s.begin(); i != e; ++i) {
        if (std::isalpha(*i))
            *j++ = *i;
    }

    for (i = s.begin(); i != e; ++i) {
        if (std::isdigit(*i))
            *j++ = *i;
    }

    for (i = s.begin(); i != e; ++i) {
        if (!std::isalnum(*i))
            *j++ = *i;
    }
    s = d;
    return s;
}

int main(void) {
    std::string s;
        std::cout << "Enter: ";
        std::getline(std::cin, s);
    std::cout << part_ch(s);
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
