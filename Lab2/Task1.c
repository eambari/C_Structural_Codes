//
// Created by Endrit on 2/6/2022.
//The coordinates of the center and the radius of the circle are entered from the keyboard. Determine through which quadrants passes the circle. Print a 4-bit binary number indicating whether the circle passes through the corresponding quadrant in the following order: first-second-third-fourth.
//For example. for the circle (3,3,4) that passes through the first, second and fourth quadrants, 1101 should be printed, and for the circle (-2, -2,1) - 0010.
//Distance between 2 points in the plane is calculated as follows:
//d=$\sqrt{(x1-x2)^{2}+(y1-y2)^{2}}$
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int isFirst,isSecond,isThird,isForth;
    float x,y,r,distance;
    scanf("%f %f %f", &x,&y,&r);
    distance=sqrt(((0-x)*(0-x))+((0-y)*(0-y)));
    if (x>=0 && y>=0)
    {
        isFirst=(x>=0 && y>=0);
        isSecond=(r>x);
        isThird=(r>distance);
        isForth=(r>y);
    }
    if (x<=0 && y>=0)
    {
        isSecond=(x<=0 && y>=0);
        x=x*-1;
        isFirst=(r>x);
        isThird=(r>y);
        isForth=(r>distance);
    }
    if (x<=0 && y<=0)
    {
        isThird=(x<=0 && y<=0);
        x=x*-1;
        y=y*-1;
        isSecond=(r>y);
        isFirst=(r>distance);
        isForth=(r>x);
    }
    if (x>=0 && y<=0)
    {
        isForth=(x>0 && y<0);
        y=y*-1;
        isSecond=(r>distance);
        isFirst=(r>y);
        isThird=(r>x);
        if (x==0 && y==0)
        {
            isForth=(r>0);
            isSecond=(r>0);
            isFirst=(r>0);
            isThird=(r>0);
        }

    }
    printf("%d%d%d%d", isFirst,isSecond,isThird,isForth);
    return 0;
}


