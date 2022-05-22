//
// Created by Endrit on 2/7/2022.
//Write a program in which from the standard input you read one positive integer z, and afterwards you read one after another pairs of integers (a, b). Thereby, the loop should end if you read the pair (0, 0). The program should calculate how many times the integer z is equal to the sum of the pairs a and b, as well as the percentage of the pairs (a,b) that give sum equal to z (NOTE: the pair (0,0) is not taken into account when doing calculations!).
#include <stdio.h>
int main() {


    int z,a,b;
    float i=0.0, count=0;
    scanf("%d",&z);
    do {
        scanf("%d %d" ,&a,&b);
        i++;
        if ((a+b) == z) {
            count++;
        }


    }

    while (a||b);
    i=i-1;
    printf("You entered %.0f pair of numbers whose sum is %d\n",count,z);
    printf("The percentage of pairs with sum %d is %.2f%%", z,(count/i)*100);
    return 0;
}


