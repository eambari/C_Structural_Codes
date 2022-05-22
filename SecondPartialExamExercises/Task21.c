//
// Created by Endrit on 2/7/2022.
//Write a program that will read from SI array of natural numbers (not more than 100). Print all the elements of the array that represent strong numbers (each in new line). One number is strong if the sum of factorials of each of his digits is equal to the number itself. Example, number 145 is strong because:
//145 = 1! + 4! + 5!
//If a number is strong should be checked in a separate function, and for computing factorial a separate recursive function should be implemented and used.
#include <stdio.h>

int factorial (int i){

    if (i == 0){

        return 1;

    } else return i*factorial(i-1);


}


int isStrong(int i){

    if (i == 0){

        return 0;

    } else return factorial(i%10) + isStrong(i/10);


}

int main() {

    int n, i;

    scanf ("%d", &n);

    printf("Strong numbers:\n");

    while (n){

        scanf("%d", &i);

        if(isStrong(i) == i){

            printf("%d\n", i);

        }

        n--;
    }

    return 0;
}

