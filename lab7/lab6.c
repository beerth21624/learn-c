#include <stdio.h>

int main()
{
    int *A, *B;
    A = (int *)malloc(20 * sizeof(int));
    printf("%d\n", A);
    B = (int *)calloc(40, sizeof(int));
    printf("%d\n", B);
    A = (int *)realloc(A, 10 * sizeof(int));
    printf("%d\n", A);
    B = (int *)realloc(B, 60 * sizeof(int));
    printf("%d\n", B);

    return 0;
}