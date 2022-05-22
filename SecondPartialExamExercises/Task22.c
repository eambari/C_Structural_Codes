//
// Created by Endrit on 2/7/2022.
//Read an array of N integers from standard input (first read the number N than the elements). Than call a recursive function on the array that will change on the following way:
//a0=aN−1=max(a0,aN−1)
//a1=aN−2=max(a1,aN−2)
//where max is a function that returns the maximum of the two numbers. The function should return the number of switched elements. Then print that number and the changed array.
#include <stdio.h>

int max(int a, int b){

    if(a > b){

        return a;

    } else return b;

}

int sort(int *a, int n,int size) {
    static int i=0;
    static int k=0;
    if(size/2-1==n)
        return k;
    if(*(a+i)!=*(a+n)) {
        if(*(a+i)!=*(a+n)&&*(a+i)<*(a+n)) {
            *(a+i)=*(a+n)=max(*(a+i),*(a+n));
            k++; }
        else
            *(a+i)=*(a+n)=max(*(a+i),*(a+n));


    }
    i++;
    return sort (a,n-1,size);

}


int main() {

    int n, i;

    int array[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++){

        scanf ("%d", &array[i]);

    }

    printf ("%d\n", sort(array, n-1, n));

    for(i = 0; i < n; i++){

        printf ("%d ", array[i]);

    }

    return 0;
}

