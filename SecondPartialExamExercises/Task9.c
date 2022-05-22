//
// Created by Endrit on 2/7/2022.
//Write a recursive function that will find the number of odd numbers of an array of integers. The function accepts as an arguments the array for which the number of odd numbers is required and the total number of elements in the array. The function is given with the following prototype:
//int Odd (int a [], int n);
//Also write the main () function to test the Odd function.
#include <stdio.h>

int Odd (int a[], int n) {
    if (n<0)
        return 0;
    if (a[n]%2!=0)
        return 1+(Odd(a,n-1));

    else
        return (Odd(a,n-1));

}


int main () {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("%d",Odd(a,n-1));

}
