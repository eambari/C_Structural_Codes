//
// Created by Endrit on 2/7/2022.
//Z-diagonal of given square matrix is composed of the elements of the first row, the elements of the supportive diagonal, and the elements of the last row (marked with blue color on the example).
//From SI read the dimensions of square matrix (integer N, N > 2, N<100), and the elements of the matrix (real numbers). Store the elements of the Z-diagonal in a array, starting from the first row, continuing with the supportive diagonal, and finishing with the last row (the last element of the first row is the same element with the first element of the supportive diagonal, and the last element of the supportive diagonal is the same as the first element of the last row, and these elements should be stored only once). The resulted array should be printed on the SO. Then print the original matrix, but with the elements of Z-diagonal in reverse order.
//58344.15.595.14.15.5621.337.40.71.213227
//Example:
//Input:
//4
//5 5.5 6 1.2
//8  95.1 21.3 13
//34 4.1 37.4  22
//4.1 5.5 0.7 7
//Output:
//5.00 5.50 6.00 1.20 21.30 4.10 4.10 5.50 0.70 7.00
//7.00 0.70 5.50 4.10
//8.00 95.10 4.10 13.00
//34.00 21.30 37.40 22.00
//1.20 6.00 5.50 5.00
#include <stdio.h>

void sort (float array[100][100], float *b, int n, int m){

    int i, j;

    m--;

    for (i = 0; i < n; i++){

        for (j = 0; j < n; j++){

            if (i == 0 && j <= n-2){

                array[i][j] = b[m];

                m--;

            } else if (i+j == n-1){

                array[i][j] = b[m];

                m--;

            } else if (i == n-1 && j >= 0){

                array[i][j] = b[m];

                m--;

            }
        }
    }


}



void zDiagonal(float array[100][100], int n){

    int i, j, m = 0;

    float b[100];

    for (i = 0; i < n; i++){

        for (j = 0; j < n; j++){

            if (i == 0 && j <= n-2){

                b[m]=array[i][j];

                m++;

            } else if (i+j == n-1){

                b[m] = array[i][j];

                m++;

            } else if (i == n-1 && j >= 0){

                b[m] = array[i][j];

                m++;

            }
        }
    }
    for (i = 0; i < m; i++){

        printf ("%.2f ", b[i]);
    }

    printf("\n");

    sort(array, b, n, m);

}

int main()
{
    int n, i, j;

    float array[100][100];

    scanf("%d", &n);

    for(i = 0; i < n; i++){

        for(j = 0; j < n; j++){

            scanf("%f", &array[i][j]);

        }
    }

    zDiagonal(array, n);

    for(i = 0; i < n; i++){

        for(j = 0; j < n; j++){

            printf("%.2f ", array[i][j]);

        }

        printf("\n");

    }


}

