//
// Created by Endrit on 2/7/2022.
//From SI are read N pairs of integers, where the first number is the students' points, and the second is the max. points. Write a program where for each pair (points, max points), will print the students success in percentage and his grade following these rules:
//if the student has 90% or more - "10".
//if the student has 80% or more - "9".
//if the student has 70% or more - "8".
//if the student has 60% or more - "7".
//if the student has 50% or more - "6".
//If the student has less than 50% print "FAIL".

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int n, grade;
    float studentPoints,maxPoints, points;

    scanf ("%d", &n);

    for (int i = 0; i < n; i++){

        points = 0;
        grade = 0;

        scanf ("%f%f", &studentPoints, &maxPoints);

        points = (studentPoints/maxPoints) * 100;
        grade = (points/10)+1;
        if (grade < 5)
        {
            printf ("%.2f FAIL\n", points);
            continue;
        }
        else if (grade > 10){

            grade = 10;
        }

        printf ("%.2f %d\n", points, grade);


    }
    return 0;
}


