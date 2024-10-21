#include <stdlib.h>
#include <stdio.h>
#include "node.h"

int main()
{
    printf("Creating a linked list with 10 nodes\n");

    struct Node *node = createNode();
    struct Node *head = node;
    setData(node, 1);

    for (int i = 2; i <= 10; i++)
    {
        struct Node *newNode = createNode();
        setData(newNode, i);
        setNext(node, newNode);
        node = newNode;
    }

    printf("Traversing the linked list\n");

    node = head;

    while (node != NULL)
    {
        printf("%d\t", getData(node));
        node = getNext(node);
    }

    printf("\n");

    return 0;
}
