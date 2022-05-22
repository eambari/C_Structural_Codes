//
// Created by Endrit on 2/6/2022.
//Write a completely recursive function triangle(n) which for a given input argument n will print an upside-down triangle consisting of numbers from 1 to n, as shown in the example below. Additional functions are allowed, but they have to be recursive. Loop usage is not allowed.
//Example for n=4:
//1 2 3 4
//1 2 3
//1 2
//1
#include<stdio.h>

void printn(int n, int i)
{

    if (i>n)
        return;
    printf ("%d ", i);

    return printn(n, i+1);
}

void pattern(int n)
{

    if (n == 0)

        return;

    printn(n, 1);
    printf("\n");

    return pattern(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    pattern(n);
    return 0;
}


