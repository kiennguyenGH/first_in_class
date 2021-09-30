#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){

    float tax, tip, total;
    float menu[] = {9.95, 4.55, 13.25, 22.35};
    time_t t;
    srand((unsigned) time(&t));
    float *item = NULL;
    item = &menu[rand () % 4];

    printf("Menu:\nSalad: $9.95\nSoup: $4.55\nSandwich: $13.25\nPizza: $22.35\n");
    printf("Enter the tax percent: ");
    scanf("%f", &tax);
    tax /= 100;
    printf("\nEnter the tip percent: ");
    scanf("%f", &tip);
    tip /= 100;
    printf("Cost of Item: %.2f\n", *item);
    printf("Tax: $%.2f\n", *item*tax);
    printf("Tip: $%.2f\n", *item*tip);
    printf("Total Cost: $%.2f\n", *item*tip + *item*tax + *item);
}
