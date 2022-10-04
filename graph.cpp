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





int main(){
    return 0;
}