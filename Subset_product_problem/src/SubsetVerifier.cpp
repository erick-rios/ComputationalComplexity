/**
 * @file SubsetVerifier.cpp
 * @brief Implementación de la clase SubsetVerifier
 * 
 * This file contains the implementation of the class SubsetVerifier
 * 
 * @see SubsetVerifier.h
 * @author Erick Jesus Rios Gonzalez
 * @date 2025-09-19
 */

#include "SubsetVerifier.h"

/**
 * @brief Construct a new SubsetVerifier:: SubsetVerifier object
 * 
 * @param t maximum value
 * 
 */
bool SubsetVerifier::verifySubset(const std::vector<int>& subset, int t) {
    int product = 1;
    for (int elem : subset) {
        product *= elem;
        if (product > t) { 
            return false;
        }
    }
    return true;
}
