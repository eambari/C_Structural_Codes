//
// Created by Endrit on 2/7/2022.
//Write a function leterFrequency (char * text, char letter) that for a given letter will print information about the relative frequency of that letter in the string text (both as lower and as an upper letter). The text is limited to maximum 1000 chars.
//A relative frequency of a letter is calculated as the quotient between the count of occurrences of the letter and the total number of letters in the text.
#include<stdio.h>
#include<ctype.h>
#include<string.h>

void leterFrequency (char * text, char letter){

    int count = 0, occurrenceUpper = 0, occurrenceLower = 0;

    for (int i = 0; i < strlen(text); i++){

        if (isalpha(text[i])){

            count++;

            if (text[i] == toupper(letter)){

                occurrenceUpper++;

            } else
            if (text[i] == tolower(letter)){

                occurrenceLower++;

            }
        }
    }

    printf ("%c -> %.3f%\n", tolower(letter), ((float)occurrenceLower/count)*100);
    printf ("%c -> %.3f%\n", toupper(letter), ((float)occurrenceUpper/count)*100);

}

int main()
{

    char str[1000];

    char c;

    fgets(str, sizeof(str), stdin);

    str[strlen(str)-1] = '\0';

    scanf("%c", &c);

    leterFrequency(str, c);

    return 0;
}


