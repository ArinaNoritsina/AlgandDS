#include <iostream>
#include "L918_346.h"

using namespace std;

int main() {

    tsp_instance myGraph;
    myGraph.n = 5; 

    for(int i=1; i<=5; i++) 
        for(int j=1; j<=5; j++) 
            myGraph.m[i][j] = 0;

    myGraph.m[1][2] = 10.0;
    myGraph.m[2][3] = 20.0;
    myGraph.m[3][4] = 15.0;

    minlb = 5.0; 

    tsp_solution mySol;
    
    mySol.p[1] = 1;
    mySol.p[2] = 2;
    mySol.p[3] = 3;
    mySol.n = 3; 

    double current_cost = partial_solution_cost(&mySol, &myGraph);
    double lower_bound = partial_solution_lb(&mySol, &myGraph);

    
    cout << "Path: 1 -> 2 -> 3" << endl;
    cout << "Distance 1->2 is " << myGraph.m[1][2] << endl;
    cout << "Distance 2->3 is " << myGraph.m[2][3] << endl;
    cout << "------------------------------------------" << endl;
    
    cout << "Partial Solution Cost (real distance walked): " << current_cost << endl;
    
    cout << "Lower Bound (heuristic estimation): " << lower_bound << endl;

    return 0;
}