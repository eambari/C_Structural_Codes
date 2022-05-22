//
// Created by Endrit on 2/7/2022.
//From SI read characters until you read the char !. In these characters are hidden integers (smaller than 100). Write a program that will read all characters and print the sum of all integers hidden in the text.
#include <stdio.h>
int main () {
    char c;
    int y,digit, sum = 0;
    char lastd= ' ';
    do {
        scanf("%c" ,&c);
        {

            if ((lastd >= '0'&&lastd <= '9')&&(c>= '0' && c<='9')) {
                digit=c-'0';
                y=lastd-'0';
                sum=(sum-y)+y*10 +digit;
            }


            else if (c>='0'&&c<='9') {
                digit=c-'0';
                sum+=digit;

            }
            lastd = c;
        }
    }
    while (c != '!');

    printf("%d" ,sum);
    return 0; }

