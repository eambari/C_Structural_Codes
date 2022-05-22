//
// Created by Endrit on 2/7/2022.
//Write a program that will read a square matrix from the file "input.txt". Firstly, you need to read a number n from the file, which is the number of rows and columns of the matrix, and then read all n x n elements from the matrix.
//In the file "output.txt" write the matrix in such a way that you will write only the elements below the main diagonal, but they will have the value of the sum of the elements of the counterdiagonal of the matrix.
//The printing should be done in the way that all the numbers should be printed with three places, and the other elements should be replaced with three empty spaces.
#include <stdio.h>
#include<string.h>
#include<ctype.h>

void transform (int array[100][100], int n){

    int countSum = 0;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){

            if (i+j == n-1){

                countSum += array[i][j];

            }

        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){

            if (i+j>= n-1){

                array[i][j] = countSum;

            }

        }
    }

}



void writeToFile() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

void printFile() {

    FILE *f=fopen("output.txt","r");
    char line[100];
    while(!feof(f)){
        fgets(line,100,f);
        if (feof(f))
            break;
        printf("%s",line);
    }
    fclose(f);
}

int main() {
    writeToFile();

    FILE *fp = fopen("input.txt", "r");

    FILE *fp2 = fopen("output.txt", "w");

    int n = 0;

    int a[100][100];

    fscanf(fp, "%d", &n);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            fscanf(fp, "%d", &a[i][j]);
        }
    }


    transform(a, n);

    fclose(fp);

    fprintf(fp2, "\n");

    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n; j++){

            if (i+j>= n-1)

                fprintf(fp2, "%03d ", a[i][j]);
        }

        fprintf(fp2, "\n");

    }

    fclose(fp2);


    printFile();
    return 0;
}

