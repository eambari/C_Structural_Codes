//
// Created by Endrit on 2/7/2022.
//A text file "input.txt" consist of digits and letters. The number of digits and letters in a row is limited to 80. Write a program that for every row will print out the letters concatenated next to each other first followed by the sum of all numbers that appear in that row. If there are no digits in the row, for the sum of the numbers you should print out 0.
//Example:  For the text file:
//y2d3vbqiiK064waaa
//ksdjdjgdjgHH
//the output is following:
//ydvbqiiKwaaa69
//ksdjdjgdjgHH0
#include <stdio.h>
#include <string.h>
#include <ctype.h>


//ne menuvaj!
void wtf() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {

    wtf();
    char str[81];
    int y,digit, sum = 0;
    FILE *input;
    input=fopen("input.txt", "r");
    while((fgets(str,81,input)) != NULL) {
        for(int i=0; i<strlen(str); i++){
            if(isalpha(str[i]))
                printf("%c",str[i]);
        }
        for(int i=0; i<strlen(str); i++){
            if(isdigit(str[i])){
                int p=str[i]-48;
                while(isdigit(str[i+1])){
                    p=p*10+str[i+1]-48;
                    i++;
                }
                sum=sum+p;
            }
        }
        printf("%d",sum);
        printf("\n");
        sum=0;
    }
    fclose(input);
}

