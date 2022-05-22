//
// Created by Endrit on 2/6/2022.
//From the SI read a whole number K, after which N integers are read. Write a program that for each read number from SI will print out the digits that are greater than K, as well as the sum of the digits that are printed. The printing of digits that are greater than K should be realised with a seperate recursive function.
//Example: If K = 5, then for the number 8423871 should print out 887 : 23
#include<stdio.h>

int sum (int n, int k){

    if (n == 0){

        return 0;

    } else if (n%10 > k){

        return n%10 + sum(n/10, k);

    } else return sum(n/10, k);

}

int print (int n, int k){

    int lastDigit = n%10;

    if (n== 0){

        return 0;

    }  if (lastDigit > k){

        return lastDigit + 10*(print(n/10, k));

    } else return print(n/10, k);


}


int main()
{
    int n, m, k, bigger, sumOf;

    scanf("%d", &k);
    scanf("%d", &m);

    while (m>0){

        scanf ("%d", &n);

        sumOf = sum (n, k);

        bigger = print (n, k);

        m--;

        printf ("%d : %d\n", bigger, sumOf);

    }

    return 0;
}


