//
// Created by Endrit on 2/6/2022.
//An integer N is read from SI. Afterwards N arrays of integers (with maximum length of 100 elements) are read from SI. For each array, firstly the size of the array is read, and then the elements of the array.
//Your task is to write a program which for each array read from SI will print the percentage of equal symmetric numbers in the array. Symmetric elements in an array are the first and the last, the second and element before the last, etc.
//If the array has odd number of elements, then the middle element is considered both symmetric and equal.
//Input:
//3
//5 7 2 5 2 8
//6 1 2 3 3 1 1
//8 8 4 8 3 2 1 4 8
//Output and explanation:
//60.00% (2,2,5 are symmetrical and equal -> 3/5 elements -> 60%)
//66.67% (1,1,3,3 are symmetrical and equal -> 4/6 elements -> 66.67%)
//50.00% (8,8,4,4 are symmetrical and equal -> 4/8 elements -> 50.00%)
#include<stdio.h>

int main() {

    int n, m, a[100], i, count;

    scanf ("%d", &n);

    while(n){

        scanf ("%d", &m);

        count = 0;

        for (i= 0; i < m; i++){

            scanf ("%d", &a[i]);

        }

        if (m%2==0){

            for (i = 0; i < m/2; i++){

                if (a[i] == a[(m-1)-i]){

                    count+=2;

                }

            }

        } else {

            count++;

            for (i = 0; i < (m-1)/2; i++){

                if (a[i] == a[(m-1)-i]){

                    count+=2;

                }

            }


        } printf("%.2f%%\n", (((float)count/m)*100));

        n--;
    }
    return 0;
}

