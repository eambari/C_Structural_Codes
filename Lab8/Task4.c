//
// Created by Endrit on 2/7/2022.
//Write a function double relativeFrequency (char * fileName, char letter) that will determine the relative frequency of a letter in a text file named 'fileName'!.
//A relative frequency of a letter is calculated as the quotient between the count of occurrences of the letter and the total number of letters in the text. The case of the letter should be ignored (consider all letters as lower or upper letters!)
//After that, write a function void printRelativeFrequencies(char * fileName) that will utilize the previous function, and will calculate the relative frequencies of all the letters from the alphabet and then it will print them on standard output.

#include <stdio.h>
#include <ctype.h>

double relativeFrequency (char * fileName, char letter) {

    FILE * file = fopen(fileName, "r");

    int totalCount = 0;
    int totalLetters = 0;
    char curr;

    while ((curr=fgetc(file))!=EOF) {
        if (isalpha(curr)) {
            totalLetters++;
            if (tolower(letter)==tolower(curr))
                totalCount++;
        }
    }

    return (totalCount*1.0)/totalLetters;
}

void printRelativeFrequencies(char * fileName) {

    char c;

    for (c='A';c<='Z';c++) {
        printf("%c -> %.5f\n", c, relativeFrequency(fileName, c));
    }
}



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

    printRelativeFrequencies("text.txt");

    // vasiot kod ovde
}

