//
// Created by Endrit on 2/7/2022.
//Write the following functions that will work with arrays of decimal numbers (floats):
//float max (float * array, int n) - function whose result is the max of the array
//float min (float * array, int n) - function whose result is the min of the array
//void normalize (float * array, int n)- function that does not return a result, but instead - the function normalizes each element in the array using the formula:
//x = (x-min(niza)) / (max(niza) - min(niza))
//void sort (float * array, int n)- function that will sort the array in descending order!
//Do not change the main function and do not use operator [ ] to access an element from an array!
#include<stdio.h>

float max (float * array, int n){

    float maxn = *array;

    for (int i = 0; i < n; i++){

        if(*(array+i) > maxn){

            maxn = *(array+i);

        }
    }  return maxn;
}

float min (float * array, int n){

    float minx = *array;

    for (int i = 0; i < n; i++){

        if(*(array+i) < minx){

            minx = *(array+i);

        }
    }  return minx;
}

void normalize (float * array, int n){

    float maxn = max (array, n);

    float minx = min (array, n);

    for (int i = 0; i < n; i++){

        *(array+i) = ((*(array+i) - minx) / (maxn - minx));
    }
}

void sort (float * array, int n){

    int i, j;

    float swap = 0;

    for (i = 0; i < n; i++){

        for (j = i+1; j < n; j++){

            if (*(array+i)<*(array+j)){

                swap = *(array+i);

                *(array+i) = *(array+j);

                *(array+j) = swap;
            }
        }
    }
}

int main(){

    int n, i;

    float array[200];

    scanf ("%d", &n);

    for (i = 0; i < n; i++){

        scanf ("%f", array+i);

    }

    printf ("MAX -> %.3f\n", max (array, n));
    printf ("MIN -> %.3f\n", min (array, n));

    normalize (array, n);
    sort (array, n);

    for (i = 0; i < n; i++){

        printf ("%.3f ", *(array+i));

    }

    return 0;
}

