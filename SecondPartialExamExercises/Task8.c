//
// Created by Endrit on 2/7/2022.
//The dimensions of one matrix (m,n <= 100), and then the elements of the matrix are entered from the keyboard. Make a transformation of the matrix so that the middle element in each column is replaced by the difference (by absolute value) of the sum of the elements in the first half of the column and the sum of the elements in the second half of the column. If the matrix has even number of rows, the value of the middle two elements should be changed. The middle element(s) are included when calculating the sum (in the case of an odd number of rows, the middle element is included when calculating both of the sums (upper and lower sum)!). Print the transformed matrix on the standard output.
//Example
//Input:
//4 4
//13−54210210723532103
//Output:
//15542001071153883
#include <stdio.h>
#include <stdlib.h>
int main () {
    int n,m;
    int sumu=0,sumd=0;
    scanf("%d %d",&n,&m);
    int a[100][100];
    for(int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            scanf("%d",&a[i][j]);
        }
    }
    //odd
    if(n%2!=0){
        for(int i=0; i<m; i++){
            for (int j=0; j<n; j++){
                if(j<n/2)
                    sumu+=(a[j][i]);
                if(j>n/2)
                    sumd+=(a[j][i]);
            }
            int difference=abs(sumu-sumd);
            a[m/2][i]=difference;
            sumu=0;
            difference=0;
            sumd=0;
        }
    }
    //even
    if(n%2==0){
        for(int i=0; i<m; i++){
            for (int j=0; j<n; j++){
                if(j<=n/2-1)

                    sumu+=(a[j][i]);
                if(j>=n/2)

                    sumd+=(a[j][i]);
            }
            int difference=abs(sumu-sumd);
            a[n/2][i]=difference;
            a[n/2-1][i]=difference;
            sumu=0;
            difference=0;
            sumd=0;

        }
    }


    for(int i=0; i<n; i++){
        for (int j=0; j<m; j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }



}
