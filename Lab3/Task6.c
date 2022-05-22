//
// Created by Endrit on 2/6/2022.
//An integer N is read from the standard input.
//Write a program that will print the first number greater than N that has equal number of odd and even digits (zero is counted as an even digit).
#include<stdio.h>

int main ()
{

    int n;
    scanf("%d", &n);

    for (int i = n+1;;i++){

        int countEven = 0, countOdd = 0;
        int tmp = i;

        while (tmp){

            int lastDigit= tmp%10;

            if (lastDigit%2==0){

                countEven++;
            } else {
                countOdd++;
            }
            tmp/=10;

        }
        if(countEven == countOdd){

            printf ("%d", i);
            break;

        }
    }

    return 0;
}


