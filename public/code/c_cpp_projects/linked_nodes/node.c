#include "node.h"

#include <stdlib.h>

struct Node *createNode() {
    struct Node *new_node = (struct Node *) malloc(sizeof(struct Node));
    if (new_node != NULL) {
        new_node->data = 0;
        new_node->next = NULL;
    }
    return new_node;
}

void setData(struct Node *node, int data) {
    if (node != NULL) {
        node->data = data;
    }
}

int getData(struct Node *node) {
    if (node != NULL) {
        return node->data;
    }
    return -1;
}

void setNext(struct Node *node, struct Node *next) {
    if (node != NULL) {
        node->next = next;
    }
}

struct Node *getNext(struct Node *node) {
    if (node != NULL) {
        return node->next;
    }
    return NULL;
}
