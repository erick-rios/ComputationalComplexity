/**
 * @file main.cpp
 * @brief Main file for the subset product problem
 * 
 * This file contains the main function to solve the subset product problem
 * 
 * @see SubsetProductSolver.h
 * @author Erick Jesus Rios Gonzalez
 * @date 2025-09-19
 */
#include "SubsetProductSolver.h"
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iostream>

/**
 * @brief Main function
 * 
 * @return int 0 if success
 */
int main() {
    // Initialize random seed
    std::srand(std::time(0));

    // Define at least 15 elements with random sizes (<= 200)
    std::vector<int> A;
    int num_elements = 15;  // Minimum number of elements

    for (int i = 0; i < num_elements; ++i) {
        int random_size = std::rand() % 201;  // Generate random size (0-200)
        A.push_back(random_size);
    }

    // Print the randomly generated A
    std::cout << "Randomly generated elements for subset product problem:\n";
    for (const auto& element : A) {
        std::cout << "Element size: " << element << std::endl;
    }
    int t = 1000000;

    // Create a SubsetProductSolver object and solve the problem
    SubsetProductSolver solver(A, t);
    solver.solve();

    return 0;
}
