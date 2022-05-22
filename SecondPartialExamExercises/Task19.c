//
// Created by Endrit on 2/7/2022.
//In given file datnum.txt find and print the row, where the ratio of digits/letters is largest. If there are more than one such rows print the last. No row is longer than 100 characters, and if in a row there are no letters, that row is ignored.
//Example
//Input
//aaa123aa 222aa5a289
//aaaa cde 23aaaa
//45 ,, 56! 7
//222aa5a289 aaa123aa
//123 aaa 89994 ghj 90 xyz
//xyz ,. hgfd
//Output
//222aa5a289 aaa123aa
#include <stdio.h>
#include <string.h>
#include <ctype.h>
// DO NOT CHANGE HERE
void wtf() {
    FILE *f = fopen("datnum.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}


double ratio (char *str){

    double numbersCount = 0.0, lettersCount = 0.0;

    int i;

    for(i = 0; i < strlen(str); i++){

        if(isdigit(str[i])){

            numbersCount++;

        } else if (isalpha(str[i])){

            lettersCount++;

        }

    }

    if(numbersCount == 0.0 || lettersCount == 0.0){

        return 0.0;

    } else return numbersCount/lettersCount;

}


int main() {
    wtf();

    FILE *fp = fopen ("datnum.txt", "r");

    int i;

    double maxRatio = 0.0;

    char maxStr[101];

    char str[101];

    while (fgets(str, 101, fp)!= NULL){

        str[strlen(str)-1] = '\0';

        double ratiod = ratio(str);

        if (ratiod >= maxRatio){

            maxRatio = ratiod;

            strcpy(maxStr, str);

        }

    }

    if(maxRatio == 0){

        puts(str);

    } else puts(maxStr);

    fclose(fp);

    return 0;
}

