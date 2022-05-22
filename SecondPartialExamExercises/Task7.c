//
// Created by Endrit on 2/7/2022.
//Read from standard input the dimensions of a matrix (m < 100 and n < 100) which contains only zeros and ones. Then read the elements of the matrix.
//Read the coordinates of one element of the matrix. If the element of read position is 0, then it should become 1 and:
//all zeros above that element to the first element with value 1 orthetart of the column,
//all zeros bellow that element to the first element with value 1 or of the column,
//all zeros left from that element to the first element with value 1tohe begin of the row and
//all zeros right from that element to the first element with value 1e end of the row.
//If the element of the given position is 1 than the matrix stays unchange
//Print the changed matrix.
//Example:
//For given matrix Аm,n:
//⎛101100110011111000100100100011100001010000⎞
//and coordinates 1 and 2 (the red element) the result matrix is:
//⎛111100111011111111100110100011100001010000⎞
#include<stdio.h>

void change (int array[100][100], int m, int n, int a , int b)
{

    int i = 0;

    array[a][b] = 1;

    for(i = a+1; i < m; i++){

        if(array[i][b] == 1){

            break; }

        else array[i][b] = 1;

    }

    for(i = b+1; i < n; i++){

        if(array[a][i] == 1){

            break;}

        else array[a][i] = 1;

    }
    for(i = a-1; i >= 0; i--){

        if(array[i][b] == 1){

            break; }

        else array[i][b] = 1;

    }
    for(i = b-1; i >= 0; i--){

        if(array[a][i] == 1){

            break;}

        else array[a][i] = 1;

    }
}



int main(){

    int m, n, i, j, a, b;

    int array[100][100];

    scanf ("%d %d", &m, &n);

    for(i = 0; i < m; i++){

        for(j = 0; j< n; j++){

            scanf ("%d", &array[i][j]);

        }

    }
    scanf ("%d %d", &a, &b);

    if (array[a][b] == 1){

        for(i = 0; i < m; i++){

            for(j = 0; j< n; j++){

                printf ("%d ", array[i][j]);

            }
            printf ("\n");
        }
    }
    else {

        change(array, m, n, a ,b);

        for(i = 0; i < m; i++){

            for(j = 0; j < n; j++){

                printf ("%d ", array[i][j]);

            }
            printf ("\n");
        }

    }


    return 0; }



