//
// Created by Endrit on 2/7/2022.
//A text file "rectangle.in" is given. In the first row of the file there is an integer N, and in the second row, an array of N single-digit positive numbers. Find the numbers A and B that repeat the most times in the array. Then, print the rectangle with dimension A x B on the standard output, in the following format:
//**.....*
//**.....*
//**.....*
//**.....*
//**.....*
//(A lines with B-stars, where A is the smaller of the two numbers found).
//In the test cases there are always exactly two numbers that appear the same most times.
//Example:
//Input:
//10
//2 5 3 7 5 3 3 6 4 5
//(3 appears 3 times, 5 appears 3 times, while the others are less frequent)
//Output:
//* * * * *
//* * * * *
//* * * * *
#include <stdio.h>
#include <string.h>
#define MAX 100

//Do not change!
void wtf() {
    FILE *f = fopen("rectangle.in", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();
    FILE *input;
    input=fopen("rectangle.in", "r");
    int n, i, j, count;
    int most = 0;
    int temp,elem,elem2;

    fscanf(input,"%d",&n);
    int a[n];
    for(i=0; i<n; i++)
        fscanf(input,"%d",&a[i]);

    // elem first
    for(i = 0; i < n; i++) {
        temp = a[i];
        count = 1;
        for(j = i + 1; j < n; j++) {
            if(a[j] == temp) {
                count++;
            }
        }
        if (most < count) {
            most = count;
            elem = a[i];
        }
    }
    most = 0;
    // elem2 second
    for(i = 0; i < n; i++) {
        if(a[i]==elem)
            continue;
        temp = a[i];
        count = 1;
        for(j = i + 1; j < n; j++) {
            if(a[j] == temp) {
                count++;
            }
        }
        if (most < count) {
            most = count;
            elem2 = a[i];
        }
    }

    if (elem2<elem) {
        temp=elem;
        elem=elem2;
        elem2=temp;
    }

    for(i=0; i<elem; i++) {
        for (j=0; j<elem2; j++)
            printf("* ");
        printf("\n");
    }

    fclose(input);
}
