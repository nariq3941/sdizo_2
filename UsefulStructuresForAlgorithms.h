//
// Created by mrfarinq on 13.05.17.
//

#ifndef SDIZO_2_USEFULSTRUCTURESFORALGORITHMS_H
#define SDIZO_2_USEFULSTRUCTURESFORALGORITHMS_H

#include <iostream>
#include <climits>

struct Edge {
    int vertex_from = 0;
    int vertex_to = 0;
    int edge_weight = 0;

    Edge();

    Edge(int _vertex_from, int _vertex_to, int _edge_weight);
};

class Heap {
private:
    int size;
    int numberOfEdges;
    Edge *arrayOfEdges;
public:
    Heap(int size);

    ~Heap();

    void PushEdge(Edge newEdge);

    Edge PopEdge();
};

struct Vertex {
    int vertex = 0;
    int distanceFromFirstVertex = 0;

    void AddVertex(int vertex, int distanceFromFirstVertex);
};

class HeapForVertices {
private:
    int size;
    int amountOfVertices;
    Vertex *arrayOfVertices;
public:
    HeapForVertices(int size);

    ~HeapForVertices();

    Vertex GetVertexFromTheBeginning();

    void AddVertex(Vertex newVertex, int vertex_distanceFromFirstVertex);

    void DeleteVertexFromTheTop();

    int getAmountOfVertices();

    void changeDistanceFromFirstVertex(int vertex, int vertex_distanceFromFirstVertex);

    bool isIn(int vertex);

};

class DisjointSetDataStructure {
private:
    struct NodeOfDisjointSetDataStructure {
        int parent;
        int rank;
    };
    NodeOfDisjointSetDataStructure *disjointSetTree;
public:
    DisjointSetDataStructure(int numberOfNodes);

    ~DisjointSetDataStructure();

    void Init(int vertex);

    int FindParent(int vertex);

    void Union(int vertex_from, int vertex_to);
};

#endif //SDIZO_2_USEFULSTRUCTURESFORALGORITHMS_H
