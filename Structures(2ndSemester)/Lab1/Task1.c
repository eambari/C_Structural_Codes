/*
Created by Endrit Ambari on 2022.
*/
/*
Created by Endrit Ambari on 2022.
*/
#include <stdio.h>
#include <math.h>

typedef struct point2D{
    int p1;
    int p2;
}point2D;

typedef struct point3D{
    int p1;
    int p2;
    int p3;
}point3D;

float distance (point2D x, point2D y){

    return sqrtf(pow((y.p1-x.p1),2) + pow((y.p2-x.p2),2));
}

float distance3D (point3D x, point3D y){

    return sqrtf(pow((y.p1-x.p1),2) + pow((y.p2-x.p2),2) + pow((y.p3-x.p3),2));
}

int collinear (point2D x, point2D y, point2D z){

    if((y.p2 - x.p2)/(y.p1-x.p1) == (z.p2 - x.p2)/(z.p1-x.p1)){

        return 1;
    } else return 0;

    //return (x.p1 * (y.p2 - z.p2)) + (y.p1 * (z.p2 - x.p2)) + (z.p1 * (x.p2 - y.p2));
}

int main() {
    float x1, y1, x2, y2;
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    point2D t1 = { x1, y1 };
    point2D t2 = { x2, y2 };
    printf("%.2f\n", distance(t1, t2));
    float z1, z2;
    scanf("%f %f", &z1, &z2);
    point3D t3 = {x1, y1, z1};
    point3D t4 = {x2, y2, z2};
    printf("%.2f\n", distance3D(t3, t4));
    point2D t5 = {z1, z2};
    printf("%d\n", collinear(t1, t2, t5));
    return 0;
}
