#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        { // Width
            if (j % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("x");
            }
        }
        printf("\n");
    }
    for (int k = n; k > 1; k--)
    {
        for (int l = 2; l <= k; l++)
        {
            if (l % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("x");
            }
        }
        printf("\n");
    }

    return 0;
}