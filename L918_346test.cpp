#include <iostream>
#include "L918_346.h"

using namespace std;

int main() {
    // 1. Создаем граф (Instance)
    tsp_instance myGraph;
    myGraph.n = 5; // Всего 5 городов

    // Заполним матрицу расстояний (для примера пусть будет симметричная)
    // 1-2: 10, 2-3: 20, 3-4: 15, остальные большие числа
    // Обнулим все сначала
    for(int i=1; i<=5; i++) 
        for(int j=1; j<=5; j++) 
            myGraph.m[i][j] = 0;

    myGraph.m[1][2] = 10.0;
    myGraph.m[2][3] = 20.0;
    myGraph.m[3][4] = 15.0;

    // 2. Устанавливаем minlb (минимальная нижняя граница)
    // Допустим, самое дешевое ребро в графе весит 5.0
    minlb = 5.0; 

    // 3. Создаем частичное решение (Solution)
    tsp_solution mySol;
    
    // Допустим, мы вышли из города 1, пошли в 2, потом в 3.
    mySol.p[1] = 1;
    mySol.p[2] = 2;
    mySol.p[3] = 3;
    mySol.n = 3; // В пути сейчас 3 города (1 -> 2 -> 3)

    // 4. Вызываем функции
    double current_cost = partial_solution_cost(&mySol, &myGraph);
    double lower_bound = partial_solution_lb(&mySol, &myGraph);

    // 5. Вывод результатов
    
    cout << "Path: 1 -> 2 -> 3" << endl;
    cout << "Distance 1->2 is " << myGraph.m[1][2] << endl;
    cout << "Distance 2->3 is " << myGraph.m[2][3] << endl;
    cout << "------------------------------------------" << endl;
    
    cout << "Partial Solution Cost (real distance walked): " << current_cost << endl;
    // Ожидаем 10 + 20 = 30
    
    cout << "Lower Bound (heuristic estimation): " << lower_bound << endl;
    // Ожидаем: Cost (30) + (TotalVertices(5) - Visited(3) + 1) * minlb(5)
    // 30 + (3 * 5) = 45

    return 0;
}