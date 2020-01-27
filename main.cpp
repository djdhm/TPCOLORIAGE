#include <iostream>
#include "includes/Graph.hpp"
#include "includes/Gloutonne.hpp"
#include "includes/WelshPowell.hpp"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Graph graph;
    graph.ajouterSommet();
    graph.ajouterSommet();
    graph.ajouterSommet();
    graph.ajouterSommet();
    graph.ajouterSommet();
    graph.ajouterSommet();

    graph.addVertex(0,1);
    graph.addVertex(2,3);
    graph.addVertex(4,0);
    graph.addVertex(5,2);
    graph.addVertex(0,2);
    graph.addVertex(3,0);
    std::cout<<graph;
    Gloutonne gloutonne;
    gloutonne.coloring(graph);
    gloutonne.afficherColeurs();
    WeslshPowell weslshPowell;
    weslshPowell.coloring(graph);
    weslshPowell.afficherColeurs();
    return 0;
}

