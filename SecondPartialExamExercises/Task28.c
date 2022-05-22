//
// Created by Endrit on 2/7/2022.
//Read the dimensions M and N (not bigger than 100) and the values (whole numbers) of one matrix A_ {MxN} from the standard input. Print out the index of the first column that has the smallest sum of all of its elements.
#include <stdio.h>
int main () {

    int m,n;
    scanf("%d %d",&m,&n);
    int a[100][100];
    int i,j,b=0;
    int sum=0;
    int temp;
    int tempsum;
    int lowest=0;
    for (i=0; i<m; i++){
        for(j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    }
    for(j=0; j<m; j++){
        sum=sum+a[j][0];
    }
    tempsum=sum;
    sum=0;

    for (i=0; i<n; i++){
        for(j=0; j<m; j++){
            sum=sum+a[j][i];
            temp=i;
        }
        if(sum<tempsum){
            tempsum=sum;
            lowest=temp;

        }
        sum=0;
    }


    printf("%d",lowest);

}
