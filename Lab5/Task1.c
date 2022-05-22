//
// Created by Endrit on 2/6/2022.
//Write a function allEvenNumbers that has two arguments: an array of integers array and an integer n that is the size of the array.
//The function should return 1 if all the numbers in the array array are even or 0 otherwise.
//Do not change the code in the int main() function!
#include<stdio.h>

int allEvenNumbers (int array[], int n);

int main ()
{

    int array[100], n;

    scanf ("%d", &n);

    for (int i = 0; i < n; i++){

        scanf ("%d", &array[i]);

    }

    if (allEvenNumbers(array, n))
    {
        printf ("YES");
    } else printf ("NO");

    return 0;
}

int allEvenNumbers(int array[], int n)
{
    for (int i = 0; i < n; i++){

        if (array[i] % 2 == 0){

            continue;
        } else return 0;

    } return 1;
}


