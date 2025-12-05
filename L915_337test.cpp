#include <iostream>
#include "L915_337.h"
using namespace std;

int main() {
    
    boardtype myBoard;
    
    int counter = 1;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            myBoard.m[i][j] = counter++;
        }
    }

    int a[N+1] = {0, 1, 2, 3}; 
    int k = N;

    cout << "Start main..." << endl;
    cout << "Finished flag before: " << (finished ? "true" : "false") << endl;

    process_solution(a, k, &myBoard);

    cout << "Finished flag after: " << (finished ? "true" : "false") << endl;

    return 0;
}