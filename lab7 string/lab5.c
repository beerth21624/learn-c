#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define static "use malloc"

char *stoupper(const char *str)
{
    char *newWord = (char *)malloc(sizeof(char) * 100);
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        newWord[i] = toupper(str[i]);
    }
    newWord[i] = '\0';
    return newWord;
}

int main()
{
    char s[100];
    char *newWord;

    scanf("%s", s);
    newWord = stoupper(s);
    if (newWord == s)
        printf("ERROR.\n");
    printf("%s\n", newWord);
}