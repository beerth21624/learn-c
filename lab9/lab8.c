#include <stdio.h>
#include <string.h>
typedef struct _product
{
    char name[30];
    int amount;
    double totalCost;
} Product;

void printStock(Product stock[], int nStock)
{
    int i;
    printf("%-20s|%6s|%-10s\n", "    Product Name", "Amount", "     Total");
    for (i = 0; i < nStock; i++)
    {
        printf("%-20s|%6d|%10.2lf\n",
               stock[i].name, stock[i].amount, stock[i].totalCost);
    }
}

// 4 20170401, 12 : 54 : 00, T Shirt L, 1, 120.00 20170401, 12 : 56 : 32, Boxer, 2, 90.00 20170401, 13 : 12 : 34, T Shirt L, 2, 200.00 20170401, 13 : 12 : 34, Boxer, 2, 98.00 20170401, 14 : 29 : 17, T Shirt M, 4, 480.00 20170401, 16 : 39 : 27, Shorts M, 1, 120.50 20170401, 17 : 12 : 34, T Shirt L, 3, 350.00
// target
// Product Name | Amount | Total T Shirt L | 6 | 670.00 Boxer | 4 | 188.00 T Shirt M | 4 | 480.00 Shorts M | 1 | 120.50

void reportStock(char *filename)
{
    FILE *fptr = fopen(filename, "r");
    // data form file = 4 20170401, 12 : 54 : 00, T Shirt L, 1, 120.00 20170401, 12 : 56 : 32, Boxer, 2, 90.00 20170401, 13 : 12 : 34, T Shirt L, 2, 200.00 20170401, 13 : 12 : 34, Boxer, 2, 98.00 20170401, 14 : 29 : 17, T Shirt M, 4, 480.00 20170401, 16 : 39 : 27, Shorts M, 1, 120.50 20170401, 17 : 12 : 34, T Shirt L, 3, 350.00
    // target for printf = Product Name | Amount | Total T Shirt L | 6 | 670.00 Boxer | 4 | 188.00 T Shirt M | 4 | 480.00 Shorts M | 1 | 120.50
    int nStock;
    fscanf(fptr, "%d", &nStock);
    Product stock[nStock];
    int i;
    for (i = 0; i < nStock; i++)
    {
        fscanf(fptr, "%s %d %lf", stock[i].name, &stock[i].amount, &stock[i].totalCost);
    }
    printStock(stock, nStock);

    fclose(fptr);
}

int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    reportStock(filename);
}