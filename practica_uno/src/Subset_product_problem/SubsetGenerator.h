/**
 * @file SubsetGenerator.h
 * @brief Definition of the SubsetGenerator class
 * 
 * This file contains the definition of the SubsetGenerator class
 * 
 * @see SubsetGenerator.cpp
 * @author Erick Jesus Rios Gonzalez
 * @date 2025-09-19
 */

#ifndef SUBSET_GENERATOR_H
#define SUBSET_GENERATOR_H

#include <vector>

/**
 * @brief SubsetGenerator class
 */
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
