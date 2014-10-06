#pragma once

#include <vector>

class Digraph
{
    Digraph(size_t verticesNumber);

    size_t GetVerticesNumber() const;
    size_t GetEdgesNumber() const;
    const std::vector<size_t>& GetAjancent(size_t v) const;

    void AddEdge(size_t v, size_t w);

private:
    const size_t m_verticesNumber;
    std::vector<std::vector<size_t>> m_adjacencyLists;
    size_t m_edgesNumber;
};