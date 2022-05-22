//
// Created by Endrit on 2/7/2022.
//Let A = {a1, a2, .. a_n} is an array of integers. The size of the array n and the elements of the array are read from SI. Write a program that will transform the array so each element of the original array is replaced with the number of appearance of the least significant digit (the right most) in the number itself. Print the result array on the standard output.
//Compute the count of given digit in a number with separate recursive function.
//Example:
//Input:
//5
//1 11 1121 111222112 22222
//Output:
//1 2 3 4 5
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int lastDigitOccurrence(int digit, int lastDigit){

    if(digit == 0){

        return 0;

    } else if (digit%10 == lastDigit){

        return 1 + lastDigitOccurrence(digit/10, lastDigit);
    }
    else

        return lastDigitOccurrence(digit/10, lastDigit);

}

int main()
{

    int i, n;

    int array[100];

    scanf ("%d", &n);

    for (i = 0; i < n; i++){

        scanf ("%d", array+i);

    }

    for (i = 0; i < n; i++){

        int lastDigit = array[i]%10;

        array[i] = lastDigitOccurrence(array[i], lastDigit);

    }

    for (i = 0; i < n; i++){

        printf ("%d ", *(array+i));

    }


    return 0;
}

