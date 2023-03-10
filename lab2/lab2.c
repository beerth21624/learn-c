#include <stdio.h>
#include <stdlib.h>
int main()
{
    
     char sticker_i[10];
     char price_i[10];

    fgets(sticker_i , 10 ,stdin);
    fgets(price_i , 10 ,stdin);

    int sticker = atoi(sticker_i);
    double price = atof(price_i);


    int discount = 0;
    double price_dis = 0;

    if (sticker >= 9)
    {
        discount = 40;
        sticker = sticker - 9;
        price_dis = price - ((price * 40) / 100);
    }
    else if (sticker >= 6)
    {
        discount = 30;
        sticker = sticker - 6;
        price_dis = price - ((price * 30) / 100);
    }
    else if (sticker >= 3)
    {
        discount = 20;
        sticker = sticker - 3;
        price_dis = price - ((price * 20) / 100);
    }
    else if (sticker >= 2)
    {
        discount = 15;
        sticker = sticker - 2;
        price_dis = price - ((price * 15) / 100);
    }
    else if (sticker >= 1)
    {
        discount = 10;
        sticker = sticker - 1;
        price_dis = price - ((price * 10) / 100);
    }
    else
    {
      discount = 0;
      price_dis = price ;
    }

    printf("You get %d percents discount.\n",discount);
    printf("Total amount due is %.2lf Baht.\n",price_dis);
    printf("And you have %d stickers left.",sticker);

    return 0;
}