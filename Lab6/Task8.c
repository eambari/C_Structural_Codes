//
// Created by Endrit on 2/6/2022.
//Write a recursive function whose only argument is an integer x and will return 1 if every subsequent digit of x is greater than the previous digit, or 0 otherwise.
//For example, the digits of 12345 are in increasing order, but the digits of 12325 are not.
//Read an integer N from SI, then N numbers. For every number print YES or NO (in a new line), if the number's digits are in increasing order or not.
#include<stdio.h>

int increasing (int x){

    if (x<9){

        return 1;

    } else if ((x/10)%10 >= x%10){

        return 0;

    } else return 1*increasing(x/10);


}

int main(){

    int m, n;

    scanf ("%d", &m);

    while(m>0){

        scanf("%d", &n);

        if (increasing(n)){

            printf("DA\n");

        } else printf("NE\n");


        m--;}

    return 0;
}

