//
// Created by Endrit on 2/6/2022.
//Write a recursive function f () which for a given natural number will calculate and return the sum of all digits in even positions (viewed from right to left). It is considered to be the least significant digit in the 1st position. Once you want to write the program for a given natural number n (which you have entered from the keyboard) you will call the function f () to use the sum of the digits that are in even positions in n.
//Example:
//Input:
//717623
//Output:
//16
//Explanation:
//The sum of the digits found in even positions in the number 717623 is 7 + 7 + 2 = 16.
#include<stdio.h>

int print (int n){

    int lastDigit = n/10%10;

    if (n == 0){

        return 0;


    } else return lastDigit + print(n/100);

}

int main()
{
    int n;

    scanf("%d", &n);

    printf ("%d", print (n));

    return 0;
}


