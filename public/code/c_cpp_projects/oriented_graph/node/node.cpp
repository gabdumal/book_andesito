#include "node.hpp"

Node::Node(unsigned long id, unsigned long label, int data)
{
    this->id = id;
    this->label = label;
    this->data = data;
}

unsigned long Node::getId() const
{
    return this->id;
}

unsigned long Node::getLabel() const
{
    return this->label;
}

int Node::getData() const
{
    return this->data;
}

void Node::setData(int data)
{
    this->data = data;
}
