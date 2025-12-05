#ifndef L811_H
#define L811_H

const int MAXV = 100;

typedef struct {
    int weight[MAXV + 1][MAXV + 1]; /* Информация о смежности/весе */
    int nvertices;                  /* Количество вершин в графе */
} adjacency_matrix;

// Прототипы функций
void initialize_graph(adjacency_matrix *g);
void print_graph( const adjacency_matrix *g);
#endif