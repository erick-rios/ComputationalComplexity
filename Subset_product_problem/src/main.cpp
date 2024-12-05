/**
 * @file main.cpp
 * 
 * @brief This file contains the main function.
 * 
 * @details This function creates objects, assigns sizes to them, and solves the subset product problem.
 * 
 * @version 1.00
 * 
 * @author Erick Jesús Ríos Gonzalez
 * 
 * @date 04/12/2024
 */
#include "ObjectManager.hpp"
#include "SubsetProductSolver.hpp"
#include "Utility.hpp"
#include <iostream>

/**
 * @brief The main function.
 * 
 * @return 0 if the program executed successfully.
 */
int main() {
    // Create objects and assign sizes
    int numObjects;
    do {
        std::cout << "Enter the number of objects (>= 15): ";
        std::cin >> numObjects;
    } while (numObjects < 15);

    auto objects = ObjectManager::createObjects(numObjects);
    auto sizes = ObjectManager::assignSizes(objects);

    //  Define t and k
    int t = Utility::promptT();
    int k = Utility::promptK(200 * numObjects);  // Tamaño máximo posible

    // Solve the subset product problem
    std::cout << SubsetProductSolver::checkSubsetProduct(objects, t, sizes, k) << '\n';

    return 0;
}
