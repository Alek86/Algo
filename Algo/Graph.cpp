#include "Graph.h"

#include <sstream>

Graph::Graph(size_t verticesNumber) : m_verticesNumber(verticesNumber)
{
    m_adjacencyLists.resize(m_verticesNumber);
}

const std::vector<size_t>& Graph::GetAdjacent(size_t v) const
{
    if (v >= m_adjacencyLists.size())
    {
        std::ostringstream iss;
        iss << "[" << __FUNCTION__ << "]: ";
        iss << "v is " << v << ", adjacency lists number is " << m_adjacencyLists.size();
        throw std::exception(iss.str().c_str());
    }

    return m_adjacencyLists[v];
}

void Graph::AddEdge(size_t v, size_t w)
{
    if (v >= m_adjacencyLists.size() || w >= m_adjacencyLists.size())
    {
        // TODO Add explanation
        throw std::exception();
    }

    // TODO Check if the edge already exists

    m_adjacencyLists[v].push_back(w);
    m_adjacencyLists[w].push_back(v);
}

size_t Graph::GetEdgesNumber() const
{
    return m_edgesNumber;
}

size_t Graph::GetVerticesNumber() const
{
    return m_verticesNumber;
}

