#include "L918_346.h"

// Инициализация глобальной переменной
double minlb = 0.0;

// Вспомогательная функция, возвращающая расстояние между вершинами.
// В коде на картинке вызов идет как distance(s, i, i+1, t).
// Это означает: взять вершину, стоящую на позиции i в решении s,
// и вершину на позиции i+1, и найти расстояние между ними в графе t.
double distance(tsp_solution *s, int x, int y, tsp_instance *t) {
    int vertex_from = s->p[x];
    int vertex_to = s->p[y];
    return t->m[vertex_from][vertex_to];
}

// --- КОД С КАРТИНКИ ---

// Листинг 9.18. Вычисление стоимости решения
double partial_solution_cost(tsp_solution *s, tsp_instance *t) {
    int i;                  /* Счетчик */
    double cost = 0.0;      /* Стоимость решения */

    // Проходим по всем вершинам, добавленным в путь, кроме последней
    for (i = 1; i < (s->n); i++) {
        cost = cost + distance(s, i, i + 1, t);
    }

    return(cost);
}

double partial_solution_lb(tsp_solution *s, tsp_instance *t) {
    // Формула: (текущая стоимость) + (кол-во оставшихся ребер * минимальный вес ребра)
    // (t->n - s->n + 1) — это грубая оценка количества ребер, которые осталось пройти, чтобы замкнуть цикл.
    return(partial_solution_cost(s, t) + (t->n - s->n + 1) * minlb);
}