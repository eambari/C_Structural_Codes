/*
Created by Endrit Ambari on 2022.
*/
#include<stdio.h>
#include<string.h>
typedef struct SkiLift{
    char name[15];
    int maxusers;
    int inFunction;
}SkiLift;

typedef struct SkiCenter{
    char name[20];
    char country[20];
    SkiLift skilifts[20];
    int n;
}SkiCenter;

void biggestCapacity(SkiCenter *sc, int n){
    SkiCenter max;
    int sum=0, tempsum=0;
    for(int i=0; i<n; i++){
        tempsum=0;
        for(int j=0; j<sc[i].n; j++){
            if(sc[i].skilifts[j].inFunction){
                tempsum=tempsum+sc[i].skilifts[j].maxusers;
            }
        }
        if(tempsum>sum){
            sum=tempsum;
            max.n=sc[i].n;
            strcpy(max.name,sc[i].name);
            strcpy(max.country,sc[i].country);
        }
        if(sum==tempsum){
            if(sc[i].n>max.n){
                strcpy(max.name,sc[i].name);
                strcpy(max.country,sc[i].country);
            }
        }
    }

    printf("%s\n%s\n%d",max.name,max.country,sum);
}

int main()
{
    int n;
    scanf("%d", &n);
    SkiCenter ski[n];
    for (int i = 0; i < n; i++){

        scanf("%s %s %d",ski[i].name,ski[i].country,&ski[i].n);

        for (int j = 0; j < ski[i].n; j++){
            scanf("%s %d %d",ski[i].skilifts[j].name,&ski[i].skilifts[j].maxusers,&ski[i].skilifts[j].inFunction);
        }

    }
    biggestCapacity(ski,n);

    return 0;
}