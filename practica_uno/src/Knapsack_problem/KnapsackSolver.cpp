/**
 * @file KnapsackSolver.cpp
 * @brief Implementation of the KnapsackSolver class
 * 
 * This file contains the implementation of the KnapsackSolver class
 * 
 * @see KnapsackSolver.hpp
 * @author Erick Jesus Rios Gonzalez
 * @date 2025-09-19
 */
#include "KnapsackSolver.hpp"
#include <iostream>

/**
 * @brief Construct a new KnapsackSolver:: KnapsackSolver object
 */
KnapsackSolver::KnapsackSolver(int max_capacity, const std::vector<Item>& items)
    : generator(items), verifier(max_capacity), best_value(0) {}

/**
 * @brief Solve the knapsack problem
 * 
 * @param iterations number of iterations to perform
 */
void KnapsackSolver::solve(int iterations) {
    for (int i = 0; i < iterations; ++i) {
        // Generate a random subset
        std::vector<Item> subset = generator.generate_subset();

        // Verify if the subset is valid and its value
        auto [valid, value] = verifier.verify_subset(subset);

        // If valid and has a better value, keep it
        if (valid && value > best_value) {
            std::cout << "Yes. Subset found:\n";
            for (const auto& item : best_subset) {
            std::cout << "Item with weight " << item.weight << " and value " << item.value << "\n";
            }
            best_value = value;
            best_subset = subset;
        }
        else{std::cout << "No.\n";}
    }
    // Print the best subset found
    std::cout << "Best subset found:\n";
    for (const auto& item : best_subset) {
        std::cout << "Item with weight " << item.weight << " and value " << item.value << "\n";
    }
    std::cout << "Maximum value: " << best_value << std::endl;
}

