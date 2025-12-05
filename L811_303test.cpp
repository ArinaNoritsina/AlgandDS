#include "L811_303.h"

int main() {
    adjacency_matrix myGraph;
    initialize_graph(&myGraph);
    
    myGraph.nvertices = 4;
    myGraph.weight[1][2] = 5;
    myGraph.weight[2][3] = 10;
    myGraph.weight[3][1] = 3;
    myGraph.weight[4][2] = 8;
    
    print_graph(&myGraph);

    return 0;
}