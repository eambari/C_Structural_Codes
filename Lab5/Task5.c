//
// Created by Endrit on 2/6/2022.
//Read a square binary matrix from standard input. First the dimension N is entered (1 < N <= 100) and then the elements of the matrix (either 0 or 1) by rows.
//Write a program that will calculate the smallest number of necessary changes of the elements in order to transform the matrix to a zero diagonal symmetrical matrix. Any transition of an element from 0 to 1 or from 1 to 0 counts as a single change. After the conversion, all the elements of the main diagonal should be 0, and the matrix should be symmetrical with respect to the main diagonal. Print the minimal number of transitions required.
//For example, for the input:
//4
//1 0 0 1
//1 1 1 1
//0 1 1 1
//0 0 0 0
//the output should be:
//7
//Explanation:
//the number of changes is 7, as the matrix after the transitions can be transformed to:
//0 0 0 1
//0 0 1 1
//0 1 0 1
//1 1 1 0
//Optional: for bonus points solve it without any use of if or ternary operator.
#include <stdio.h>
int main () {
    int i,n,j,count;
    scanf ("%d",&n);
    int a[n][n];
    count=0;

    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            if (a[i][j] == 1 && i == j)
                count++;
        }

    }
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            if (a[i][j] != a[j][i]) {
                a[i][j] = a[j][i];
                count++;
            }
        }
    }

    printf("%d", count);
    return 0;
}

