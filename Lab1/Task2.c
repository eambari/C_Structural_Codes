//
// Created by Endrit on 2/6/2022.
//Write a program that for a given amount of money, will print the minimum bills and coins needed to make the payment. The amount is integer read from standard input. The result should be printed in 9 lines, the number of bills or coins for each of them.
//Example: 1583 denars, will be best payed out as:
//0 x 5000
//1 x 1000
//1 x 500
//0 x 100
//0 x 50
//3 x 10
//0 x 5
//1 x 2
//1 x 1
#include <stdio.h>

int main()
{
    int a;
    scanf ("%d",&a);
    printf ("%d x 5000",a/5000);
    a = a%5000;
    printf ("\n%d x 1000",a/1000);
    a = a%1000;
    printf ("\n%d x 500",a/500);
    a = a%500;
    printf ("\n%d x 100",a/100);
    a = a%100;
    printf ("\n%d x 50",a/50);
    a = a%50;
    printf ("\n%d x 10",a/10);
    a = a%10;
    printf ("\n%d x 5",a/5);
    a = a%5;
    printf ("\n%d x 2",a/2);
    a = a%2;
    printf ("\n%d x 1",a/1);
    a = a%1;
    return 0;
}


