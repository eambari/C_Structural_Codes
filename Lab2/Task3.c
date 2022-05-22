//
// Created by Endrit on 2/6/2022.
//Write a program that for a three digit number read from SI will check if it is palindrome or not, and will print out an appropriate message. The message is "Palindrome" if it is, and "Not palindrome" if it's not. If the number is not three digit number, write the message "Wrong input".
#include<stdio.h>
int main()
{
    int number, firstDigit=0, lastDigit=0, sum=0, tmp;

    scanf ("%d", &number);
    tmp = number;

    if(number > 99 && number < 1000){

        lastDigit = number%10;
        firstDigit = number/100;
        number = (number/10)%10;
        sum = (((lastDigit*10) + number)* 10) + firstDigit ;


    }else{

        printf ("Wrong input");
        return 0;
    }

    if (sum == tmp){

        printf ("Palindrome");

    } else

        printf ("Not palindrome");



    return 0;

}

