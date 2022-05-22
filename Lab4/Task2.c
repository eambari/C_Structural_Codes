//
// Created by Endrit on 2/6/2022.
//A number N and N elements of an array are read from SI.
//The array should be transformed in a new array where all the even elements should be increased by 1, and all the odd elements decreased by 1.
//The transformed array should be printed to standard output and all the elements of the array should be separated with space between them.
#include<stdio.h>

int main() {

    int n, m[100], i;

    scanf ("%d", &n);

    for (i = 0; i < n; i++){

        scanf("%d", &m[i]); }

    for (i = 0; i < n; i++){

        if (m[i]%2 == 0){

            m[i]++;

        } else m[i]--;


    } for (i = 0; i < n; i++)

        printf ("%d ", m[i]);

    return 0;
}


