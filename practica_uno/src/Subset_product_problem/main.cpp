#include "SubsetProductSolver.h"
#include <vector>

int main() {
    // Definir el conjunto A y el valor máximo t
    std::vector<int> A = {2, 3, 7, 5, 11, 200, 198, 156, 47, 32, 1, 2, 3, 5, 6, 7, 10, 15};
    int t = 10000;

    // Crear un objeto del solucionador y resolver el problema
    SubsetProductSolver solver(A, t);
    solver.solve();

    return 0;
}
