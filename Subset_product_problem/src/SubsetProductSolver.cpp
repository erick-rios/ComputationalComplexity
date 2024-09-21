/**
 * @file SubsetProductSolver.cpp
 * @brief Implementación de la clase SubsetProductSolver
 * 
 * This file contains the implementation of the class SubsetProductSolver
 * 
 * @see SubsetProductSolver.h
 * @author Erick Jesus Rios Gonzalez
 * @date 2025-09-19
 */

#include "SubsetProductSolver.h"
#include <iostream>

/**
 * @brief Construct a new SubsetProductSolver:: SubsetProductSolver object
 * 
 * @param A vector of elements
 * @param t maximum value
 */
SubsetProductSolver::SubsetProductSolver(const std::vector<int>& A, int t)
    : generator(A), verifier(), t(t) {}

/**
 * @brief Solve the subset product problem
 */
void SubsetProductSolver::solve() {
    std::vector<int> subset = generator.generateSubset();
    bool result = verifier.verifySubset(subset, t);

    // Print the generated subset
    std::cout << "Subset generated: { ";
    for (int elem : subset) {
        std::cout << elem << " ";
    }
    std::cout << "}" << std::endl;

    // print if the subset satisfies the condition
    std::cout << "The product of the subset is <= " << t << "? ";
    std::cout << (result ? "Yes" : "No") << std::endl;
}
