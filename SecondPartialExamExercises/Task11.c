//
// Created by Endrit on 2/7/2022.
//Write a program where a matrix A read from SI (maximum value of dimensions of the matrix is 100) is transformed to a new matrix B. Each element of the new matrix B is sum of positive neighbors of the corresponding element of the matrix A. Print the new matrix B on the standard output.
//Input A:
//14−312−1−423−21010
//Output B:
//61524612112131012
#include<stdio.h>

int main() {

    int matrix[100][100];
    int bmatrix[100][100] = {0};
    int i, j, m, n;

    scanf("%d %d", &m, &n);

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {

            int sum = 0;

            if (matrix[i + 1][j] > 0)
                sum += matrix[i + 1][j];

            if (matrix[i - 1][j] > 0)
                sum += matrix[i - 1][j];

            if (matrix[i][j + 1] > 0)
                sum += matrix[i][j + 1];

            if (matrix[i][j - 1] > 0)
                sum += matrix[i][j - 1];

            bmatrix[i][j] = sum;
        }
    }

    bmatrix[0][0] -= bmatrix[0][0]/2;

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {

            printf("%d ", bmatrix[i][j]);
        }

        printf ("\n");
    }

    return 0;
}
