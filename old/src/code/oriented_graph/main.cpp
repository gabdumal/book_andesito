#include <iostream>

#include "graph/graph.hpp"

using namespace std;

int main()
{
    Graph graph;

    graph.addNode(1, 10);
    graph.addNode(2, 20);
    graph.addNode(3, 30);
    graph.addNode(4, 40);
    graph.addNode(5, 50);

    graph.addEdge(1, 2, 10);
    graph.addEdge(1, 3, 20);
    graph.addEdge(2, 3, 30);
    graph.addEdge(3, 4, 40);
    graph.addEdge(4, 5, 50);

    vector<unsigned long> connectedNodes = graph.depthFirstSearch(1);

    for (unsigned long label : connectedNodes)
    {
        cout << label << " ";
    }

    cout << endl;

    return 0;
}
