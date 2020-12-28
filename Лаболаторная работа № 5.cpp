// Лаболаторная работа № 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <stdio.h>
#include <locale.h>

#define ROWS (3)
#define COLUMNS (4)

int main(void) {
    int matrix[ROWS][COLUMNS] = {
            { 3, 4, 7, 4 },
            { 2, 4, 6, 1 },
            { -2, 7, 8, 0 },
    },
    minRows[ROWS][COLUMNS] = { 0 }, maxRows[ROWS][COLUMNS] = { 0 },
    minCols[ROWS][COLUMNS] = { 0 }, maxCols[ROWS][COLUMNS] = { 0 },
    i, j, saddlesFound = 0;
    setlocale(LC_ALL, "Russian");
    printf("Matrix:\n");
    for (i = 0; i < ROWS; ++i) {
        for (j = 0; j < COLUMNS; ++j)
            printf("%3d ", matrix[i][j]);
        printf("\n");
    }
    printf("\n");

    for (i = 0; i < ROWS; ++i) {
        int minRowVal = matrix[i][0], maxRowVal = matrix[i][0];

        for (j = 1; j < COLUMNS; ++j) {
            if (matrix[i][j] < minRowVal)
                minRowVal = matrix[i][j];
            if (matrix[i][j] > maxRowVal)
                maxRowVal = matrix[i][j];
        }

        for (j = 0; j < COLUMNS; ++j) {
            if (matrix[i][j] == minRowVal)
                minRows[i][j] = 1;
            if (matrix[i][j] == maxRowVal)
                maxRows[i][j] = 1;
        }
    }

    for (j = 0; j < COLUMNS; ++j) {
        int minColVal = matrix[0][j], maxColVal = matrix[0][j];

        for (i = 1; i < ROWS; ++i) {
            if (matrix[i][j] < minColVal)
                minColVal = matrix[i][j];
            if (matrix[i][j] > maxColVal)
                maxColVal = matrix[i][j];
        }

        for (i = 0; i < ROWS; ++i) {
            if (matrix[i][j] == minColVal)
                minCols[i][j] = 1;
            if (matrix[i][j] == maxColVal)
                maxCols[i][j] = 1;
        }
    }

    for (i = 0; i < ROWS; ++i) {
        for (j = 0; j < COLUMNS; ++j) {
            if ((minRows[i][j] & maxCols[i][j]) || (maxRows[i][j] & minCols[i][j])) {
                printf("SADDLE[%d][%d] = %d\n", i, j, matrix[i][j]);
                ++saddlesFound;
            }
        }
    }

    printf("\n седловых точек найдено-%d\n", saddlesFound);

    return 0;
}
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
