/**
 * @file SubsetGenerator.cpp
 * @brief Implementation of the SubsetGenerator class
 * 
 * This file contains the implementation of the SubsetGenerator class
 * 
 * @see SubsetGenerator.hpp
 * @author Erick Jesus Rios Gonzalez
 * @date 2025-09-19
 */
#include "SubsetGenerator.hpp"
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

/**
 * @brief Construct a new SubsetGenerator:: SubsetGenerator object
 * 
 * @param its vector of items
 */
SubsetGenerator::SubsetGenerator(const std::vector<Item>& its) : items(its) {
    std::srand(std::time(0)); // Seed the random generator
}
/**
 * @brief Generate a random subset
 * 
 * @return std::vector<Item> random subset
 */
std::vector<Item> SubsetGenerator::generate_subset() {
    std::vector<Item> subset;
    for (const auto& item : items) {
        if (std::rand() % 2 == 1) {
            subset.push_back(item);
        }
    }
    return subset;
}
