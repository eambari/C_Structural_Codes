//
// Created by Endrit on 2/7/2022.
//Read from SI unknown number of triplets of integers (three integers). The reading ends when the program can not read successfully read three integers. For each triplet of integers print out the two of them that have the minimum difference between them. First print the smaller one, and then the bigger integer. If two pairs of integers in the triplet have equal difference, than print out all the integers, ordered from the smallest to the largest.
//Example: if 5 1 7 is entered -> 5 - 1 = 4, 7 - 5 = 2, 7 - 1 = 6 -> 2 is the smallest difference -> 5 7 should be printed
//Input:
//5 1 7
//10 2 18
//Output:
//5 7
//2 10 18
#include <stdio.h>
int main ()
{
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c))
    {

        if(b>a)
        {
            a=a+b;
            b=a-b;
            a=a-b;
        }
        if(c>b)
        {
            b=b+c;
            c=b-c;
            b=b-c;
        }
        if(b>a)
        {
            a=a+b;
            b=a-b;
            a=a-b;
        }
        if(a-b>b-c)
            printf("%d %d\n",c,b);
        if(a-b<b-c)
            printf("%d %d\n",b,a);
        else if(a-b==b-c)
            printf("%d %d %d\n",c,b,a);
    }

    return 0;

}

