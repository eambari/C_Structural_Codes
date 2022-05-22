//
// Created by Endrit on 2/7/2022.
//Write a fully recursive function triangle (n) which given the input argument n, prints a triangle from the numbers from 1 to n. Additional functions can be used, but no loops should be used.
//Example for n=4.
//    1
//    12
//    123
//    1234
#include<stdio.h>

void printn(int n, int i)
{

    if (i>n)
        return;
    printf ("%d", i);

    return printn(n, i+1);
}

void pattern(int n, int i)
{

    if (i>n)

        return;

    printn(i, 1);
    printf("\n");

    return pattern(n, i+1);
}

int main()
{
    int n;
    scanf("%d", &n);
    pattern(n, 1);
    return 0;
}

