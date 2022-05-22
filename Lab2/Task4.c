//
// Created by Endrit on 2/6/2022.
//Write a program that reads mobile phone number from SI in the following format XXYYYZZZ (ex. 71298486). The program should print the number in the following format: XXX/YYY-ZZZ (ex. 071/298-486) and should print the name of the operator following these rules:
//070/071/072 - T-mobile,
//075/076/077/078 - A1
//079 - LycaMobile
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,firstThree,first,second,third;
    scanf("%d", &number);
    first=number/1000000;
    third=number%1000;
    second=(number/1000%1000);
    firstThree=first%10;
    if (firstThree==0||firstThree==1||firstThree==2)
        printf("%03d/%03d-%03d T-mobile", first,second,third);
    else if (firstThree==5||firstThree==6||firstThree==7||firstThree==8)  printf("%03d/%03d-%03d A1", first,second,third);
    else if (firstThree==9)  printf("%03d/%03d-%03d LycaMobile", first,second,third);
    return 0;
}

