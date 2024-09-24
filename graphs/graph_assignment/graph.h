#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <algorithm>
#include <stack>
class Graph{
    public:
    int max_size;
    int vertex;
    
    std::list<int> *adjacency_list;
    std::vector<std::vector<int>> matrix;
    
    Graph();
    
    Graph(int vertex);


    void addEdge(int u, int v);
    
    void printAdjList();

    void printAdjMatrix();
    
    void bfs(int u, int target);
    void dfs(int u);
};
