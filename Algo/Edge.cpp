#include "Edge.h"

#include <exception>

Edge::Edge(size_t v, size_t w, double weight)
    : m_v(v), m_w(w), m_weight(weight)
{
}

double Edge::GetWeight() const
{
    return m_weight;
}

size_t Edge::GetEither() const
{
    return m_v;
}

size_t Edge::GetOther(size_t v) const
{
    if (v == m_v)
    {
        return m_w;
    }

    if (v == m_w)
    {
        return m_v;
    }

    throw new std::exception("Inconsistent edge");
}

