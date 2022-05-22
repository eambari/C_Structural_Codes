//
// Created by Endrit on 2/6/2022.
//Implement the following functions:
//int digitsCount (int number) - a function that has one argument number and its result is the count of digits in that number.
//If number is 12345, the result would be 5.
//int getHalfOf (int number, char part) - a function that has two arguments: number and part. If part is L then the function result should be the left half of the number, but if part is R then the result should be the right part. If the number of digits of number is odd the middle digit is ignored.
//if number is 1234 and part is L, the result should be 12
//if number is 1234 and part is R, the result should be 34
//if number is 12345 and part is L, the result should be 12
//if number is 12345 and part is R, the result shoud be 45
//void printInRange (int a, int b, char part) - a function that should print all the numbers in the range from a to b whose left or right part (depending on the argument part) is divisible by the count of digits of the number.
//for example, if one of the numbers in the range is 1200 and part is L (left), then 12 is divisible by 4 (the count of digits), so 1200 should be printed.
#include<stdio.h>
#include<math.h>

int digitsCount (int number);

int getHalfOf (int number, char part);

void printInRange (int a, int b, char part);

int main ()
{
    int a, b;

    scanf ("%d %d", &a, &b);

    printf ("LEFT PARTS TEST:\n");

    printInRange(a, b, 'L');

    printf ("RIGHT PARTS TEST:\n");

    printInRange(a, b, 'R');

    return 0;
}

int digitsCount (int number)
{
    int count = 0;

    while (number){

        count++;

        number /= 10;

    }

    return count;

}
int getHalfOf (int number, char part)
{
    int counter = digitsCount(number);

    int divisor = 10;

    divisor = pow(divisor, counter/2);

    if (counter % 2 != 0){

        number *= 10;

        divisor *= 10;

        if (part == 'R'){

            number %= divisor;

        } else if (part == 'L'){

            number /= divisor;

        }

        return number/10;

    } else {

        if (part == 'R'){

            number %= divisor;

        } else if (part == 'L'){

            number /= divisor;

        }

    }

    return number;
}

void printInRange (int a, int b, char part){

    int i;

    for (i = a; i <= b; i++){

        if (getHalfOf(i, part) % digitsCount(i) == 0){

            printf("%d\n", i);

        }


    }

}


