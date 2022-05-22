//
// Created by Endrit on 2/7/2022.
//From SI read N strings not longer than 80 chars. At the beginning of the program read two integers:
//N - number of strings you are going to read
//X - shifting size.
//Each of the read strings should be transformed in such a way that lowercase and uppercase letters (a-z, A-Z) are replaced with the same letter shifted X places afterwards in the alphabet (a-z). If you overflow the range of alphabet, continue cyclic from the beginning of the alphabet. Transformed string should be printed on SO.
//Transformation of a string should be implemented in a separate recursive function.
//Example:
//Welcome -> transformed with shift 5 -> Bjqhtrj
#include<stdio.h>
#include<ctype.h>
#include<string.h>

void shift (char *str, int x){

    if (*str == '\0'){

        return;

    } if(((*str >='a')&&(*str <= 'z')) || ((*str >='A')&&(*str <= 'Z'))){
        if((*str >='A') && (*str <= 'Z')) {
            if(*str+x>'Z')
                *str=64+(x-('Z'-*str));
            else
                *str+=x;
        } else {
            if(*str+x>'z')
                *str=96+(x-('z'-*str));
            else
                *str+=x;
        }
    }
    shift(++str,x);
}

int main()
{

    int i, n, x;

    char str[80];

    scanf("%d%d", &n, &x);

    fgets(str, sizeof(str), stdin);

    for (i = 0; i < n; i++){

        fgets(str, sizeof(str), stdin);

        str[strlen(str)-1] = '\0';

        shift(str, x);

        puts(str);

    }

    return 0;
}

