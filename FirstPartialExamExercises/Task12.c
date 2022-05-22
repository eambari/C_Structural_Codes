//
// Created by Endrit on 2/7/2022.
//A whole number N greater then 0 is entered from the SI followed by N pairs of natural numbers greater than 10. Write a program that for every pair of entered numbers will check if the number obtained by moving the last digit of the first number on its first place is greater that the second number in the pair or not. Print YES if the condition is satisfied or NO if the condition is not satisfied on the standard output in a single line for each pair of numbers.
//(Example for moving the last digit of a number on its first place: 1234 -> 4123, 98700 -> 9870). If the numbers 3456 and 6210 are entered as a pair YES should be printed since 6345 > 6210.
#include <stdio.h>
int main ()
{

    int n, a, b, i, count, lastDigit, aReversed, tmp;

    scanf ("%d", &n);

    for (i = 0; i < n; i++){

        scanf ("%d%d", &a, &b);

        aReversed = 0;

        lastDigit = a%10;

        tmp = a/10;

        count = -1;

        while (a>0){

            a/=10;

            count++;

        } while (count>0){

            aReversed = lastDigit * 10;

            lastDigit = aReversed;

            count--;

        } aReversed += tmp;

        if (aReversed > b){

            printf("YES\n");

        } else printf ("NO\n");
    }

    return 0;

}

