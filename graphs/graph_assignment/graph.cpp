#include "graph.h"

Graph::Graph(){}

Graph::Graph(int vertex){
    
    this->vertex = vertex;

    adjacency_list = new std::list<int>[vertex];
    matrix.resize(vertex, std::vector<int>(vertex));     

}

void Graph::addEdge(int u, int v){
    adjacency_list[u].push_back(v);
    adjacency_list[v].push_back(u);

    matrix[u][v] = 1;
    matrix[v][u] = 1;
}

void Graph::printAdjList(){

    for(int i = 0; i < vertex; i++){
        std::cout << "Vertex: " << i << " -> ";
        for(int a : adjacency_list[i]){
            std::cout << a << " ";
        }
        std::cout<<std::endl;
    }
}

void Graph::printAdjMatrix(){
    for(int i = 0; i < vertex; i++){
        for(int j = 0; j < vertex; j++){
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}



