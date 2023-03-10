#include <stdio.h>

void removeTarget(int *array, int size, int target);

int main()
{
    int num, count, target, i;

    scanf("%d", &num);
    scanf("%d", &count);

    int numbers[num];
    int *numbersPtr = &numbers[0];

    for (
        i = 1; i <= num; i++, numbersPtr++)
    {
        *numbersPtr = i;
    }

    // loop through count
    for (i = 0; i < count; i++)
    {
        scanf("%d", &target);
        removeTarget(&numbers[0], num, target);
    }

    numbersPtr = &numbers[0];

    // print elements in numbers using numberPtr
    for (; numbersPtr != &numbers[0] + num; numbersPtr++)
    {
        printf("%d ", *numbersPtr);
    }
    puts("");
    return 0;
}

// remove target from array by pointer *array and append last position by 0
void removeTarget(int *array, int size, int target)
{
  int *ArrayPtr = array;
    int zero_num = 0;
    for (; ArrayPtr != &array[0] + size; ArrayPtr++)
    {
        if (*ArrayPtr == target)
        {
            *ArrayPtr = 0;
            zero_num++;
        }
    }
    int *ArrayPtr2 = array;
    for (ArrayPtr = array; ArrayPtr != &array[0] + size; ArrayPtr++)
    {
        if (*ArrayPtr != 0)
        {
            int tmp = *ArrayPtr;
            *ArrayPtr = *ArrayPtr2;
            *ArrayPtr2 = tmp;
            ArrayPtr2++;
        }
    }
}