//
// Created by Endrit on 2/6/2022.
//Three number n, m and k are read from SI.
//You task is to write a program that prints the first ten numbers in descending order from the interval from 0 - n, that contain the digit m, k times.
//If there are no such number, print a message WRONG PARAMETERS.
#include<stdio.h>

int main()

{
    int k, m, n,tmp;
    int numbersToPrint = 0;

    scanf("%d %d %d", &n, &m, &k);

    for(int i = n; i>0; i--)
    {
        tmp = i;
        int numberToReturn = 0;
        while(tmp)
        {
            if(tmp%10 == m){
                numberToReturn++;

            }

            tmp/=10;

        }

        if(numbersToPrint==10)
            break;
        if(numberToReturn == k)
        {
            printf("%d\n", i);
            numbersToPrint++;
        }
    }
    if(numbersToPrint==0)
        printf("WRONG PARAMETERS");
    return 0;
}


