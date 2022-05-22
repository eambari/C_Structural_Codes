//
// Created by Endrit on 2/7/2022.
//Read the dimension N (with a maximum value of 100) and the values (possible values are only 1 and 0) of one square matrix $A_ {NxN}$ from the standard input. Create a new matrix $B_ {NxN}$ in the following way:
//For each element in B, write the value of the same corresponding element from A. During this procedure, if in the neighborhood of one element of A (neighbors are the elements above it or below it, on the left or right side of it) there are minimum 3 elements with a value of 1, then that element in the matrix B gets a value of 1 (although in A the corresponding value was zero).
//Print the newly obtained matrix B.
//Example:
//Matrix А:
//1 0 0 1 0
//1 1 0 1 0
//1 1 1 1 1
//0 1 0 0 1
//1 0 1 1 0
//Matrix B:
//1 0 0 1 0
//1 1 1 1 0
//1 1 1 1 1
//1 1 1 1 1
//1 1 1 1 0
#include <stdio.h>
int main () {
    int n;
    scanf("%d",&n);
    int a[100][100];
    int b[100][100];
    int counter=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&a[i][j]);
            b[i][j]=a[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i+1][j]==1)
                counter++;
            if(a[i-1][j]==1)
                counter++;
            if(a[i][j+1]==1)
                counter++;
            if(a[i][j-1]==1)
                counter++;
            if(counter>=3)
                b[i][j]=1;
            counter=0;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            printf("%d ",b[i][j]);
        printf("\n");
    }


}


