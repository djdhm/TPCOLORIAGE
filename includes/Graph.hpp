//
// Created by djame on 7‏/1‏/2020.
//

#ifndef UNTITLED3_GRAPH_HPP
#define UNTITLED3_GRAPH_HPP


#include <iostream>
#include "IGraph.hpp"

class Graph : public IGraph {
private:

    std::vector<std::vector<int>> listAdjacence;
    int nombreSommet;
public:
    virtual int nbNodes() const override ;

    virtual int nbEdges() const override ;

    virtual  int degree(int i) const override ;

    virtual std::vector<int> adjacency(int i) const override ;

    void ajouterSommet(std::vector<int> voisins );
    void ajouterSommet();

    friend std::ostream& operator<<(std::ostream& os, const Graph& dt);

    void addVertex(int i, int j);
};


#endif //UNTITLED3_GRAPH_HPP
