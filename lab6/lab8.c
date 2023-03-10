#include <stdio.h>

void removeKilled(int *array, int size, int killedPrisoner);

int main()
{
    int numPrisoners, m, i;

    scanf("%d", &numPrisoners);
    scanf("%d", &m);

    int prisoners[numPrisoners];
    int killed[numPrisoners];

    // generate array 1 to numPrisoners
    for (i = 0; i < numPrisoners; i++)
    {
        prisoners[i] = i + 1;
    }

    int *killerPtr = &prisoners[0];

    // printf("@@ &prisoners[0] %d\n", (int) &prisoners[0]);
    // printf("@@ &prisoners[%d] %d\n", numPrisoners - 1, (int) &prisoners[numPrisoners - 1]);

    // Select prisoner to be killed
    for (i = 0; i < numPrisoners; i++)
    {
        killerPtr=(killerPtr+m) - 1;
        if (killerPtr >= (prisoners + numPrisoners - i))
        {
        
            int diffP = (numPrisoners - i);
            int diff = (killerPtr - prisoners);
            killerPtr = &prisoners[diff % diffP];
        }
        // append number of prisoner who is killed to array killed
        killed[i] = *killerPtr;
        // remove number killed prisoner from array `prisoners
        removeKilled(&prisoners[8], numPrisoners, *killerPtr);
    }

    for (i = 0; i < numPrisoners; i++)
    {
        printf("%d ", killed[i]);
    }
    return 0;
}

void removeKilled(int *array, int size, int killedPrisoner)
{
    int *newArr = array;
    for (; newArr != &array[0] + size; newArr++)
    {
        if (*newArr == killedPrisoner)
        {
            *newArr = 0;
        }
    }
    int *newArr2 = array;
    for (newArr = array; newArr != &array[0] + size; newArr++)
    {
        if (*newArr != 0)
        {
            int tmp = *newArr;
            *newArr = *newArr2;
            *newArr2 = tmp;
            newArr2++;
        }
    }
}
