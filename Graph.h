//
// Created by mrfarinq on 11.05.17.
//

#ifndef SDIZO_2_GRAPH_H
#define SDIZO_2_GRAPH_H

#include <iostream>

class Graph {
protected:
    int maximumWeight;
    int amountOfEdges;
    int amountOfVertices;
    int firstVertex;
    int lastVertex;
    int **edges;
    
public:
    Graph();
    
    virtual ~Graph();
    
    void CreateGraphWithRandomIntegers();
    void ReadGraphFromFile(std::string path);
    void SaveToFile();
    virtual void KruskalsAlgorithm() = 0;
    virtual void PrimsAlgorithm() = 0;
    virtual void DijkstrasAlgorithm() =0;
    virtual void Ford_FulkersonAlgorithm() =0;
};


#endif //SDIZO_2_GRAPH_H