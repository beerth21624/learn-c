#include <stdio.h>
#include <stdlib.h>

#define SIZE 97

typedef struct nodeType
{
    int item;
    struct nodeType *next;
} Node;

typedef Node *NodePtr;

int main(void)
{
    char mode;
    int item;
    Node *key[SIZE] = {NULL};

    while (mode != 'q')
    {
        printf("input> ");
        scanf(" %c", &mode);
        if (mode == 'a')
        {
            scanf(" %d", &item);
            NodePtr temp = (NodePtr)malloc(sizeof(Node));
            temp->item = item;
            int index = item % SIZE;
            temp->next = key[index];
            key[index] = temp;
        }
        else if (mode == 'p')
        {
            for (int i = 0; i < SIZE; i++)
            {
                printf("KEY %2d:", i);
                NodePtr current = key[i];
                while (current != NULL)
                {
                    printf(" %d", current->item);
                    current = current->next;
                }
                printf("\n");
            }
        }
    }
}