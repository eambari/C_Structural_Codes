//
// Created by Endrit on 2/7/2022.
//Write the following functions:
//void increment (int a) - function that will increment the value of a by 1.
//void decrement (int a) - function that will decrement the value of a by 1.
//void compare (int a, int b, char operator, int result) - function that will do a specific comparison between a and b, based on the value of operator, and the result from the comparison will be saved in result. The operator can be:
//>
//<
//= (stands for ==)
//Do not change the main function except in the parts where it is explicitly stated
#include<stdio.h>

void increment (int *a){

    *a+=1;

}
void decrement (int *b){

    *b-=1;

}
void compare (int *a, int *b, char operatr, int *result){


    switch (operatr)
    {
        case '>':

            if (*a > *b){

                *result = 1;}
            else *result = 0;
            break;

        case '<':

            if (*a < *b){

                *result = 1;}
            else *result = 0;
            break;

        case '=':

            if (*a == *b){

                *result = 1;}
            else *result = 0;
            break;
    }


}

int main()
{
    int a, b, result = 0;

    scanf("%d %d", &a, &b);

    increment(&a);
    decrement(&b);

    printf("Incremented a: %d\n", a);
    printf("Decremented b: %d\n", b);

    char operatr = '>';

    switch (operatr)
    {
        case '>':

            compare(&a, &b, operatr, &result);

            printf ("%d %c %d -> %d\n", a, operatr, b, result);

        case '<':

            operatr = '<';

            compare(&a, &b, operatr, &result);

            printf ("%d %c %d -> %d\n", a, operatr, b, result);

        case '=':

            operatr = '=';

            compare(&a, &b, operatr, &result);

            printf ("%d %c %d -> %d\n", a, operatr, b, result);

            break;

    }



    return 0;
}

