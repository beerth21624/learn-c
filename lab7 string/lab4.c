#include <stdio.h>

int main()
{
    int numL;
    scanf("%d", &numL);
    int numN;
    scanf("%d", &numN);
    char wordArr[numN][numL];
    for (int i = 0; i < numN; i++)
        scanf("%s", wordArr[i]);
    int newIndex = 0;
    for (int i = 0; i < numN - 1; i++)
    {
        int count = 0;
        for (int j = 0; j < numL; j++)
            if (wordArr[i][j] != wordArr[i + 1][j])
                count++;
        if (count > 2)
        {
            newIndex = i;
            break;
        }
        newIndex = i + 1;
    }
    for (int j = 0; j < numL; j++)
        printf("%c", wordArr[newIndex][j]);
    return 0;
}