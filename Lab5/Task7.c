//
// Created by Endrit on 2/6/2022.
//Write a program where a matrix $A$ read from SI (the dimensions of the matrix are lower than 100) is transformed into a new matrix $B$. Each element of the new matrix $B$ is sum of the positive neighbors (in horizontal and vertical direction) of the corresponding element of the matrix $A$. Print the new matrix $B$ on the standard output.
//Input A:
//$ \begin{matrix} 1 & 2 & 3\\ 4 & -1 & -2\\ -3 & -4 & 10\\ 1 & 2 & 10 \end{matrix} $
//Output B:
//$ \begin{matrix} 6 & 4 & 2\\ 1 & 6 & 13\\ 5 & 12 & 10\\ 2 & 11 & 12 \end{matrix} $
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

