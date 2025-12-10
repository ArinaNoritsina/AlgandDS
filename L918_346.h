#ifndef L918_346_H
#define L918_346_H

const int MAXV = 100; 

typedef struct {
    double m[MAXV + 1][MAXV + 1]; 
    int n;                       
} tsp_instance;

typedef struct {
    int p[MAXV + 1]; 
    int n;           
} tsp_solution;

extern double minlb;

double distance(tsp_solution *s, int x, int y, tsp_instance *t);
double partial_solution_cost(tsp_solution *s, tsp_instance *t);
double partial_solution_lb(tsp_solution *s, tsp_instance *t);

#endif