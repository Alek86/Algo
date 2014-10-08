#pragma once

class Edge
{
public:
    Edge(size_t v, size_t w, double weight);
    double GetWeight() const;
    size_t GetEither() const;
    size_t GetOther(size_t v) const;

private:
    const size_t m_v;
    const size_t m_w;
    const double m_weight;
};