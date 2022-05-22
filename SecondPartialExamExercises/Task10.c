//
// Created by Endrit on 2/7/2022.
//For one integer b we say that is a parity complement of other integer a if and only if in the number b all the even digits of the number a are replaced with the corresponding (odd) digit increased by 1, and all odd digits of the number a are replaced with the corresponding (odd) digit decreased by 1 .
//Example. Number b = 4013698 is a parity complement of a = 5102789.
//Read from SI unknown number of integers (not more than 100), until something that is not a number is entered.
//Your task is to print the smallest 5 of the parity complements of all numbers, from the smallest to the largest.
//Notice: If less then 5 numbers are entered, then print all the entered numbers.
//Finding the parity complement of a number should be implemented in a separate recursive function parcom(int a).
//Example.
//For numbers: 9641, 69403, 103007, 6, 11, 181, 20486 you should find their parity complements (those are: 8750, 78512, 12116, 7, 0, 90 and 31597, respectively), and print the 5 smallest of them in this order: 0 7 90 8750 12116.
//Using global variables is FORBIDDEN.
#include <stdio.h>
#include <string.h>
#define MAX 100

int parity (int n) {

    int lastDigit = n%10;

    if (n==0){

        return 0;

    } if (lastDigit % 2 == 0){

        return ++lastDigit + 10*parity(n/10);

    } else return --lastDigit + 10*parity(n/10);


}



int main()
{
    int i=0, temp;

    int array[100];

    while(scanf("%d", &array[i])){

        array[i] = parity(array[i]);

        i++;
    }

    for(int j = 0; j < i; j++){

        for (int b = 0; b < i-1; b++){

            if (array[b] > array[b+1]){

                temp = array[b];
                array[b] = array[b+1];
                array[b+1] = temp;

            }

        }

    }


    for (i = 0; i < 5; i++){

        printf("%d ", array[i]);

    }


    return 0;
}
