//
// Created by Endrit on 2/7/2022.
//The file input.txt contains a single word that is not longer than 30 letters in each row. Find all the words in a file that define a palindrome only with the vowels they contain (after making the opposite word of the given one, the vowels have not changed their indexes within the word). Print this words on a standard output. The appearance of uppercase and lowercase letters should be ignored.
//Example:
//input.txt
//Hellen
//input
//werAnifameb
//output:
//Hellen
//werAnifameb
#include <stdio.h>
#include <string.h>
#include <ctype.h>
// DO NOT CHANGE!

void writeToFile(char * file) {
    FILE *f = fopen(file, "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}
int isvowel(char str){
    if(islower(str)) {
        if(str=='a' || str=='e' || str=='o' || str=='i' || str=='u')
            return 1;
        else return 0;
    }
    if(isupper(str))
        if(str=='A' || str=='E'|| str=='O'|| str=='I'|| str=='U')
            return 1;
        else return 0;
}

int is_pal(char *str, int n){
    int i,j;
    for (i=0, j=n-2; i<j; i++, j--)
        if(isvowel(str[i]) || isvowel(str[j]))
            if(tolower(str[i]) != tolower(str[j])){return 0;}
    return 1;
}

int main()
{
    char filename[] = "input.txt";

    writeToFile(filename);
    FILE *input;
    char str[30];
    input=fopen(filename, "r");
    while((fgets(str,30,input))!=NULL){
        if(is_pal(str, strlen(str)))
            printf("%s",str);
    }
    fclose(input);


    return 0;
}





