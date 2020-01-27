//
// Created by djame on 7‏/1‏/2020.
//

#ifndef UNTITLED3_IGRAPHCOLORING_HPP
#define UNTITLED3_IGRAPHCOLORING_HPP

#include "IGraph.hpp"
#include "Graph.hpp"

class IGraphColoring{

public:
    virtual ~IGraphColoring(){};
    virtual void coloring(IGraph const & graph)=0;
};
#endif //UNTITLED3_IGRAPHCOLORING_HPP
