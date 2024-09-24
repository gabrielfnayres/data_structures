#include <iostream>
#include <fstream>
#include "graph.h"
#include <queue>

using namespace std;

vector<int> dpdfs;

void loadGraphFromFile(const string& filename, Graph& graph) {
    ifstream file(filename);

    if (!file.is_open()) {
        cerr << "Error: Could not open file." << endl;
        return;
    }

    int dimension;
    file >> dimension;

    graph = Graph(dimension);

    int value;
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            file >> value;
            cout << "Reading value at [" << i << ", " << j << "]: " << value << endl; // Debugging print

            if (value > 0 && i < j) {
                graph.addEdge(i, j); 
            }
        }
    }

    file.close();
}


int main(int argc, char* argv[]) {
    if (argc < 2) {
        cerr << "Usage: " << argv[0] << " <input_file.txt>" << endl;
        return 1;
    }

    Graph *graph = new Graph();

    loadGraphFromFile(argv[1], *graph);
    cout << "Adjacency List:" << endl;
    graph->printAdjList();

    cout << "\nAdjacency Matrix:" << endl;
    graph->printAdjMatrix();

    cout << "\nBread-First Search" << endl;
    graph->bfs(1, 4);
    
    cout << "\nDepth-First Search" << endl;
    graph->dfs(0);

    return 0;
}
