//
// Created by Endrit on 2/6/2022.
//An integer n(n>2) is read from SI, as well as a square matrix A of order n, whose elements are also integers.
//Transform the matrix A in such a way that the elements ABOVE the main diagonal will take the value of the maximum element above the main diagonal, and the elements BELOW the main diagonal will take the value of the minimum element below the main diagonal.
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


