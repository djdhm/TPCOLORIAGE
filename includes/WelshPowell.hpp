//
// Created by djame on 9‏/1‏/2020.
//

#ifndef UNTITLED3_WELSHPOWELL_HPP
#define UNTITLED3_WELSHPOWELL_HPP

#include <algorithm>
#include "IGraphColoring.hpp"

class WeslshPowell : public IGraphColoring{
private:
    std::vector<int> coleurs;
    bool sontVoisin(const IGraph & graph, int x,int y ){
        auto voisin = graph.adjacency(x);
        for(int j=0;j<voisin.size();j++){
           if(voisin.at(j)== y ) return true;
        }
        return false;
    }
public:
    void coloring(const   IGraph & graph ){
        int colored = 0;
        int chosenColor = 0;
        int nbNodes =graph.nbNodes();
        int coleurs[nbNodes];
        bool verified[nbNodes];
        std::vector<std::pair<int,int>> sortedSommet ;
        for(int i=0;i<nbNodes;i++){
            sortedSommet.push_back(std::make_pair(graph.degree(i),i));
            verified[i]=false;
        }
        std::sort(sortedSommet.begin(),sortedSommet.end());
        while(colored < nbNodes){
                int actual = nbNodes-1;
                while(verified[actual]){ actual--;}
                verified[actual]=true;
                auto pair = sortedSommet.at(actual);
                coleurs[sortedSommet.at(actual).second]=chosenColor;
                colored++;
                for(int i=nbNodes-1;i>=0;i--){
                        int voisin =sortedSommet.at(i).second;
                        if(!sontVoisin(graph,pair.second, voisin) && !verified[i] ){
                            coleurs[voisin]=chosenColor;
                            verified[i]=true;
                            colored++;
                        }
                }
                chosenColor++;
        }
        this->coleurs = std::vector<int>(coleurs,coleurs+nbNodes);

    }
    void afficherColeurs(){
         std::cout<<"Resultat de  l'algorithme de Welsh Powell "<<std::endl;
        for(auto i = coleurs.begin(); i!= coleurs.end(); i++)
            std::cout<<"Color choisi "<< colors[*i] <<" | "<< *i <<std::endl;

        std::cout<<""<<std::endl;
    }

};
#endif //UNTITLED3_WELSHPOWELL_HPP
