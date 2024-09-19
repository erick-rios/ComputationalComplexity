#include "SubsetProductSolver.h"
#include <iostream>

// Constructor que recibe el conjunto A y el valor máximo t
SubsetProductSolver::SubsetProductSolver(const std::vector<int>& A, int t)
    : generator(A), verifier(), t(t) {}

// Método que ejecuta la generación y verificación
void SubsetProductSolver::solve() {
    std::vector<int> subset = generator.generateSubset();
    bool result = verifier.verifySubset(subset, t);

    // Mostrar el subconjunto generado
    std::cout << "Subconjunto generado: { ";
    for (int elem : subset) {
        std::cout << elem << " ";
    }
    std::cout << "}" << std::endl;

    // Mostrar si el producto cumple con la condición
    std::cout << "¿El producto del subconjunto es <= " << t << "? ";
    std::cout << (result ? "Sí" : "No") << std::endl;
}
