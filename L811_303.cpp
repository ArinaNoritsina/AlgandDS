#include <iostream>
#include <iomanip>
#include "L811_303.h"

using namespace std;

void initialize_graph(adjacency_matrix *g) {
    g->nvertices = 0;
    
    for (int i = 1; i <= MAXV; i++) {
        for (int j = 1; j <= MAXV; j++) {
            g->weight[i][j] = 0;
        }
    }
}

int main() {
    adjacency_matrix myGraph;
    initialize_graph(&myGraph);
    
    myGraph.nvertices = 4;
    myGraph.weight[1][2] = 5;
    myGraph.weight[2][3] = 10;
    myGraph.weight[3][1] = 3;
    myGraph.weight[4][2] = 8;
    
    cout << "Матрица смежности (" << myGraph.nvertices << " вершины):" << endl;
    cout << "-----------------------------------" << endl;

    cout << "   "; 
    for (int i = 1; i <= myGraph.nvertices; i++) {
        cout << setw(3) << i << " ";
    }
    cout << endl;

    for (int i = 1; i <= myGraph.nvertices; i++) {
        cout << i << "| "; 
        for (int j = 1; j <= myGraph.nvertices; j++) {
            
            cout << setw(3) << myGraph.weight[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}