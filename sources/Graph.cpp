//
// Created by djame on 7‏/1‏/2020.
//

#include <cstdarg>
#include "../includes/Graph.hpp"

#include "../includes/IGraph.hpp"



int Graph::nbNodes() const {
    return this->listAdjacence.size();
}


int  Graph::nbEdges () const  {
    int somme= -0;
    for(int i=0;i<this->listAdjacence.size(); i++){
        somme+=listAdjacence.at(i).size();
    }
    return somme;
}

int Graph::degree(int i) const  {
    return this->listAdjacence.at(i).size();
}


std::vector<int> Graph::adjacency(int i) const  {
    return this->listAdjacence.at(i);
}


void Graph::addVertex(int i,int j){

    this->listAdjacence.at(i).push_back(j);
    this->listAdjacence.at(j).push_back(i);

}

std::ostream& operator<<(std::ostream& os, const Graph& graph)
{
    for(int i=0;i<graph.nbNodes();i++){
        os << "Sommet " << i << " | ";
        auto adjacents = graph.adjacency(i);
        os << "Voisins=";
        for(int j=0;j<adjacents.size();j++){
            os << adjacents.at(j)<<" ,";
        }
        os << std::endl;
    }
    return os;
}

void Graph::ajouterSommet(std::vector<int> voisins ) {
    
    this->listAdjacence.push_back(voisins);

}
void Graph::ajouterSommet(){
        
    this->listAdjacence.push_back(std::vector<int>());
}