#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
} node;

void printList(node *pList)
{
    while (pList != NULL)
    {
        printf("%d ", pList->value);
        pList = pList->next;
    }
    printf("\n");
}

void insertNode(node **pList, int value)
{
    node *pNew = (node *)malloc(sizeof(node));
    pNew->value = value;
    pNew->next = NULL;

    if (*pList == NULL)
    {
        *pList = pNew;
    }
    else
    {
        node *pTemp = *pList;
        while (pTemp->next != NULL)
        {
            pTemp = pTemp->next;
        }
        pTemp->next = pNew;
    }
}

int main()
{
    int i, value;
    node *pList = NULL;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf(" %d", &value);
        insertNode(&pList, value);
    }

    printf("List: ");
    printList(pList);
}
