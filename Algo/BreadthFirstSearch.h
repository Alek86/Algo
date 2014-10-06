#pragma once

#include "Graph.h"

#include <vector>

std::vector<size_t> BreadthFirstSearch(const Graph& graph, size_t fromVertex, size_t toVertex);