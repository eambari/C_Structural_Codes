//
// Created by Endrit on 2/7/2022.
//The file * input.txt * is given and contains a single word that is not longer than 20 letters in each line. Write a program that will print the word that has the biggest number of different letters. Words that have less than four letters are not taken into account during the check. Do not make a difference between upper and lower case letters. If there are more words that meet the criteria, the last one is printed.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void writeToFile(char * file) {
    FILE *f = fopen(file, "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int differentLetters (char *str){

    int counter = 0;

    for(int i = 0; i < strlen(str); i++){

        for(int j = i+1; j < strlen(str); j++){

            if(tolower(str[i]) == tolower(str[j])){

                break;

            } else counter++;

        }

    }

    return counter;

}


int main() {

    writeToFile("input.txt");

    FILE *fp = fopen("input.txt", "r" );

    char str[21];

    char maxStr[21];

    int letters, maxLetters = 0;

    while(fgets(str, 21, fp) != NULL){

        str[strlen(str)-1] = '\0';

        letters = differentLetters(str);

        if(letters >= maxLetters){

            maxLetters = letters;

            strcpy(maxStr, str);

        }

    }

    puts(maxStr);

    return 0;
}

