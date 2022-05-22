//
// Created by Endrit on 2/7/2022.
//One number is interesting if his flipped number is divisible by the number of digits it contains. The flipped number is composed from the same digits, but in opposite order (ex. 653 is flipped of the number 356). Read from SI one integer n ( n > 9). Find and print the largest integer small than n that is "interesting". If the read number is not valid print a message "The number is invalid".
#include <stdio.h>
int main () {

    int n, i, tmp, reverse, counter, interesting = 0;

    scanf ("%d", &n);

    for (i = n-1; i >= 9; i--){

        reverse = 0;

        counter = 0;

        tmp = i;

        while(tmp!=0){

            reverse = (reverse * 10) + (tmp%10);

            counter++;

            tmp/=10;

        }

        if (reverse%counter==0){

            printf ("%d", i);

            interesting = 1;

            break;

        }


    } if (interesting == 0){

        printf ("The number is invalid");

    }

    return 0;

}


