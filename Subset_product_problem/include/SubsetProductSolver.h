/**
 * @file SubsetProductSolver.h
 * @brief Definition of the SubsetProductSolver class
 * 
 * This file contains the definition of the SubsetProductSolver class
 * 
 * @see SubsetProductSolver.cpp
 * @author Erick Jesus Rios Gonzalez
 * @date 2025-09-19
 */

#ifndef SUBSET_PRODUCT_SOLVER_H
#define SUBSET_PRODUCT_SOLVER_H

#include "SubsetGenerator.h"
#include "SubsetVerifier.h"

/**
 * @brief SubsetProductSolver class
 */
class SubsetProductSolver {
public:
    
    SubsetProductSolver(const std::vector<int>& A, int t);

    void solve();

private:
    SubsetGenerator generator; 
    SubsetVerifier verifier;   
    int t;                    
};

#endif // SUBSET_PRODUCT_SOLVER_H
