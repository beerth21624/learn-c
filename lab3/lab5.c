#include <stdio.h>
#include <stdlib.h>

int main()
{
    char num_i[10];

    fgets(num_i, 10, stdin);

    int num = atoi(num_i);
    if(num > 0 && num <=26){
         int start = 'a' + (num - 1);
      if(num == 1){
      printf("a");
    }    else{

    for (int i = 0; i < num; i++)
    {

        printf("%c-", start);
        start = start - 1;
    }
    int count = (num - 1);
    for (int i = 0; i < count; i++)
    {
        if (i == count-1)
        {
            printf("%c", start + 2);
        }
        else
        {
            printf("%c-", start + 2);
        }
        start = start + 1;
    }
    }
    }else{
   printf("-");
    }

    return 0;
}