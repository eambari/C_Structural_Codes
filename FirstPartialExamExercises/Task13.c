//
// Created by Endrit on 2/7/2022.
//Sweet number is number that contains only even digits (0, 2, 4, 6, 8). In given range (m and n read from SI) find the smallest "sweet number". If there is no such number, print NSN.
#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int m,n,i;

    scanf("%d%d", &m, &n);

    for (i=m;i<=n;++i){

        int tmp = i;

        while ( tmp != 0 && tmp % 10 % 2 == 0 ){

            tmp /= 10;

            if ( tmp == 0 ){

                printf( "%d", i );

                return 0;}


        }

    }

    if (i=n){

        printf ("NSN");
    }



    return 0;

}

