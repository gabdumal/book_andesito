#include <stdio.h>
#include <stdlib.h>

#include "node.h"

int main() {
    printf("Creating a linked list with 10 nodes\n");

    struct Node *node = createNode();
    struct Node *head = node;
    setData(node, 1);

    for (int i = 2; i <= 10; i++) {
        struct Node *new_node = createNode();
        setData(new_node, i);
        setNext(node, new_node);
        node = new_node;
    }

    printf("Traversing the linked list\n");

    node = head;

    while (node != NULL) {
        printf("%d\t", getData(node));
        node = getNext(node);
    }

    printf("\n");

    return 0;
}
