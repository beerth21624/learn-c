#include <stdio.h>
#include <stdlib.h>

int main()
{
    char text;
    text = getchar();
    if (text >= 65 && text <= 90)
    {
        printf("Output: upper case");
    }
    else if (text >= 97 && text <= 122)
    {
        printf("Output: lower case");
    }
    else if (text >= 48 && text <= 57)
    {
        printf("Output: digit");
    }
    else
    {
        printf("Output: others");
    }
}