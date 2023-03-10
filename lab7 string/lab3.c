#include <stdio.h>

void stringcat(char src[], char dest[])
{
    int countSrc = 0, countDest = 0;
    while (src[countSrc] != '\0')
    {
        countSrc++;
    }
    while (dest[countDest] != '\0')
    {
        countDest++;
    }
    for (int i = 0; i < countSrc; i++)
    {
        dest[countDest + i] = src[i];
    }

    // dest[countDest + countSrc] = '\0';
}

int main()
{
    char in1[100], in2[100];

    printf("Input 1: ");
    gets(in1);
    printf("Input 2: ");
    gets(in2);
    stringcat(in1, in2);
    printf(" Output: ");
    printf("%s\n", in2);
    return 0;
}