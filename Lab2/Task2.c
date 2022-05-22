//
// Created by Endrit on 2/6/2022.
//Write a program that for a date read from SI (in the format DD MM YYYY) will print on standard output a message YES if the date is correct and possible, or NO if the date is not correct.
//When deciding whether the date is correct or not correct, you have to consider the following factors:
//is the month between January and December (1-12)
//does the number for days correspond with the number of days in the specified month
//if the month is February, is the year leap?
//Leap years are those years who are divisible with 400, or they are divisible with 4, but not with 100
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day,month,year;
    scanf("%d %d %d", &day,&month,&year);

    if (month>12||day>31||month<=0||day<=0)
    {
        printf("NO");
    }
    else
    {
        if (month==1||month==3||month==5||month==7||month==8||month==10||month==12)
        {
            printf("YES");
        }
        if (month==4||month==6||month==9||month==11)
        {
            if (day==31)
            {
                printf("NO");
            }
            else printf("YES");
        }
        if (month==2)
        {
            if ((year%4==0 && year%100!=0)||year%400==0)
            {
                if (day<=29)
                {
                    printf("YES");
                }
                else
                {
                    printf("NO");
                }
            }
            else if (day<29)
                printf("YES");
            else
                printf("NO");
        }
    }
    return 0;
}

