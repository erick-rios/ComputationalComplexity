/**
 * @file KnapsackSolver.hpp
 * @brief Definition of the KnapsackSolver class
 * 
 * This file contains the definition of the KnapsackSolver class
 * 
 * @see KnapsackSolver.cpp
 * @author Erick Jesus Rios Gonzalez
 * @date 2025-09-19
 */
#ifndef KNAPSACK_SOLVER_HPP
#define KNAPSACK_SOLVER_HPP

#include <vector>
#include "Item.hpp"
#include "SubsetGenerator.hpp"
#include "SubsetVerifier.hpp"

/**
 * @brief KnapsackSolver class
 */
class KnapsackSolver {
public:
    KnapsackSolver(int max_capacity, const std::vector<Item>& items);
    
    void solve(int iterations);

private:
    SubsetGenerator generator;
    SubsetVerifier verifier;
    int best_value;
    std::vector<Item> best_subset;
};

#endif
