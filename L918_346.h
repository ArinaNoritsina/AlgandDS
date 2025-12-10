#ifndef L918_346_H
#define L918_346_H

const int MAXV = 100; // Максимальное количество вершин

// Структура для описания графа (задачи)
typedef struct {
    double m[MAXV + 1][MAXV + 1]; // Матрица весов (расстояний)
    int n;                        // Общее количество вершин в задаче
} tsp_instance;

// Структура для описания текущего (частичного) решения
typedef struct {
    int p[MAXV + 1]; // Массив перестановок (путь), p[1] - первая вершина, p[2] - вторая...
    int n;           // Количество вершин, включенных в путь на данный момент
} tsp_solution;

// Глобальная переменная для минимальной оценки (heuristic)
extern double minlb;

// Прототипы функций
double distance(tsp_solution *s, int x, int y, tsp_instance *t);
double partial_solution_cost(tsp_solution *s, tsp_instance *t);
double partial_solution_lb(tsp_solution *s, tsp_instance *t);

#endif