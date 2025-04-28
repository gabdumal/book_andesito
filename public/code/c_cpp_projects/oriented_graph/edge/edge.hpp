#ifndef __EDGE_HPP__
#define __EDGE_HPP__

#include "../node/node.hpp"

class Edge
{
private:
    unsigned long id;
    Node *source;
    Node *target;
    int weight;

public:
    Edge(unsigned long id, Node *source, Node *target, int weight);
    ~Edge() {}

    unsigned long getId() const;
    Node *getSource() const;
    Node *getTarget() const;
    int getWeight() const;

    void setWeight(int weight);
};

#endif // __EDGE_HPP__