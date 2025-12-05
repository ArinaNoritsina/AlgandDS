#ifndef L915_337_H
#define L915_337_H

const int N = 3;


typedef struct {
    int m[N+1][N+1]; 
} boardtype;

extern bool finished;

void print_board(boardtype *board);
void process_solution(int a[], int k, boardtype *board);

#endif