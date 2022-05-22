//
// Created by Endrit on 2/6/2022.
//Write a program that reads from standard input two floating point numbers (mass in kg and height in cm) and computes and prints out to standard output the body mass index using the following forumla:
//$BMI = \frac{masa}{visina * visina}$
//The height should be converted from centimeters to meters.
#include <stdio.h>

int main()
{
    float mass, height, bodyMass;

    scanf ("%f", &mass);
    scanf ("%f", &height);
    height = height / 100;
    bodyMass = (mass/(height * height));
    printf ("%.2f", bodyMass);


    return 0;
}

