#ifndef SUBSET_PRODUCT_SOLVER_H
#define SUBSET_PRODUCT_SOLVER_H

#include "SubsetGenerator.h"
#include "SubsetVerifier.h"

// Clase que coordina la generación de subconjuntos y la verificación
class SubsetProductSolver {
public:
    // Constructor que recibe el conjunto A y el valor máximo t
    SubsetProductSolver(const std::vector<int>& A, int t);

    // Método que ejecuta la generación y verificación
    void solve();

private:
    SubsetGenerator generator; // Objeto para generar subconjuntos
    SubsetVerifier verifier;   // Objeto para verificar los subconjuntos
    int t;                     // Valor máximo permitido para el producto
};

#endif // SUBSET_PRODUCT_SOLVER_H
