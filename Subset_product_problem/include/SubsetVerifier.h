/**
 * @file SubsetVerifier.h
 * @brief Definition of the SubsetVerifier class
 * 
 * This file contains the definition of the SubsetVerifier class
 * 
 * @see SubsetVerifier.cpp
 * @author Erick Jesus Rios Gonzalez
 * @date 2025-09-19
 */

#ifndef SUBSET_VERIFIER_H
#define SUBSET_VERIFIER_H

#include <vector>

/**
 * @brief SubsetVerifier class
 * 
 * This class verifies if the product of the subset is <= t
 */
class SubsetVerifier {
public:
    bool verifySubset(const std::vector<int>& subset, int t);
};

#endif // SUBSET_VERIFIER_H
