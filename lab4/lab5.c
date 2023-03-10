#include <stdio.h>
#include <stdlib.h>
#define charStart 97

int main()
{

    char inputSize[10];
    fgets(inputSize, 10, stdin);
    int size = atoi(inputSize);

    if(size==0||size < 0 && size >26){
        printf("-");
    }else if(size==1){
        printf("%c",charStart);
    }else{

    int count = (size * 2) - 1;

    int numChar = charStart + (size - 1);

    int deleteNum = 2;

    for (int i = 0; i < count; i++)
    {
        if (i < size - 1)
        {

            for (int j = 0; j < (size * 2) - deleteNum; j++)
            {
                printf("-");
            }

            ///
            int textStart = charStart + size;
            for (int j = 0; j < i; j++)
            {
                printf("%c-", textStart - (j + 1));
            }
            if (i == 0)
            {
                printf("%c", charStart + (size - (i + 1)));
            }
            else
            {
                printf("%c-", charStart + (size - (i + 1)));
            }

            for (int j = 0; j < i; j++)
            {
                if (j == i - 1)
                {
                    printf("%c", (textStart - i) + j);
                }
                else
                {
                    printf("%c-", (textStart - i) + j);
                }
            }
            ///

            for (int j = 0; j < (size * 2) - deleteNum; j++)
            {
                if (j == ((size * 2) - deleteNum) - 1)
                {
                    printf("-\n");
                }
                else
                {
                    printf("-");
                }
            }
        }

        if (i == size)
        {
            int textStart = charStart + size;
            for (int j = 0; j < (size - 1); j++)
            {
                printf("%c-", textStart - (j + 1));
            }
            printf("%c-", charStart);
            for (int j = 0; j < (size - 1); j++)
            {
                if (j == (size - 1) - 1)
                {
                    printf("%c\n", charStart + (j + 1));
                }
                else
                {
                    printf("%c-", charStart + (j + 1));
                }
            }
        }

        if (i > size - 1)
        {
            for (int j = 0; j < deleteNum - ((size)*2); j++)
            {

                printf("-");
            }


            int textStart = charStart + size;

            for (int j = 0; j < count - (i + 1); j++)
            {
                printf("%c-", textStart - (j + 1));
            }

            if (i == count - 1)
            {
                printf("%c", charStart + ((i + 1) - size));
            }
            else
            {
                printf("%c-", charStart + ((i + 1) - size));
            }

            for (int j = 0; j < count - (i + 1); j++)
            {
                if (j == (count - (i + 1)) - 1)
                {
                    printf("%c", (textStart - (count - (i + 1))) + j);
                }
                else
                {
                    printf("%c-", (textStart - (count - (i + 1))) + j);
                }
            }

            for (int j = 0; j < deleteNum - ((size)*2); j++)
            {
                if (j == (deleteNum - ((size)*2)) - 1)
                {
                    printf("-\n");
                }
                else
                {
                    printf("-");
                }
            }
        }

        deleteNum += 2;
    }
    }
    

    return 0;
}
