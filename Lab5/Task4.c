//
// Created by Endrit on 2/6/2022.
//Write a function printTriangle (int n) that will print a triangle of the symbols * and - with side sizes n.
//Example:
//n=5
//Output:
//*
//**
//*-*
//*--*
//*****
#include<stdio.h>

void printTriangle (int n)
{

    for (int i = 1; i <= n; i++){

        for (int j = 0; j < i; j++){

            if (j > 0 && j < (i-1) && i > 0 && i < n){

                printf("-");}

            else printf("*");

        }
        printf ("\n");
    }
}

int main ()
{
    int n;

    scanf ("%d", &n);

    printTriangle (n);

    return 0;
}


