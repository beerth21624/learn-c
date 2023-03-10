#include <stdio.h>

int main()
{
    printf("String (without a space): ");
    char str[10];
    scanf("%s", str);

    int lenStr = 0;
    int count = 0;
    while (str[lenStr] != '\0')
    {
        lenStr++;
    }
    for (int i = 0; i < lenStr; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
            printf("%c ", str[i]);
        }
    }
    if (count > 1)
    {
        printf("\nThis string contains %d vowels.", count);
    }
    else
    {
        printf("\nThis string contains %d vowel.", count);
    };

    return 0;
}