/*
Created by Endrit Ambari on 2022.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include<math.h>

typedef struct CertificateCov19{

    int day,month, year;
    char vaccine[50];
    int dozeNr;
}Covid;

typedef struct Patient{
    char name[50];
    char embg[13];
    Covid covid10;
}Patient;

/* void canGet(Patient *patients, int n, int day, int month, int year){
printf("Patients that can get a thrid dose on 20/4/2022 are:\n");
  for(int i = 0; i < n; i++){
    if(patients[i].covid10.dozeNr == 2){
    if(patients[i].covid10.year <= year){
        if(fabs(patients[i].covid10.month-month) >= 6 )

        printf("Name: %s - EMBG: %s\n", patients[i].name, patients[i].embg);
    }
   }
  }
}
*/
void canGet(Patient *patients, int n, int day, int month, int year){
    printf("Patients that can get a thrid dose on 20/4/2022 are:\n");
    for(int i = 0; i < n; i++){
        if(patients[i].covid10.dozeNr == 2){
            if(patients[i].covid10.year <= year){
                if(fabs(patients[i].covid10.month-month) >= 6 )

                    printf("Name: %s - EMBG: %s\n", patients[i].name, patients[i].embg);
            }
        }
    }
}

void print(Patient *patients, int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(patients[i].covid10.dozeNr == 3){
            count++;
        }
    }
    printf("%.2f%% of the patients have received a third dose of the vaccine\n", ((float)count/n)*100);
}


int main()
{
    int n, day, month, year;
    scanf("%d", &n);
    Patient patients[n];
    for(int i = 0; i < n; i++){
        scanf("%s %s %s", patients[i].name, patients[i].embg, patients[i].covid10.vaccine);
        scanf("%d/%d/%d", &patients[i].covid10.day, &patients[i].covid10.month, &patients[i].covid10.year);
        scanf("%d",  &patients[i].covid10.dozeNr);
    }

    scanf("%d/%d/%d", &day, &month, &year);

    canGet(patients, n, day, month, year);
    print(patients, n);
    return 0;
}
