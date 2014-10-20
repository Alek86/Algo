#include "Graph.h"
#include "DepthFirstSearch.h"
#include "Edge.h"

#include <iostream>

namespace
{
    void TestDFS()
    {
        Graph graph(13);
        graph.AddEdge(0, 5);
        graph.AddEdge(4, 3);
        graph.AddEdge(0, 1);
        graph.AddEdge(9, 12);
        graph.AddEdge(6, 4);
        graph.AddEdge(5, 4);
        graph.AddEdge(0, 2);
        graph.AddEdge(11, 12);
        graph.AddEdge(9, 10);
        graph.AddEdge(0, 6);
        graph.AddEdge(7, 8);
        graph.AddEdge(9, 11);
        graph.AddEdge(5, 3);

        const auto& result = DepthFirstSearch(graph, 0, 4);

        std::cout << result.size();
    }
}

int main()
{
    //TestDFS();
}