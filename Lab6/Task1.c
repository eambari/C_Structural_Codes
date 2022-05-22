//
// Created by Endrit on 2/6/2022.
//Write a recursive function ascending that has two arguments:
//an array of integers
//number n that represents the size of the array
//and its result is an integer:
//1 if the array is sorted in ascending order
//0 otherwise
//Examples:
//Array = {1,2,3,4,5,6}
//Output = 1
//Array = {1,1,2,2,0,0}
//Output = 0
#include <stdio.h>

int ascending(int array[], int n){

    if(array[n-2]>=array[n-1]){

        return 0;
    } else {return 1;}

    return ascending(array, n-1);
}

int main(){

    int i, n;

    int array[100];

    scanf ("%d", &n);

    for (i = 0; i < n; i++){

        scanf("%d", &array[i]);

    }

    if (ascending(array, n)){

        printf("YES");
    } else printf ("NO");

    return 0;
}


