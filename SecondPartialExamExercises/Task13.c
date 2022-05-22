//
// Created by Endrit on 2/7/2022.
//An array of integers is to be read from SI. First the number N (N<=100) is entered followed by N integers. Write a program that will transform the array in the following way: starting at the beginning of the array, for each element that is equal to the next element in the array, double the value of the first one and overwrite the second one with 0. After that, rearrange the array so that all the zeroes will be moved at the end of the array, keeping the order of the other elements. Print all the elements of the array on the SO in a single line, separated by space.
//Write separate functions for transforming the array and for reordering the elements.
//Example:
//6
//2 2 0 4 8 8
//(Intermediate: 4, 0, 0, 4, 16, 0)
//Output:
//4 4 16 0 0 0
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void transform (int *a, int n){

    for(int i = 0; i < n-1; i++){


        if(a[i] == a[i+1]){

            a[i]*=2;

            a[i+1] = 0;

        }

    }

}

void sort (int *a, int n){

    int swap;

    for(int i = 0; i < n; i++){

        for(int j = i; j < n-1; j++)

            if(a[j] == 0){

                swap = a[j];

                a[j]=a[j+1];

                a[j+1] = swap;

            }

    }

}

int main()
{

    int i, n;

    int a[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++){

        scanf("%d", &a[i]);

    }

    transform(a, n);

    sort(a, n);

    for(i = 0; i < n; i++){

        printf("%d ", a[i]);

    }

    return 0;
}

