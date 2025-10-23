#ifndef __GRAPH_HPP__
#define __GRAPH_HPP__

#include <optional>
#include <vector>

#include "../edge/edge.hpp"
#include "../node/node.hpp"

using namespace std;

class Graph {
    private:
        unsigned long last_node_id;
        vector<Node *> nodes;
        unsigned long last_edge_id;
        vector<Edge *> edges;

        Node *getNodeByLabel(unsigned long label) const;

        void clearNodes();
        void clearEdges();

    public:
        Graph();
        ~Graph();

        optional<int> getNodeData(unsigned long label) const;

        void addNode(unsigned long label, int data);
        void addEdge(unsigned long source_label, unsigned long target_label, int weight);

        vector<unsigned long> depthFirstSearch(unsigned long start_label) const;
};

#endif  // __GRAPH_HPP__
