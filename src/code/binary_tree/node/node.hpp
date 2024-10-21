#ifndef __NODE_HPP__
#define __NODE_HPP__

class Node
{
private:
    int data;
    Node *left;
    Node *right;

public:
    Node(int data);
    ~Node() {}

    int getData();
    Node *getLeft();
    Node *getRight();

    void setData(int data);
    void setLeft(Node *left);
    void setRight(Node *right);
};

#endif // __NODE_HPP__
