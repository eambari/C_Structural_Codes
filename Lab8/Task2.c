//
// Created by Endrit on 2/7/2022.
//Write a program that given an input file "text.txt" will print how many upper letters each line has, as well the average number of upper letters per line of the file.
//Also, print the line with max count of upper letters in it, but don't print the upper letters.
#include<stdio.h>
#include<string.h>
#include<ctype.h>

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    writeToFile();

    FILE *fp = fopen("text.txt", "r");

    int maxCount = 0, lineCounter = 0, upperCounter;

    char str[500];

    char tmp[500] = "";

    int i = 0, maxUppers = 0;

    while ((fgets(str, 500, fp))!= NULL){

        lineCounter++;

        upperCounter = 0;

        for (int i = 0; i < strlen(str); i++){

            if(isupper(str[i])){

                upperCounter++;

            }
        }

        maxCount+=upperCounter;

        printf("%d\n", upperCounter);

        if (upperCounter > maxUppers){

            maxUppers = upperCounter;

            strcpy(tmp, str);
        }


    }

    printf("%.2f\n", (float)maxCount/lineCounter);

    while(tmp[i]!='\0')

    {
        if(!isupper(tmp[i])){

            putchar(tmp[i]);}

        i++;

    }


    fclose(fp);

    return 0;

}

