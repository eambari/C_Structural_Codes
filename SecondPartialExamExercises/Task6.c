//
// Created by Endrit on 2/7/2022.
//Write a program that reads matrix with dimensions MxN (max. 100x100). At the beginning the dimensions are read, and then the elements of the matrix with values 0 or 1. Your program should count and print on SO the number of rows and columns with at least 3 consecutive appearance of elements with value 1.
//Example:
//111100110011
//1 row + 1 column = 2
#include<stdio.h>

int count (int array[100][100], int m, int n)
{
    int i, j, count = 0;

    for(i = 0; i < m; i++){

        for(j = 0; j < n; j++){

            if (array[i][j] == 1 && array[i][j+1] == 1 && array[i][j+2] == 1){

                count++;

                break;

            }

        }

    }

    for(i = 0; i < n; i++){

        for(j = 0; j < m; j++){

            if (array[j][i] == 1 && array[j+1][i] == 1 && array[j+2][i] == 1){

                count++;

                break;}

        }

    }

    return count;
}


int main(){

    int m, n, i, j;

    int array[100][100];

    scanf ("%d %d", &m, &n);

    for(i = 0; i < m; i++){

        for(j = 0; j< n; j++){

            scanf ("%d", &array[i][j]);

        }

    }
    printf ("%d", count (array, m, n));

    return 0; }



