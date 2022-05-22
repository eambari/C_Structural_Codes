//
// Created by Endrit on 2/7/2022.
//Write a fully recursive function triangle(n) that for an input argument n will print a triangle consisting of the numbers from 1 to n. Additional functions are permitted, but those have to be recursive as well. Loop functions are not allowed!
//For example for n=4.
//   1
//   12
//   123
//   1234
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
