//
// Created by Endrit on 2/6/2022.
//A natural number 'N' is read from the standard input. Then, N pairs of integers (air measurements of PM10 and PM2.5 particles from the corresponding measuring station for a given municipality) are read. Your task is to calculate the mean value of PM10 and PM2.5 particles only from those measuring stations that are in use. One measuring station is considered to be out of use if it sends a pair of measurements -1 -1.
//Note: The result should be printed with 2 decimal places.
//Example 1:
//Input:
//5 (number of pairs of integers)
//35 56 (the first pair)
//-1 -1 (the second pair ...)
//0 0
//102 189
//200 225
//Output:
//PM10: 84.25 (the mean value of PM10 particles)
//PM2.5: 117.50 (the mean value of PM2.5 particles)
//Example 2:
//Input:
//1
//-1 -1
//Output:
//PM10: Can not be calculated
//PM2.5: Can not be calculated
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,pm10,pm25,countpm10=0,countpm25=0,numbers=0,flag=0;
    float meanpm10=0,meanpm25=0;

    scanf ("%d", &n);

    for (int i = 0;i<n;i++){

        pm10 = 0, pm25 = 0;

        scanf ("%d%d", &pm10,&pm25);

        if (pm10 != -1 && pm25 != -1){

            meanpm10+= pm10;
            meanpm25+= pm25;
            numbers++;
            flag = 1;
        }
    }
    if (!flag){
        printf("PM10: Can not be calculated\nPM2.5: Can not be calculated\n");
    } else {
        meanpm10/=numbers;
        meanpm25/=numbers;
        printf("PM10: %.2f\nPM2.5: %.2f", meanpm10, meanpm25);


    }
    return 0;
}


