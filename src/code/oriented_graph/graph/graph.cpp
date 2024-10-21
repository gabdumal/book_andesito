#include "graph.hpp"

Graph::Graph()
{
    this->lastNodeId = 0;
    this->lastEdgeId = 0;
}

Graph::~Graph()
{
    this->clearNodes();
    this->clearEdges();
}

Node *Graph::getNodeByLabel(unsigned long label) const
{
    for (Node *node : this->nodes)
    {
        if (node->getLabel() == label)
        {
            return node;
        }
    }

    return nullptr;
}

void Graph::clearNodes()
{
    for (Node *node : this->nodes)
    {
        delete node;
    }

    this->nodes.clear();
}

void Graph::clearEdges()
{
    for (Edge *edge : this->edges)
    {
        delete edge;
    }

    this->edges.clear();
}

optional<int> Graph::getNodeData(unsigned long label) const
{
    Node *node = this->getNodeByLabel(label);

    if (node == nullptr)
    {
        return nullopt;
    }

    return node->getData();
}

void Graph::addNode(unsigned long label, int data)
{
    Node *node = new Node(this->lastNodeId++, label, data);
    this->nodes.push_back(node);
}

void Graph::addEdge(unsigned long sourceLabel, unsigned long targetLabel, int weight)
{
    Node *source = this->getNodeByLabel(sourceLabel);
    Node *target = this->getNodeByLabel(targetLabel);

    if (source == nullptr || target == nullptr)
    {
        return;
    }

    Edge *edge = new Edge(this->lastEdgeId++, source, target, weight);
    this->edges.push_back(edge);
}

vector<unsigned long> Graph::depthFirstSearch(unsigned long startLabel) const
{
    vector<unsigned long> visited;
    vector<unsigned long> stack;

    stack.push_back(startLabel);

    while (!stack.empty())
    {
        unsigned long currentLabel = stack.back();
        stack.pop_back();

        if (find(visited.begin(), visited.end(), currentLabel) != visited.end())
        {
            continue;
        }

        visited.push_back(currentLabel);

        Node *currentNode = this->getNodeByLabel(currentLabel);

        for (Edge *edge : this->edges)
        {
            if (edge->getSource() == currentNode)
            {
                stack.push_back(edge->getTarget()->getLabel());
            }
        }
    }

    return visited;
}
