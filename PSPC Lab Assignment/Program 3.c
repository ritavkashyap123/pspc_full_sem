/* Program No: 3
   Aim: Use pointer notation to create two 2D matrix, take input of data and perform matrix multiplication.
   Name: Ritav Kashyap
   ASTU Roll No: 200610003078*/

#include <stdio.h>
#include<stdlib.h>
#define ROW 3
#define COL 3

void matrixInput(int mat[][COL]);
void matrixPrint(int mat[][COL]);
void matrixMultiply(int mat1[][COL], int mat2[][COL], int res[][COL]);

int main()
{

    printf(" Name: Ritav Kashyap\n");
    printf(" College Roll No: 20/237\n");
    printf(" Astu Roll No: 200610003078\n\n");

    int mat1[ROW][COL];
    int mat2[ROW][COL];
    int product[ROW][COL];

    printf("Enter elements in first matrix of size %dx%d\n", ROW, COL);
    matrixInput(mat1);

    printf("Enter elements in second matrix of size %dx%d\n", ROW, COL);
    matrixInput(mat2);

    matrixMultiply(mat1, mat2, product);
    printf("Product of both matrices is : \n");
    matrixPrint(product);

    return 0;
}

void matrixInput(int mat[][COL])
{
    int row, col;

    for (row = 0; row < ROW; row++)
    {
        for (col = 0; col < COL; col++)
        {
            scanf("%d", (*(mat + row) + col));
        }
    }
}

void matrixPrint(int mat[][COL])
{
    int row, col;
    for (row = 0; row < ROW; row++)
    {
        for (col = 0; col < COL; col++)
        {
            printf("%d ", *(*(mat + row) + col));
        }
        printf("\n");
    }
}

void matrixMultiply(int mat1[][COL], int mat2[][COL], int res[][COL])
{
    int row, col, i;
    int sum;


    for (row = 0; row < ROW; row++)
    {
        for (col = 0; col < COL; col++)
        {
            sum = 0;
            for (i = 0; i < COL; i++)
            {
                sum += (*(*(mat1 + row) + i)) * (*(*(mat2 + i) + col));
            }
            *(*(res + row) + col) = sum;
        }
    }
}
