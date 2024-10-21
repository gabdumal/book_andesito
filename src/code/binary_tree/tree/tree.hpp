#ifndef __TREE_HPP__
#define __TREE_HPP__

#include "../node/node.hpp"

class Tree
{
private:
    Node *root;

    void insert(Node *node, int data);
    void print(Node *node);

public:
    Tree();
    ~Tree();

    void insert(int data);
    void print();
};

#endif // __TREE_HPP__
