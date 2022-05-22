//
// Created by Endrit on 2/7/2022.
//In a given file "numbers.txt" are written more rows with integers, and each row starts with one integer (N >= 1) that represents how many integers are following afterwards in the same row. Write a program that on SO will print print the number with largest most significant digit. Reading of integers ends when 0 is read.
#include <stdio.h>
#include <string.h>
#define MAX 100

int mostSignificantDigit(int *array, int n)
{
    int tmp, maxNumber = 0, maxDigit = 0;

    for (int i = 0; i < n; i++){

        tmp = array[i];

        while(tmp>9){

            tmp/=10;

        }

        if (tmp > maxDigit){

            maxDigit = tmp;

            maxNumber = array[i];
        }
    }

    return maxNumber;
}

void wtf() {
    FILE *f = fopen("numbers.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main()
{
    wtf();

    int array[100];

    int n, maxNumber;

    FILE *fp = fopen("numbers.txt","r");

    while(fscanf(fp, "%d", &n)!= EOF){

    if(n == 0)

        break;

    for(int i = 0; i < n; i++){

        fscanf(fp, "%d", &array[i]);

      }

     maxNumber = mostSignificantDigit(array, n);

     printf("%d\n", maxNumber);

    }

    fclose(fp);

    return 0;
}


