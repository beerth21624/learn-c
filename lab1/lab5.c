#include<stdio.h>
int main()
{
    int amount = 19;
    int fifty = amount / 50.0;
    int twenty = (amount % 50) / 20.0;
    int five = ((amount % 50) %  20) / 5.0;
    int one = ((amount % 50) %  20) % 5;
    printf("1 : %d\n", one);
    printf("5 : %d\n", five);
    printf("20 : %d\n", twenty);
    printf("50 : %d", fifty);
    return 0;
}