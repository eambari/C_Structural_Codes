/*
Created by Endrit Ambari on 2022.
*/
#include <stdio.h>

struct products{

    char name[50];
    float price;
    int quantity;

}products[100];

float print(struct products p, int i){

    printf("%d. %s\t%.2f x %d = %.2f\n", i, p.name, p.price, p.quantity, (p.price * p.quantity));

    return p.price * p.quantity;
}

int main()
{
    int i, n;
    float total = 0;
    scanf ("%d", &n);

    for(i = 0; i < n; i++){

        scanf("%s %f %d", products[i].name, &products[i].price, &products[i].quantity);

        total += print(products[i], i+1);
    }

    printf ("Total: %.2f", total);
    return 0;
}
