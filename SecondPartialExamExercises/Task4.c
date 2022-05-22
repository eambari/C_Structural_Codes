//
// Created by Endrit on 2/7/2022.
//Write a program that will read unknown number of three integers, and for each triple (a, b, c) will print the number (a or b) that contains the digit c more times on even positions (the positions are counted from right to left, and the first position is 1).
#include<stdio.h>

int counta (int a, int c)
{
    int count = 0;

    a/=10;

    while(a>0){

        if (a%10 == c){

            count++; }

        a/=100;
    }

    return count;
}


int countb (int b, int c)
{
    int count = 0;

    b/=10;

    while(b>0){

        if (b%10 == c){

            count++; }

        b/=100;

    }

    return count;
}


int main(){

    int a, b, c;

    while (scanf ("%d %d %d", &a, &b, &c)==3){

        if(counta(a, c) < countb(b, c)){

            printf ("%d\n", b);

        } else printf("%d\n", a);

    }

    return 0; }




