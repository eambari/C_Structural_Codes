/*
Created by Endrit Ambari on 2022.
*/
#include<stdio.h>
#include <string.h>

typedef struct Transaction{

    int day, month, year, amount;
    char currency[3];
}Transaction;

void print(Transaction *t, int n) {
    int j=1;
    int sum=0;
    for(int i=0; i<n; i++) {
        if((strcmp(t[i].currency,"MKD")==0)&&t[i].amount>1000) {
            if (t[i].year<=2015&&t[i].year>=2013) {

                sum=sum+t[i].amount;
                printf("%d. %02d/%02d/%d %d %s",j++,t[i].day,t[i].month,t[i].year,t[i].amount, t[i].currency);
                printf("\n");

            }
        }

    }
    printf("Total: %d MKD",sum);
}

int main() {
    int n;

    scanf("%d",&n);
    Transaction transactions[n];
    for(int i=0; i<n; i++) {
        scanf("%d/%d/%d %d %s",&transactions[i].day,
              &transactions[i].month,
              &transactions[i].year,
              &transactions[i].amount,
              transactions[i].currency);
    }
    print(transactions,n);
    return 0;
}