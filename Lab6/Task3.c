//
// Created by Endrit on 2/6/2022.
//Write a fully recursive function printForm(n) that for an argument n (n >= 0) will print a form from the signs * and #. You can use extra functions, but they all have to be recursive!
//Example for=4.
//####
//***
//##
//*
//Example for n=3.
//***
//##
//*
#include <stdio.h>

void printForm(int n){

    int i;

    if (n==0){

        return;

    }

    for (i = 0; i < n; i++){

        if(n%2==0){

            printf("#");}
        else{

            printf("*");}

    }printf("\n");

    return printForm(n-1);



}

int main(){

    int n;

    scanf ("%d", &n);

    printForm(n);

    return 0;
}


