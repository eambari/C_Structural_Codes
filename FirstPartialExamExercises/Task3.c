//
// Created by Endrit on 2/7/2022.
//Using the characters + and - form a square image with "width" n (n > 2) that represent square of the chars -, enclosed by a square of chars + (view examples). For given n, print the appropriate image.
//Attention: do not print additional characters as empty spaces, or unnecessary new line... The image ends with new line char. Do not use any matrix or arrays because n is not limited.
#include <stdio.h>

int main()

{
    int width;

    scanf ("%d", &width);

    if (width > 2){

        int row = 0;

        for (int i = 0; i < width; i++){

            int column = 0;

            for (int j = 0; j < width; j++){

                if (column == 0 || column == (width-1) || (row == 0 || row == (width-1))){

                    printf ("+");

                }  else {

                    printf ("-");

                }  column++;

            }

            printf ("\n");

            row++;

        }

    }

    return 0;

}

