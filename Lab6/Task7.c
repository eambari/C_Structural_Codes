//
// Created by Endrit on 2/6/2022.
//Write a recursive function proizvod () which for a given natural number will calculate and return the product of all digits that are in even positions (viewed from right to left). The least significant digit is considered to be in the 1st position. Then write a program that for the natural number n (which is entered from the keyboard) will call the proizvod () function to print the product of the digits that are in even positions in n.
//Example.
//Input:
//717623
//Output:
//98
//Explanation:
//The product of the digits that are in even positions in the number 717623 is 7 * 7 * 2 = 98.
#include<stdio.h>

int print (int n){

    int lastDigit = n/10%10;

    if (n == 0){

        return 1;


    } else return lastDigit*print(n/100);

}

int main()
{
    int n;

    scanf("%d", &n);

    printf ("%d", print (n));

    return 0;
}


