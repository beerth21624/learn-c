#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char si[3], pi[3], ci[3], mi[3];
    printf("Welcome to My Pizza Shop!!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    fgets(si, 10, stdin);
    printf("Extra pepperoni? (1=yes, 0=no): ");
    fgets(pi, 10, stdin);
    printf("Extra cheese? (1=yes, 0=no): ");
    fgets(ci, 10, stdin);
    printf("Extra mushroom? (1=yes, 0=no): ");
    fgets(mi, 10, stdin);

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int s = atoi(si);
    int p = atoi(pi);
    int c = atoi(ci);
    int m = atoi(mi);

    int diameter = 0;
    if (s == 1)
    {
        diameter = 10;
    }
    else if (s == 2)
    {
        diameter = 16;
    }
    else if (s == 3)
    {
        diameter = 20;
    }

    int fixedcost = 5;
    int basecost = 2;
    double extracost = 0;

    if (p == 1)
    {
        extracost = extracost + 0.5;
    }
    if (c == 1)
    {
        extracost = extracost + 0.25;
    }
    if (m == 1)
    {
        extracost = extracost + 0.30;
    }
    

    double area = (M_PI * (diameter * diameter) )/ 4;
    double cost = fixedcost + (basecost * area) + (extracost * area);
    double price = 1.5 *cost;

    printf("Your order costs %.2f baht.\n",price);
     printf("Thank you.");
}