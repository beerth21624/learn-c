#include <stdio.h>
#include <math.h>

int main()
{
    int numArr[3] = {0, 0, 0};
    int n, a, b;
 
    scanf("%d", &n);
    for (b = 1; b <= n; b++)
    {
        for (a = 1; a <= b; a++)
        {
            int c = n - (a + b);
            if (c > 0)
            {
                if ((a * a) + (b * b) == (c * c))
                {
                    numArr[0] = a;
                    numArr[1] = b;
                    numArr[2] = c;
                    b = n;
                    break;
                }
            }
        }
    }

    if (numArr[0] != 0)
    {
        printf("(%d, %d, %d)", numArr[0], numArr[1], numArr[2]);
    }
    else
    {
        printf("No triple found.");
    }
    return 0;
}