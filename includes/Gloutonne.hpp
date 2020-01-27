//
// Created by djame on 7‏/1‏/2020.
//

#ifndef UNTITLED3_GLOUTONNE_HPP
#define UNTITLED3_GLOUTONNE_HPP

#include <algorithm>
#include <iostream>

#include "IGraphColoring.hpp"
#include "Graph.hpp"


class Gloutonne : public IGraphColoring{
private :
    std::vector<int> coleurs ;
public:
    ~Gloutonne() {
    }
    void afficherColeurs(){
        std::cout<<"Resultat de  l'algorithme Glouton "<<std::endl;
        for(auto i = coleurs.begin(); i!= coleurs.end(); i++)
            std::cout<<"Color choisi "<< colors[*i] <<" | "<< *i <<std::endl;

        std::cout<<""<<std::endl;

    }

    void coloring(const IGraph & graph)   {


        int taille = graph.nbNodes();
        bool available [taille];
        int resultat[taille];
        for(int i=0;i<taille;i++){
            resultat[i]=-1;
            available[i]= true;
        }
        resultat[0]=0;
        coleurs.push_back(0);
        for(int i=1;i<graph.nbNodes();i++){
            auto adjacents =  graph.adjacency(i);
            for(auto iterator  =adjacents.begin(); iterator != adjacents.end();iterator++){
                    if(resultat[*iterator]!=-1){
                        available[resultat[*iterator]]= false;
                    }
            }
            int cr;
            for (cr = 0; cr < taille; cr++)
                if (available[cr] == true)
                    break;
            resultat[i]=cr;
            coleurs.push_back(cr);
            for(auto iterator = adjacents.begin(); iterator!=adjacents.end();iterator++){
                if(resultat[*iterator]!=-1)
                    available[resultat[*iterator]]=true;
            }


        }


    };
};
#endif //UNTITLED3_GLOUTONNE_HPP
