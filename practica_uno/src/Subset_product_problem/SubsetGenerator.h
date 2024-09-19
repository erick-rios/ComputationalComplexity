#ifndef SUBSET_GENERATOR_H
#define SUBSET_GENERATOR_H

#include <vector>

// Clase que se encarga de generar subconjuntos de forma no determinista
class SubsetGenerator {
public:
    // Constructor que inicializa el generador con el conjunto A
    SubsetGenerator(const std::vector<int>& A);

    // Método que genera un subconjunto aleatorio de A
    std::vector<int> generateSubset();

private:
    std::vector<int> A; // Conjunto original
};

#endif // SUBSET_GENERATOR_H
