//
// Created by Endrit on 2/6/2022.
//Write a recursive function countOfEvenDigits that has one argument, an integer n, and the result of the function is the count of the even digits in the number n.
//Example:
//n = 12345
//countOfEvenDigits(n) = 2 (2 and 4 are even digits in this number)
//Then, write a recursive function readNumbers that has one argument, an integer n and does not return anything. Instead this function needs to read n numbers from SI and for each number, print to standard output the count of the even digits in the number.
#include <stdio.h>

int countOfEvenDigits (int n){

    int count = 0;

    if (n==0){

        return 0;
    }

    else if ((n % 10)%2 == 0){

        count++;
    }
    return count + countOfEvenDigits(n/10);}

void readNumbers (int n){

    int a;

    if (n==0){

        return;

    } else {

        scanf ("%d", &a);

        printf("%d\n", countOfEvenDigits(a));

    } return readNumbers(n-1);

}

int main(){

    int n;

    scanf ("%d", &n);

    readNumbers(n);

    return 0;
}