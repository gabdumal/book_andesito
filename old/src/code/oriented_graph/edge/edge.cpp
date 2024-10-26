#include "edge.hpp"

Edge::Edge(unsigned long id, Node *source, Node *target, int weight)
{
    this->id = id;
    this->source = source;
    this->target = target;
    this->weight = weight;
}

unsigned long Edge::getId() const
{
    return this->id;
}

Node *Edge::getSource() const
{
    return this->source;
}

Node *Edge::getTarget() const
{
    return this->target;
}

int Edge::getWeight() const
{
    return this->weight;
}

void Edge::setWeight(int weight)
{
    this->weight = weight;
}
