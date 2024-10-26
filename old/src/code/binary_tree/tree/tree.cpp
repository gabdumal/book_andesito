#include "tree.hpp"
#include <iostream>

using namespace std;

Tree::Tree()
{
    root = nullptr;
}

Tree::~Tree()
{
    Node *current = root;
    while (current != nullptr)
    {
        Node *temp = current;
        current = current->getRight();
        delete temp;
    }
}

void Tree::insert(int data)
{
    if (root == nullptr)
    {
        root = new Node(data);
    }
    else
    {
        insert(root, data);
    }
}

void Tree::insert(Node *node, int data)
{
    if (data < node->getData())
    {
        if (node->getLeft() == nullptr)
        {
            node->setLeft(new Node(data));
        }
        else
        {
            insert(node->getLeft(), data);
        }
    }
    else
    {
        if (node->getRight() == nullptr)
        {
            node->setRight(new Node(data));
        }
        else
        {
            insert(node->getRight(), data);
        }
    }
}

void Tree::print()
{
    print(root);
}

void Tree::print(Node *node)
{
    if (node != nullptr)
    {
        print(node->getLeft());
        cout << node->getData() << " ";
        print(node->getRight());
    }
}
