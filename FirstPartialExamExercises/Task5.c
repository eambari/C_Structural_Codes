//
// Created by Endrit on 2/7/2022.
//From SI read one number that represents the today's date in format DDMMYYYY (DD-day, MM-month, YYYY-year). Then read one integer N, after you read N dates of birth in the given format. For each of the N read dates your program should print "YES" if on today's date (read in the beginning) the person with that date have more or equal to 18 years, otherwise should print "NO".
#include <stdio.h>
int main () {

    int today, n, x, i, todayYear,todayMonth,todayDay, xYear, xMonth, xDay, todayReverse, xReverse;

    scanf ("%d", &today);

    scanf ("%d", &n);

    todayYear = today % 10000;

    todayMonth = (today /10000)%100;

    todayDay = today/1000000;

    todayReverse = (todayYear*1000)+(todayMonth*100)+todayDay;

    for (i = 0; i < n; i++){

        xYear = 0;

        xMonth = 0;

        xDay = 0;

        xReverse = 0;

        scanf ("%d", &x);


        xYear = x % 10000;

        xMonth = (x /10000)%100;

        xDay = x/1000000;

        xReverse = (xYear*1000)+(xMonth*100)+xDay;

        if( (todayReverse-xReverse) >= 18000){

            printf("YES\n");

        } else printf("NO\n");


    }

    return 0;

}


