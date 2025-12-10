#include "L918_346.h"

double minlb = 0.0;

double distance(tsp_solution *s, int x, int y, tsp_instance *t) {
    int vertex_from = s->p[x];
    int vertex_to = s->p[y];
    return t->m[vertex_from][vertex_to];
}

double partial_solution_cost(tsp_solution *s, tsp_instance *t) {
    int i;                  /* Счетчик */
    double cost = 0.0;      /* Стоимость решения */

    for (i = 1; i < (s->n); i++) {
        cost = cost + distance(s, i, i + 1, t);
    }

    return(cost);
}

double partial_solution_lb(tsp_solution *s, tsp_instance *t) {
    
    return(partial_solution_cost(s, t) + (t->n - s->n + 1) * minlb);
}