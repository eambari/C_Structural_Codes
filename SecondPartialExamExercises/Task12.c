//
// Created by Endrit on 2/7/2022.
//Write a program that will read a string (not longer than 100 characters) containing letters and digits. The program should print on the standard output the letters that are between the first and the second digit, left-to-right, including the bordering digits themselves. If there is only one digit in the string, the program should print all the letters till the end of the string. If there is no digits in the string the program should print out the message "No digits".
//Example:
//Axvdf7dbb3bdbd88B -> 7dbb3
//Isdv88mvndkv9d -> 88
//vnjis9kjsnvnv -> 9kjsnvnv
//dsfsrtt -> No digits
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main()
{

    int i = 0, j, flag;

    char a[100];

    fgets(a, sizeof(a), stdin);

    a[strlen(a)-1] = '\0';

    while (i < strlen(a)){

        if(isdigit(a[i])){

            flag = 1;

            putchar(a[i]);

            break;

        } else i++;

    }

    if(flag == 1){

        for(j = i+1; j < strlen(a); j++){

            putchar(a[j]);

            if(isdigit(a[j])){

                break;
            }

        }

    }  else printf("No digits");

    return 0;
}

