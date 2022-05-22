//
// Created by Endrit on 2/7/2022.
//Read from SI two integers a and b. Write a program that will print all numbers from a to b (a < b), such as the number created as a product of the digits from the next to the first to the next to last digit (middle digits = the digits that will remain if we remove the first and the last digit from the original number) is divisible with the number created from the last and the first digit. Do not print the numbers where the product of the middle digits is 0. At the end print the count of such numbers.
//When printing out the numbers, next to each number that satisfies the condition, print the equation of that condition, for example: 55650 -> (150 == 50 * 3), where 150 = 5 * 6 * 5 and 50 is constructed from 5 (the first digit) and the 0 (the last digit of the number)
#include <stdio.h>
int main () {

    int a, b, i, firstDigit, lastDigit, tmp, sumOfMiddleDigit, firstAndLast, middleDigit, counter = 0;

    scanf ("%d%d", &a, &b);

    for (i=a;i<b;i++){

        lastDigit = i%10;

        tmp=i/10;

        sumOfMiddleDigit = 1;

        while (tmp>=10){

            firstDigit = tmp/10;

            middleDigit = tmp%10;

            sumOfMiddleDigit *= middleDigit;

            tmp/=10;

        } firstAndLast = firstDigit*10+lastDigit;

        if (sumOfMiddleDigit == 0){

            continue;

        } else if (sumOfMiddleDigit%firstAndLast==0){

            counter++;

            printf ("%d -> (%d == %d * %d)\n", i, sumOfMiddleDigit, firstAndLast, sumOfMiddleDigit/firstAndLast );


        }


    } printf ("%d", counter);

    return 0;

}


