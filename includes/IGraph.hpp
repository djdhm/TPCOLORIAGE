//
// Created by djame on 7‏/1‏/2020.
//

#ifndef UNTITLED3_IGRAPH_HPP
#define UNTITLED3_IGRAPH_HPP

#include <vector>

static  const std::vector<std::string> colors={"Rouge","Vert","Bleu","Jaune","Orange","Noir","Blanc","Gris","Violet"};

class IGraph { ;
public:
    ~IGraph(){};
    virtual int nbNodes() const  = 0;
    virtual int nbEdges() const = 0;
    virtual int degree(int i)  const = 0;
    virtual std::vector<int> adjacency(int i) const =0;

    IGraph(){}
};



#endif //UNTITLED3_IGRAPH_HPP
