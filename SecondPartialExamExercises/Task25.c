//
// Created by Endrit on 2/7/2022.
//N positive integers are entered from the standard input and are stored in an array (N <100). All elements that meet the next criteria should be presented on the standard output in the same order that they have appeared on the standard input. The criteria is following: the most important digit (the digit on the first place) is odd and the least important digit is even. If, no such number was entered, you should print out "No such elements!" message.
//The implementation of checking the criteria should be performed in a separate function (recursive function for additional 5 points).
#include <stdio.h>

int isImportant(int n){

    if ((n%10)%2 != 0){

        return 0;

    } while (n>=9){

        n/=10;

    } if (n%2==0){

        return 0;

    }

    return 1;

}

int main() {

    int n, i, flag = 0;

    int array[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++){

        scanf ("%d", &array[i]);

    }

    for(i = 0; i < n; i++){

        if(isImportant(array[i])){

            flag = 1;

            printf("%d\n",array[i]);

        }

    }

    if (flag == 0){

        printf ("No such elements!");
    }

    return 0;
}

