#include <iostream>
#include <list>

using namespace std;

class Breath_First_Search{

    public:

    int numberOfVertices;
    list<int>* add_list;
    bool* visited;
    
    public:

    Breath_First_Search(int vertices);

        void add_edge(int source, int destination);
        void bfs(int startVertex);
    //Breath_First_search(int vertices){

};

Breath_First_Search::Breath_First_Search(int vertices){
    numberOfVertices =vertices;
    add_list = new list <int> [vertices];
}
void Breath_First_Search::add_edge(int source, int destination){
    add_list[source].push_back(destination);
    add_list[destination].push_back(source);

}

void Breath_First_Search::bfs(int startVertex){

    list<int> queue;

    visited = new bool [numberOfVertices];
    for(int i=0;i< numberOfVertices;i++){
        visited[i]=false;
    }

    list<int>::iterator i;
    
    while(!queue.empty()){
        int newVertex = queue.front();
        cout<<"visited: "<<newVertex<<" ";
        queue.pop_front();

        for(i=add_list[newVertex].begin();i != add_list[newVertex].end();++i){
            int add_vertex =*i;
            if(!visited[add_vertex]){
                visited[add_vertex]=true;
                queue.push_back(add_vertex);
            }
        }
    }

}




int main(){

    Breath_First_Search g(4);
    g.add_edge(0,1);
    g.add_edge(0,2);
    g.add_edge(1,2);
    g.add_edge(2,0);
    g.add_edge(2,3);
    g.add_edge(3,3);
    
    g.bfs(2);

    return 0;
}