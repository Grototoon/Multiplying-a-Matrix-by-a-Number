#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int colum1, row1;

    printf("Enter colum of Matrix:"); scanf("%d", &colum1);
    printf("Enter row of Matrix:"); scanf("%d", &row1);

    float** Array1 = malloc(sizeof(float) * colum1);         //выделяем память на массив из указателей
    for (int i = 0; i < colum1; i++) {                       //
        Array1[i] = malloc(sizeof(float) * row1);            //выделяем память под каждый указатель из массива
    }
    for (int i = 0; i < colum1; i++) {                       //заполняем матрицу(ввод данных)
        for (int j = 0; j < row1; j++){
            scanf("%3f", &Array1[i][j]);
        }
    }
    printf("Your Matrix is:\n");                             //вывод данных 
    for (int i = 0; i < colum1; i++) {
        for (int j = 0; j < row1; j++) {
            printf("%3f", Array1[i][j]); printf("\t");
        }
        printf("\n");
    }
    float number;

    printf("Enter a multiplier: "); scanf("%f", &number);
    printf("The result Matrix is: \n");

    for (int i = 0; i < colum1; i++) {                       //умножаем каждый элемент матрицы на число
        for (int j = 0; j < row1; j++) {
            Array1[i][j] = Array1[i][j] * number;
            printf("%3f", Array1[i][j]); printf("\t");
        }
        printf("\n");
    }

    return 0;
}

