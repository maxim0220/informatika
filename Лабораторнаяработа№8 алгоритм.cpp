// Лаболаторка 8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _CRT_SECURE_NO_WARNINGS


#include <iostream>
#include <cstdio>
#include <cstring>
#include <tchar.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    typedef struct {
        char familyname[30];
        char name[30];
        char fathername[30];
        int klass;
        int marks[4];
        int number;
    }enrollee;

    FILE* f;
    enrollee man;
    enrollee mas[10];

    if ((f = fopen("enrollee.dat", "wb")) == NULL) exit(1);

    for (int i = 0; i < 5; i++) {
        printf("New enrollee %d\n", i);
        printf("Familyname = ");  scanf("%s", &man.familyname);
        printf("Name = ");        scanf("%s", &man.name);
        printf("Fathername = ");  scanf("%s", &man.fathername);
        printf("klass = ");        scanf("%d", &man.klass);
        printf("number = ");  scanf("%d", &man.number);
        printf("marks (separated by spaces) = ");  scanf("%d %d %d %d", &man.marks[0], &man.marks[1], &man.marks[2], &man.marks[3]);

        fwrite(&man, sizeof(enrollee), 1, f);
        if (ferror(f) != NULL) exit(2);
    }
    fclose(f);

    if ((f = fopen("enrollee.dat", "rb")) == NULL) exit(3);

    int i = 0;
    while (!feof(f) && i < 5)
    {
        fread(&mas[i], sizeof(enrollee), 1, f);
        i++;
    }
    fclose(f);
    for (int i = 0; i < 5; i++) {
        printf("\nNew enrollee %d\n", i);
        printf("Familyname = %s\n", mas[i].familyname);
        printf("Name = %s\n", mas[i].name);
        printf("Fathername = %s\n", mas[i].fathername);
        printf("klass = %d\n", mas[i].klass);
        printf("number = %d\n", mas[i].number);
        printf("marks  = %d %d %d %d\n", mas[i].marks[0], mas[i].marks[1], mas[i].marks[2], mas[i].marks[3]);
    }
    int numdel,b=5,n,k;
    for (i = 0; i < 5; i++)
    {
        if ((mas[i].marks[0] == 2) || (mas[i].marks[1] == 2) || (mas[i].marks[2] == 2) || (mas[i].marks[3] == 2))
        {
            numdel = i;
            b = b--;
            for (n = numdel; n < b; n++)
            {
                mas[n] = mas[n + 1];
            }
            i = i--;
        }
    }
    for (int i = 0; i < b; i++) {
        printf("\nNew enrollee %d\n", i);
        printf("Familyname = %s\n", mas[i].familyname);
        printf("Name = %s\n", mas[i].name);
        printf("Fathername = %s\n", mas[i].fathername);
        printf("klass = %d\n", mas[i].klass);
        printf("number = %d\n", mas[i].number);
        printf("marks  = %d %d %d %d\n", mas[i].marks[0], mas[i].marks[1], mas[i].marks[2], mas[i].marks[3]);
    }
    printf("vvedite kolichestvo novix elementov\n"); scanf("%d",&k);
    if ((f = fopen("enrollee.dat", "ab")) == NULL) exit(4);
    for (int i = b; i < (b + k); i++)
    {
        printf("New enrollee %d\n", i);
        printf("Familyname = ");  scanf("%s", &mas[i].familyname);
        printf("Name = ");        scanf("%s", &mas[i].name);
        printf("Fathername = ");  scanf("%s", &mas[i].fathername);
        printf("klass = ");        scanf("%d", &mas[i].klass);
        printf("number = ");  scanf("%d", &mas[i].number);
        printf("marks (separated by spaces) = ");  scanf("%d %d %d %d", &mas[i].marks[0], &mas[i].marks[1], &mas[i].marks[2], &mas[i].marks[3]);

        fwrite(&man, sizeof(enrollee), 1, f);
        if (ferror(f) != NULL) exit(5);
    }
    fclose(f);
    
    for (int i = 0; i < (b+k); i++)
    {
        printf("\nNew enrollee %d\n", i);
        printf("Familyname = %s\n", mas[i].familyname);
        printf("Name = %s\n", mas[i].name);
        printf("Fathername = %s\n", mas[i].fathername);
        printf("klass = %d\n", mas[i].klass);
        printf("number = %d\n", mas[i].number);
        printf("marks  = %d %d %d %d\n", mas[i].marks[0], mas[i].marks[1], mas[i].marks[2], mas[i].marks[3]);
    }
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
