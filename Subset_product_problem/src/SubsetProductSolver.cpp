/**
 * @file SubsetProductSolver.cpp
 * 
 * @brief This file contains the implementation of the SubsetProductSolver class.
 * 
 * @details This class contains static methods that are used to check the product of a subset of objects.
 * 
 * @version 1.00
 * 
 * @author Erick Jesús Ríos Gonzalez
 * 
 * @date 04/12/2024
 */
#include "SubsetProductSolver.hpp"
#include "ObjectManager.hpp"
#include <iostream>
#include <random>

/**
 * @brief Checks the product of a subset of objects.
 * 
 * @param objects The objects to consider.
 * @param t The maximum product allowed.
 * @param sizes The sizes of the objects.
 * @param k The minimum product required.
 * 
 * @return A string indicating whether the product of the subset is within the specified range.
 * 
 * @details This method randomly selects a subset of the input objects and checks if the product of their sizes is within the specified range.
 * 
 * @version 1.00
 */
std::string SubsetProductSolver::checkSubsetProduct(const std::vector<std::string>& objects, int t, const std::unordered_map<std::string, int>& sizes, int k) {
    // Random Phase 
    std::vector<std::string> candidate;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(0, 1);

    for (const auto& obj : objects) {
        if (dist(gen) == 1) {
            candidate.push_back(obj);
        }
    }

    // Show the candidate subset
    std::cout << "Candidate subset: ";
    for (const auto& obj : candidate) {
        std::cout << obj << " ";
    }
    std::cout << '\n';
    std::cout << "Sizes:\n";
    ObjectManager::printSizes(sizes, candidate);

    // Verification Phase
    long long product = 1;
    for (const auto& obj : candidate) {
        product *= sizes.at(obj);
    }

    std::cout << "Total Product: " << product << '\n';

    if (product >= k && product <= t) {
        return "Answer to the decision problem: YES";
    }
    return "Answer to the decision problem: NO";
}
