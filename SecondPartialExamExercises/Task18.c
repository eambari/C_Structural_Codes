//
// Created by Endrit on 2/7/2022.
//Write a program that will repeat k times each single occurrence of a vowel in the input file "sp.txt" to a new file "output.txt". The first line of the input file contains only the parameter k. The first line (containing the parameter k) should not to be written in the output file.
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100


//ne menuvaj!
void wtf() {
    FILE *f = fopen("sp.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
void rff() {
    FILE *f = fopen("output.txt", "r");
    char c;
    while((c = fgetc(f)) != EOF) {
        putchar(c);
    }
    fclose(f);
}

int isvowel(char ch) {
	if (islower(ch))
        if (ch == 'a' || ch== 'e' || ch=='i' || ch=='o' || ch=='u') return 1;
        else return 0;
    if (isupper(ch))
        if (ch == 'A' || ch== 'E' || ch=='I' || ch=='O' || ch=='U') return 1;
		else return 0;
}


int main() {

    wtf();

    FILE *input= fopen("sp.txt", "r");
    FILE *output= fopen("output.txt", "w");

    int k, temp;

    char ch;

    fscanf(input,"%d", &k);

    ch=fgetc(input);

    if(isvowel(ch)){
            while(temp>0){
        			fputc(ch,output);
            		temp--;
        }

    }

    while((ch=fgetc(input)) != EOF){

        temp=k;

            if(isvowel(ch)){

            while(temp>0){

        			fputc(ch,output);
            		temp--;
        }

        } else fputc(ch,output); }




  fclose(input);
  fclose(output);

    rff();

    return 0;

}

