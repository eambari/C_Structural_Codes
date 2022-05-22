//
// Created by Endrit on 2/6/2022.
//A natural number n is read from standard input. After that n numbers are being read as well from standard input.
//Your task is to print to standard output only the two-digit even numbers.
#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int n;

    scanf ("%d", &n);

    for (int i = 0;i<n;i++){
        int tmp = 0;
        scanf ("%d", &tmp);

        if ((tmp > 9 && tmp < 100) && tmp%2==0)

            printf ("%d\n", tmp);


    }



    return 0;
}

