#include <stdio.h>

int main()
{
    int i, j = 12;
    int *pi, *pj = &j;
    *pj = j + 3;
    i = *pj + 7;
    pi = pj;
    *pi = i + j;

    return 0;
}