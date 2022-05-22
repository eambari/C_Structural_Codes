//
// Created by Endrit on 2/7/2022.
//Write a program that will print on SO the contents of given textual file "text.txt". While printing, in front of each row should print the ratio of upper/lower case letters in the row. Maximal length of the row is 80 characters. At the end print the number of the row with largest ratio of upper/lower case letters.
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 80

void wtf() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

float checkRatio(char *str){

    int i, maxUpper = 0, maxLower = 0;

    for (i = 0; i < strlen(str); i++){

        if(isupper(str[i])){

            maxUpper++;

        } else if(islower(str[i])){

            maxLower++;

        }
    }

    return (float)maxUpper/maxLower;

}

int main() {

    wtf();

    int maxRow = 0, rowCounter = -1;

    float ratio, maxRatio = 0;

    FILE *fp = fopen ("text.txt", "r");

    char str[81];

    while (fgets(str, 81, fp) != NULL){

        str[strlen(str)-1] = '\0';

        ratio = checkRatio(str);

        rowCounter++;

        if(ratio > maxRatio){

            maxRow = rowCounter;

            maxRatio = ratio;

        }

        printf("%.2f ", ratio);

        puts(str);

    }

    printf("%d", maxRow);

    return 0;
}


