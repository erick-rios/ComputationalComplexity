/**
 * @file main.cpp
 * @brief Main file for the knapsack problem
 * 
 * This file contains the main function to solve the knapsack problem
 * 
 * @see KnapsackSolver.hpp
 * @see Item.hpp
 * 
 * @author Erick Jesus Rios Gonzalez
 * @date 2025-09-19
 */
#include <iostream>
#include <vector>
#include <cstdlib>  
#include <ctime>    
#include "Item.hpp"
#include "KnapsackSolver.hpp"

/**
 * @brief Main function
 * 
 * @return int 0 if success
 */
int main() {
    // Initialize random seed
    std::srand(std::time(0));

    // Define at least 10 items with random weights and values
    std::vector<Item> items;
    int num_items = 10;  // Minimum number of items

    for (int i = 0; i < num_items; ++i) {
        int random_weight = std::rand() % 101;  // Generate random weight (0-100)
        int random_value = std::rand() % 101;   // Generate random value (0-100)
        items.push_back(Item(random_weight, random_value));
    }

    // Print items' weights and values
    std::cout << "Randomly generated items for knapsack problem:\n";
    for (const auto& item : items) {
        std::cout << "Item - Weight: " << item.weight << ", Value: " << item.value << std::endl;
    }

    int knapsack_capacity = 200;  // Maximum knapsack capacity

    // Create a KnapsackSolver object and solve the problem
    KnapsackSolver solver(knapsack_capacity, items);
    solver.solve(1000);  // Test with 1000 iterations

    return 0;
}
