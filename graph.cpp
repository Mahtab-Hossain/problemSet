#include <iostream>
#include <list>

using namespace std;

class Breath_First_search{

    public:

    int numberOfVertices;
    list<int>* add_list;
    bool* visited;
    
    public:

    Breath_First_search(int vertices);
        void add_edge(int source, int destination);
        void bfs(int startVertex);
        

};




int main(){
    return 0;
}