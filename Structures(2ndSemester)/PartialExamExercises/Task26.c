/*
Created by Endrit Ambari on 2022.
*/
#include <stdio.h>
#include <string.h>

typedef struct Transaction{
    int day,month,year, amount;
    char currency[3];
}Transaction;

void print(Transaction *t, int n) {
    int j=1;
    int sum=0;
    for(int i=0; i<n; i++) {
        if((strcmp(t[i].currency,"USD")==0)&&t[i].amount<5000) {
            if (t[i].month<=3) {
                sum=sum+t[i].amount;
                printf("%d. %02d/%02d/%d %d %s",j++,t[i].day,t[i].month,t[i].year,t[i].amount, t[i].currency);
                printf("\n");
            }
        }
    }
    printf("Total: %d USD",sum);
}



int main(){
    int n;

    scanf("%d",&n);
    Transaction transactions[n];
    for(int i=0; i<n; i++) {
        scanf("%s %d %d/%d/%d",transactions[i].currency,
              &transactions[i].amount,
              &transactions[i].day,
              &transactions[i].month,
              &transactions[i].year);
    }

    print(transactions,n);
    return 0;
}