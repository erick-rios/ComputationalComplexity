/**
 * @file SubsetVerifier.hpp
 * @brief Definition of the SubsetVerifier class
 * 
 * This file contains the definition of the SubsetVerifier class
 * 
 * @see SubsetVerifier.cpp
 * @author Erick Jesus Rios Gonzalez
 * @date 2025-09-19
 */
#ifndef SUBSET_VERIFIER_HPP
#define SUBSET_VERIFIER_HPP

#include <vector>
#include "Item.hpp"

/**
 * @brief SubsetVerifier class
 */
class SubsetVerifier {
public:
    SubsetVerifier(int max_capacity);

    std::pair<bool, int> verify_subset(const std::vector<Item>& subset);

private:
    int max_capacity;
};

#endif
