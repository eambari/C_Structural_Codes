//
// Created by Endrit on 2/6/2022.
//A natural number n is read from SI. After that n sequences of numbers are being read as well from SI. Each sequence is defined with:
//number M (the count of numbers in the sequence)
//M numbers
//Your task is to print on standard output, for each sequence one of the three following messages:
//ARITHMETIC PROGRESSION
//GEOMETRIC PROGRESSION
//THE SEQUENCE IS NOT A PROGRESSION
//BOTH ARITHMETIC AND GEOMETRIC PROGRESSION
//A sequence of number is an arithmetic progression if the difference between any number and its predecessor is always the same.
//1 2 3 4 5 6 7 8 .. is an arithmetic progression.
//A sequence of number is a geometric progression if the quotient between any number and its predecessor is always the same.
//1 2 4 8 16 32 ... is a geometric progression.
#include <stdio.h>

int main()
{
    int n, m, n1, n2;
    int diff1;
    double diff2;
    int arit, geo;
    scanf("%d", &n);

    for (int i=0; i<n;i++)
    {
        arit=1;
        geo=1;
        scanf("%d", &m);

        scanf("%d%d", &n1, &n2);
        diff1 = n1-n2;
        diff2 = (double) n1/n2;

        for (int j=0; j<m-2; j++)
        {
            n1=n2;
            scanf("%d", &n2);

            if (diff1!=(n1-n2))
            {
                arit=0;
            }
            if (diff2!=((double)n1/n2))
            {
                geo=0;
            }
        }

        if ((arit==1)&&(!(geo==1)))
        {
            printf("ARITHMETIC PROGRESSION\n");
        }
        if ((geo==1)&&(!(arit==1)))
        {
            printf("GEOMETRIC PROGRESSION\n");
        }
        if ((arit==1)&&(geo==1))
        {
            printf("BOTH ARITHMETIC AND GEOMETRIC PROGRESSION\n");
        }
        if ((arit==0)&&(geo==0))
        {
            printf ("THE SEQUENCE IS NOT A PROGRESSION\n");
        }
    }

    return 0;
}


