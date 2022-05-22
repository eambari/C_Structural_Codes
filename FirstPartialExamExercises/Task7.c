//
// Created by Endrit on 2/7/2022.
//Read from SI one integer n. From the integers smaller than n, find the one with maximum sum of divisors. Do not count the number itself in the sum of divisors.
#include <stdio.h>

int main () {

    int n, divisor, i, tmp, sum=0, flag=0, max;

    scanf ("%d", &n);

    for (i = n-1; i>0; i--){

        tmp=i;

        divisor=tmp-1;

        while (divisor){

            if(tmp%divisor == 0){

                sum+=divisor;

            } divisor--;

        } if (sum>flag){

            flag = sum;

            max = tmp;

            sum = 0;


        } else {

            sum = 0;

        }

    }

    printf("%d", max);

    return 0;

}


