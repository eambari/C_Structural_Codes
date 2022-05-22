//
// Created by Endrit on 2/7/2022.
//Firstly read the dimension of one matrix (m, n <= 100) from the standard input, and then the elements of the matrix. Generate an array (with at most m x n elements) of the elements of the matrix that will contain the elements of each row that appear exactly once in that row. The order of writing the elements in the array corresponds to the order of the rows and the order of the elements within the row. If the newly generated array has no elements, print N, otherwise, print the elements of the array.
//Example:
//Input:
//3 6
//111212223324435536
//Output:
//1 3 4 5 1 2 3 4 5 6
#include <stdio.h>
int main ()
{
    int m,n,i,j,flag=1;
    int a[100][100];
    int x=0;

    scanf("%d",&m);
    scanf("%d",&n);
    int b[n*m];
    for (i=0; i<m; i++) {
        for(j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    }


    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            flag=1;
            for (int k=0; k<n; k++) {
                if (a[i][k] == a[i][j]&&j!=k) {
                    flag=0;
                    break;
                }
            }
            if (flag) {
                b[x]=a[i][j];
                x++;
            }

        }

    }



    if (x>0)
        for (i=0; i<x; i++)
            printf("%d ",b[i]);
    if (x==0)
        printf("N");
    return 0;

}
