//
// Created by Endrit on 2/6/2022.
//An array of integers A with length N (N<=100) is read from SI. Also, a integer K is read from SI.
//Your task is to transform the array into a new array where the elements less than K will be first, and after them the elements greater or equal than K should follow. The order of the elements should not be changed.
//Print the elements of the transformed array on standard output. All elements should be separated with a space between them.
//Example:
//A[] = {1, 3, 2, 5, 9, 0, 8, 10}, K=6
//The transformed array will be:
//A[] = {1, 3, 2, 5, 0, 9, 8, 10}
//A[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0}, K=6
//The transformed array will be:
//A[] = {5, 4, 3, 2, 1, 0, 10, 9, 8, 7, 6}
//A[]={2, 4, 6, 8, 10}, K = 5
//The transformed array will be:
//A[] = {2, 4, 6, 8, 10}
//A[]={1, 3, 5, 7, 9} K = 5
//The transformed array will be:
//A[] = {1, 3, 5, 7, 9}
#include<stdio.h>

int main() {

    int a[100], n, k, i, tmp[100], j;

    scanf ("%d", &n);

    for (i = 0; i < n; i++){

        scanf ("%d", &a[i]);

    } scanf ("%d", &k);

    j = 0;

    for (i = 0; i < n; i++){

        if (a[i] < k){

            tmp[j] = a[i];

            j++;

        }

    } for(i = 0; i < n; i++)

        if (a[i] >= k){

            tmp[j] = a[i];

            j++;

        }

    for (i = 0; i < n; i++)

        a[i] = tmp[i];

    for (i = 0; i < n; i++)

        printf("%d ", a[i]);


    return 0;
}