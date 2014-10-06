#pragma once

#include <vector>

class Graph
{
public:
    Graph (size_t v);

    size_t GetVerticesNumber() const;

    size_t GetEdgesNumber() const;

    void AddEdge(size_t v, size_t w);
    
    const std::vector<size_t>& GetAllAdjacent(size_t v) const;

private:
    const size_t m_verticesNumber;
    std::vector<std::vector<size_t>> m_adjacencyLists;
    size_t m_edgesNumber;
};