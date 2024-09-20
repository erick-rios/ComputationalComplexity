/**
 * @file SubsetGenerator.cpp
 * @brief Implementación de la clase SubsetGenerator
 * 
 * This file contains the implementation of the class SubsetGenerator
 * 
 * @see SubsetGenerator.h
 * @author Erick Jesus Rios Gonzalez
 * @date 2025-09-19
 */

#include "SubsetGenerator.h"
#include <cstdlib> // Para rand()
#include <ctime>   // Para time()

/**
 * @brief Construct a new SubsetGenerator:: SubsetGenerator object
 */
SubsetGenerator::SubsetGenerator(const std::vector<int>& A) : A(A) {
    std::srand(std::time(0)); // Inicializar el generador de números aleatorios
}

/**
 * @brief Generates a random subset
 * 
 * @return std::vector<int> Random subset
 */
std::vector<int> SubsetGenerator::generateSubset() {
    std::vector<int> subset;
    for (int elem : A) {
        if (std::rand() % 2 == 1) {  // Random number between 0 and 1
            subset.push_back(elem);
        }
    }
    return subset;
}
