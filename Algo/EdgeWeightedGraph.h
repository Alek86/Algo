#pragma once

#include "Edge.h"
#include <vector>

class EdgeWeightedGraph
{
public:
    EdgeWeightedGraph(size_t v);

    size_t V() const;
    size_t E() const;

    void AddEdge(const Edge& edge);
    std::vector<Edge> Adj(size_t v) const;
    std::vector<Edge> Edges() const;
};