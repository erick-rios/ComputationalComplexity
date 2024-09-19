#include "SubsetGenerator.h"
#include <cstdlib> // Para rand()
#include <ctime>   // Para time()

// Constructor que inicializa el generador con el conjunto A
SubsetGenerator::SubsetGenerator(const std::vector<int>& A) : A(A) {
    std::srand(std::time(0)); // Inicializar el generador de números aleatorios
}

// Método que genera un subconjunto aleatorio de A
std::vector<int> SubsetGenerator::generateSubset() {
    std::vector<int> subset;
    for (int elem : A) {
        if (std::rand() % 2 == 1) {  // Aleatorio 0 o 1
            subset.push_back(elem);
        }
    }
    return subset;
}
