#include <cstdio>
#include <iostream>
#include "L915_337.h"

using namespace std;


bool finished = false;


void print_board(boardtype *board) {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cout << board->m[i][j] << " ";
        }
        cout << endl;
    }
    cout << "----------------" << endl;
}


void process_solution(int a[], int k, boardtype *board) {
    finished = true; 
    printf("process solution\n");
    print_board(board);
}