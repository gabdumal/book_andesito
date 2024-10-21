#ifndef __NODE_H__
#define __NODE_H__

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode();
void setData(struct Node *node, int data);
int getData(struct Node *node);
void setNext(struct Node *node, struct Node *next);
struct Node *getNext(struct Node *node);

#endif // __NODE_H__