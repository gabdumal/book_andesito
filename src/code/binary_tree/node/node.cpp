#include "node.hpp"

Node::Node(int data)
{
    this->data = data;
    left = nullptr;
    right = nullptr;
}

int Node::getData()
{
    return data;
}

Node *Node::getLeft()
{
    return left;
}

Node *Node::getRight()
{
    return right;
}

void Node::setData(int data)
{
    this->data = data;
}

void Node::setLeft(Node *left)
{
    this->left = left;
}

void Node::setRight(Node *right)
{
    this->right = right;
}
