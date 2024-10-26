#include <stdlib.h>
#include <stdio.h>
#include "node.h"

struct Node *createNode()
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode != NULL)
    {
        newNode->data = 0;
        newNode->next = NULL;
    }
    return newNode;
}

void setData(struct Node *node, int data)
{
    if (node != NULL)
    {
        node->data = data;
    }
}

int getData(struct Node *node)
{
    if (node != NULL)
    {
        return node->data;
    }
    return -1;
}

void setNext(struct Node *node, struct Node *next)
{
    if (node != NULL)
    {
        node->next = next;
    }
}

struct Node *getNext(struct Node *node)
{
    if (node != NULL)
    {
        return node->next;
    }
    return NULL;
}
