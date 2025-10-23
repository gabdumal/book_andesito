#include "graph.hpp"

#include <algorithm>

Graph::Graph() {
    this->last_node_id = 0;
    this->last_edge_id = 0;
}

Graph::~Graph() {
    this->clearNodes();
    this->clearEdges();
}

Node *Graph::getNodeByLabel(unsigned long label) const {
    for (Node *node : this->nodes) {
        if (node->getLabel() == label) {
            return node;
        }
    }

    return nullptr;
}

void Graph::clearNodes() {
    for (Node *node : this->nodes) {
        delete node;
    }

    this->nodes.clear();
}

void Graph::clearEdges() {
    for (Edge *edge : this->edges) {
        delete edge;
    }

    this->edges.clear();
}

optional<int> Graph::getNodeData(unsigned long label) const {
    Node *node = this->getNodeByLabel(label);

    if (node == nullptr) {
        return nullopt;
    }

    return node->getData();
}

void Graph::addNode(unsigned long label, int data) {
    Node *node = new Node(this->last_node_id++, label, data);
    this->nodes.push_back(node);
}

void Graph::addEdge(unsigned long source_label, unsigned long target_label, int weight) {
    Node *source = this->getNodeByLabel(source_label);
    Node *target = this->getNodeByLabel(target_label);

    if (source == nullptr || target == nullptr) {
        return;
    }

    Edge *edge = new Edge(this->last_edge_id++, source, target, weight);
    this->edges.push_back(edge);
}

vector<unsigned long> Graph::depthFirstSearch(unsigned long start_label) const {
    vector<unsigned long> visited;
    vector<unsigned long> stack;

    stack.push_back(start_label);

    while (!stack.empty()) {
        unsigned long current_label = stack.back();
        stack.pop_back();

        if (find(visited.begin(), visited.end(), current_label) != visited.end()) {
            continue;
        }

        visited.push_back(current_label);

        Node *current_node = this->getNodeByLabel(current_label);

        for (Edge *edge : this->edges) {
            if (edge->getSource() == current_node) {
                stack.push_back(edge->getTarget()->getLabel());
            }
        }
    }

    return visited;
}
