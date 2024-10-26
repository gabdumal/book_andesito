#ifndef __GRAPH_HPP__
#define __GRAPH_HPP__

#include <vector>
#include <optional>

#include "../node/node.hpp"
#include "../edge/edge.hpp"

using namespace std;

class Graph
{
private:
    unsigned long lastNodeId;
    vector<Node *> nodes;
    unsigned long lastEdgeId;
    vector<Edge *> edges;

    Node *getNodeByLabel(unsigned long label) const;

    void clearNodes();
    void clearEdges();

public:
    Graph();
    ~Graph();

    optional<int> getNodeData(unsigned long label) const;

    void addNode(unsigned long label, int data);
    void addEdge(unsigned long sourceLabel, unsigned long targetLabel, int weight);

    vector<unsigned long> depthFirstSearch(unsigned long startLabel) const;
};

#endif // __GRAPH_HPP__