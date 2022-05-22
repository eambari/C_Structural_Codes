//
// Created by Endrit on 2/7/2022.
//You are given a text file text.txt containing multiple lines of text, none of which is longer than 80 characters. Write e program that will transform the input file and print it out on the standard output. The output should contain only letters (all other characters are discarded), and each word should be printed in a separate line.
//Example:
//Input file:
// Voi5 ovaa 6d6ato$$tek!a ke
//ostanat09856 4453 sa5m2o
//bu!!4kv(((((i
//Output:
//Vo
//ovaa
//datoteka
//ke
//ostanat
//samo
//bukvi
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void writeToFile();

int main() {

    writeToFile();

    //////////////////////////////////
    // DO NOT EDIT BEFORE THIS LINE //
    //////////////////////////////////
    char ch;

    int counter = 0;

    FILE *input = fopen("text.txt","r");

    while((ch=fgetc(input))!=EOF){
        if(isspace(ch) && counter == 0){

            printf("\n");

            counter++;

            continue;
        }
        if(isalpha(ch)) {

            counter = 0;

            printf("%c",ch);
        }
    }
    fclose(input);

    return 0;
}

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}


