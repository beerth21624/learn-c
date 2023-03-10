#include <stdio.h>
#include <math.h>
long int numberCount(long int n);
long int numberCheck(long int n);

int main()
{
    long int n;

    printf("Input n = ");
    scanf("%ld", &n);
    printf("n^2 = %ld\n",(long int)pow(n, 2));
    if (numberCheck(n))
    {
        printf("Yes. %ld is automorphic number.", n);
    }
    else
    {

        printf("No. %ld is not automorphic number.", n);
    }
    return 0;
}
long int numberCount(long int n)
{
    long int i = 0;

    while (n != 0)
    {
        n = n / 10;
        i += 1;
    }
    return i;
}

long int numberCheck(long int n)
{
    long int i1 = 0;
    long int addNum = (long int)pow(n, 2);
    long int result = 0, result2 = 0;
    long int n2 = n;

    while (n2 != 0)
    {
        result2 += n2 % 10;
        n2 = n2 / 10;
    }

    while (addNum != 0)
    {
        if (i1 <= (numberCount(n) - 1))
        {
            result += addNum % 10;
        }
        addNum = addNum / 10;
        i1 += 1;
    }
    return result == result2;
}
