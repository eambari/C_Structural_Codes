//
// Created by Endrit on 2/7/2022.
//Read a square matrix of integers from standard input. First the dimension N is entered (2 < N <= 100) and then the elements of the matrix by rows.
//Transform the matrix in a way that all the elements ABOVE the main diagonal will be set to the value of the maximal element found above the main diagonal, while all the elements BELOW the main diagonal will be set to the value of the minimal element found below the main diagonal. Print out the transformed matrix.
#include<stdio.h>

int main ()
{
    int n, j, i, max, min;

    int array[100][100];

    scanf ("%d", &n);

    for (i = 0; i < n; i++){

        for (j = 0; j < n; j++){

            scanf ("%d", &array[i][j]); } }

    min = array[1][0];

    max = array[0][1];

    for (i = 0; i < n; i++){

        for (j = 0; j < n; j++){

            if (i < j && array[i][j] > max){

                max = array[i][j];

            } } } for (i = 0; i < n; i++){

        for (j = 0; j < n; j++){

            if (i > j && array[i][j] < min){

                min = array[i][j]; } } }


    for (i = 0; i < n; i++){

        for (j = 0; j < n; j++){

            if(i < j){

                array[i][j] = max;

            } else if (i > j){

                array[i][j] = min;

            } } }

    for (i = 0; i < n; i++){

        for (j = 0; j < n; j++){

            printf ("%d ", array[i][j]);} printf ("\n");}


    return 0;
}
