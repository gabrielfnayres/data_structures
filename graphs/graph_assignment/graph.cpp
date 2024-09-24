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

void Graph::bfs(int u, int target){

  bool* visited = new bool[vertex];
  int* aux = new int[vertex];
  for(int i = 0; i < vertex; i++){
    visited[i] = false;
    aux[i] = -1;
  }

  std::queue<int> q;

  visited[u] = true;
  q.push(u);
  bool found = false;
  while(!q.empty()){
    u = q.front();
    q.pop();
    for(auto i = adjacency_list[u].begin(); i != adjacency_list[u].end(); i++){
      if(!visited[*i]){
        visited[*i] = true;
        aux[*i] = u;
        q.push(*i);

        if(*i == target){
          found = true;
          break;
        }
      }
    }
    if(found) break;
    
  }
  if (found){
    std::vector<int> resp;

    for(int i = target; i != -1; i = aux[i]){
      resp.push_back(i);
    }
    std::reverse(resp.begin(), resp.end());
    
    for(int i : resp){
      std::cout << i << " ";
    }
  }else{
    std::cout << "Não há caminho entre os vértices!" << std::endl;
  }
  delete[] visited;
  delete[] aux;
} 


void Graph::dfs(int u){

  std::vector<bool> visited(vertex);

  for(int i = 0; i < vertex; i++){
    visited[i] = false;  
  }

  std::stack<int> st;
  visited[u] = true;

  st.push(u);

  while(!st.empty()){

    int aux = st.top();
    st.pop();

    if(!visited[aux]){
      std::cout << aux << " ";
      visited[aux] = true;
    }

    for(auto i = adjacency_list[aux].begin(); i != adjacency_list[aux].end(); i++){
      if(!visited[*i]){
        st.push(*i);
      }
    }
  }
}