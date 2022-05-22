//
// Created by Endrit on 2/6/2022.
//Write a program that computes average grade of semester. The program reads 5 integers and should print out the average as floating point number with two decimal places.
#include <stdio.h>

int main()
{
    int a,b,c,d,e;
    float AverageNumber;
    scanf ("%d %d %d %d %d %f", &a,&b,&c,&d,&e,&AverageNumber);
    AverageNumber = (a+b+c+d+e)/5.0;
    printf ("%.2f",AverageNumber);



    return 0;
}