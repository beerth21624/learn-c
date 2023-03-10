#include <stdio.h>

int main()
{
    float **ptr;
    int i, m, n;
    ptr = (float **)malloc(m * sizeof(float *));
    for (i = 0; i < m; i++)
    {
        ptr[i] = (float *)malloc(n * sizeof(float));
    }

    Free(ptr);
    Free(ptr[i]);
}