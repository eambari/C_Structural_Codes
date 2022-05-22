//
// Created by Endrit on 2/7/2022.
//Write a program that will print the contents of the text file sifra.txt coded. The coding is done letter by letter, so that each letter (only letters, not digits, dots, ...) is replaced with the letter 3 places after in the alphabet. In case of the letters at the end of the alphabet, the counting continues cyclic from the beginning of the alphabet. In the final coded text all letters are lowercase. Example letter a is coded to d, H is coded to k, p is coded to s, x is coded to a, etc.
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAX 80

void wtf() {
    FILE *f = fopen("sifra.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

char shift (char ch){

    if(((ch >='a')&&(ch <= 'z')) || ((ch >='A')&&(ch <= 'Z'))){
        if((ch >='A') && (ch <= 'Z')) {
            if(ch+3>'Z')
                ch=64+(3-('Z'-ch));
            else
                ch+=3;
        } else {
            if(ch+3>'z')
                ch=96+(3-('z'-ch));
            else
                ch+=3;
        }
    }

    return ch;
}

int main()
{

    wtf();

    FILE *fp = fopen("sifra.txt", "r");

    char ch;

    while ((ch = fgetc(fp))!= EOF){

        if(isalpha(ch)){

            printf ("%c", tolower(shift(ch)));

        }

        else putchar(ch);

    }

    return 0;
}


