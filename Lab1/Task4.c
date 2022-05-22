//
// Created by Endrit on 2/6/2022.
//Write a program that for given integer (number of seconds) read from standard input, will print out the hours, minutes and seconds.
#include <stdio.h>

int main()
{
    int seconds, minutes, hours;
    scanf ("%d", &seconds);
    hours = seconds/3600;
    seconds = seconds % 3600;
    minutes = seconds/60;
    seconds = seconds % 60;
    printf ("%d:%.2d:%.2d",hours, minutes, seconds);

    return 0;
}
