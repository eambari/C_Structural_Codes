//
// Created by Endrit on 2/6/2022.
//Write a recursive function with an argument number x which will return 1 if every digit in the number is smaller than the previous digit, otherwise return 0.
//For example the number 54321 has digits in descending order, while the number 54123 does not.
//The number N is read from SI, afterwards N numbers are also read. For every number print 1 or 0 (in new line), if the numbers’ digits are in descending or ascending order respectfully.
#include <stdio.h>

int smaller(int n){

    if (n<=9){

        return 1;

    } else if ((n/10)%10 <= n%10){

        return 0;

    } else

        return 1* smaller(n/10);


}

int main(){

    int m, n, i;

    scanf ("%d", &m);

    for (i = 0; i < m; i++){

        scanf("%d", &n);

        if (smaller(n)){

            printf("1\n");

        } else printf("0\n");}

    return 0;
}


