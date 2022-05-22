/*
Created by Endrit Ambari on 2022.
*/
#include <stdio.h>
#include <string.h>
#define WEEKS 4
#define DAYS 5

// here the struct WorkingWeek

typedef struct WorkingWeek{

    int hours[DAYS];
    int week;
}WW;

typedef struct Worker{

    char name[50];
    WW weeks[WEEKS];
}W;

int maxWeek(W *w){

    int i, j, sum, maxSum, max;
    for(i = 0; i < WEEKS; i++){
        sum = 0;
        for(j = 0; j < DAYS; j++){
            sum+=w->weeks[i].hours[j];
        }
        if(sum > maxSum){
            maxSum = sum;
            max = i+1;
        }
    }
    return max;
}

void table(W *workers, int n){
    printf("Wor\t1\t2\t3\t4\tTotal\n");
    int i, sumDay, sumWeek;
    for (i = 0; i < n; ++i) {
        printf("%s\t", workers[i].name);
        int j;
        sumWeek = 0;
        for (j = 0; j < WEEKS; ++j) {
            int k;
            sumDay = 0;
            for (k = 0; k < DAYS; ++k) {
                sumDay+=workers[i].weeks[j].hours[k];
            }
            printf ("%d\t", sumDay);
            sumWeek += sumDay;
        }
        printf("%d", sumWeek);
        printf("\n");
    }

}
int main() {
    int n;
    scanf("%d", &n);
    W workers[n];
    int i;
    for (i = 0; i < n; ++i) {
        scanf("%s", workers[i].name);
        int j;
        for (j = 0; j < WEEKS; ++j) {
            int k;
            for (k = 0; k < DAYS; ++k) {
                scanf("%d", &workers[i].weeks[j].hours[k]);
            }

        }
    }
    printf("TABLE\n");
    table(&workers, n);
    printf("MAX WEEK OF WORKER: %s\n", workers[n / 2].name);
    printf("%d\n", maxWeek(&workers[n / 2]));
    return 0;
}