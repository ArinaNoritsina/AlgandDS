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

void print_graph( const adjacency_matrix *g){
    cout << "Матрица смежности (" << g->nvertices << " вершины):" << endl;
    cout << "-----------------------------------" << endl;

    cout << "   "; 
    for (int i = 1; i <= g->nvertices; i++) {
        cout << setw(3) << i << " ";
    }
    cout << endl;

    for (int i = 1; i <= g->nvertices; i++) {
        cout << i << "| "; 
        for (int j = 1; j <= g->nvertices; j++) {
            
            cout << setw(3) << g->weight[i][j] << " ";
        }
        cout << endl;
    }
}
