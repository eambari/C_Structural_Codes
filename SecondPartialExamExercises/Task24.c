//
// Created by Endrit on 2/7/2022.
//N positive integers are entered from the standard input and stored in an array a (N <100)**. Also, a single-digit integer **k** is entered. Write a function that will find the maximum of the abbreviated numbers of the elements in the array **a** and provide a call to that function in the main () function. A given element of the array is abbreviated as follows: all digits smaller than or equal to **k are deleted from the number.
//For example: If k = 3 and a[0] = 12345, then abbreviated a[0] becomes 45, if a[1] = 458763, a[1] becomes 45876, and a[2] = 112 is shortened to a[2] = 0. The maximum abbreviated number is 45876.
#include <stdio.h>

int abbreviated(int n, int k){

    int lastDigit = n%10;

    if(n == 0){

        return 0;

    } if(lastDigit > k){

        return lastDigit + 10*(abbreviated(n/10,k));

    } else return abbreviated(n/10,k);

}


int sort (int *array, int n, int k){

    int max = 0;

    for (int i = 0; i < n; i++){

        array[i] = abbreviated(array[i], k);

        if (array[i] > max){

            max = array[i];

        }

    }

    return max;

}


int main() {

    int n, i, k;

    int array[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++){

        scanf ("%d", &array[i]);

    }

    scanf ("%d", &k);

    printf ("%d", sort(array, n, k));

    return 0;
}

