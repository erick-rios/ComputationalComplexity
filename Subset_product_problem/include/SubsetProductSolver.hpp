/**
 * @file SubsetProductSolver.hpp
 * 
 * @brief This file contains the declaration of the SubsetProductSolver class.
 * 
 * @details This class contains static methods that are used to check the product of a subset of objects.
 * 
 * @version 1.00
 * 
 * @author Erick Jesús Ríos Gonzalez
 * 
 * @date 04/12/2024
 */
#ifndef SUBSET_PRODUCT_SOLVER_HPP
#define SUBSET_PRODUCT_SOLVER_HPP

#include <vector>
#include <string>
#include <unordered_map>

class SubsetProductSolver {
public:
    // Comprueba el producto del subconjunto
    static std::string checkSubsetProduct(const std::vector<std::string>& objects, int t, const std::unordered_map<std::string, int>& sizes, int k);
};

#endif
