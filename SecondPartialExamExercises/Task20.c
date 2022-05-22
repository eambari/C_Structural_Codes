//
// Created by Endrit on 2/7/2022.
//From SI are read dimension and elements of square matrix (MAX 100x100) of integers.
//Create a new matrix where each element of the main diagonal will be replaced with the sum of all elements from the same row right from the element and elements from the same column over the element.
//Also replace each element of the antidiagonal with the sum of all elements from the same row before the element and elements from the same column below the element.
//The blue red elements are part of the main diagonal, the blue elements are part of antidiagonal, and the element in purple is part of both diagonals.
//If there is no such elements, the element is 0. If some element is on both diagonals, both sums are summed.
//Example:
//For given matrix Аn,n:
//⎛147258369⎞
//The result:
//⎛54022081869⎞
#include <stdio.h>

void sort(int array[100][100], int b[100][100], int n){

    int i, j, k;

    for(i = 0; i < n; i++){

        for(j = 0; j < n; j++){

            if(i==j){

                for(k = i-1; k >= 0; k--){

                    b[i][j] += array[k][j];
                }
                for(k = j+1; k < n; k++){

                    b[i][j] += array[i][k];
                }

            } else if(i+j == n-1){

                for(k = i+1; k < n ; k++){

                    b[i][j] += array[k][j];
                }
                for(k = j-1; k >= 0; k--){

                    b[i][j] += array[i][k];
                }

            }

            else b[i][j] = array[i][j];

            if (i == j && i+j == n-1){

                for(k = i+1; k < n ; k++){

                    b[i][j] += array[k][j];
                }
                for(k = j-1; k >= 0; k--){

                    b[i][j] += array[i][k];
                }
            }
        }
    }
}
int main()
{

    int n, i, j;

    int array[100][100];

    int b[100][100];

    scanf("%d", &n);

    for (i = 0; i < n; i++){

        for (j = 0; j < n; j++){

            scanf("%d", &array[i][j]);
        }
    }

    sort(array, b, n);

    for (i = 0; i < n; i++){

        for (j = 0; j < n; j++){

            printf("%d ", b[i][j]);
        }

        printf("\n");
    }

    return 0;

}

