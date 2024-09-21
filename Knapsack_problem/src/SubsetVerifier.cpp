/**
 * @file SubsetVerifier.cpp
 * @brief Implementation of the SubsetVerifier class
 * 
 * This file contains the implementation of the SubsetVerifier class
 * 
 * @see SubsetVerifier.hpp
 * @author Erick Jesus Rios Gonzalez
 * @date 2025-09-19
 */
#include "SubsetVerifier.hpp"

/**
 * @brief Construct a new SubsetVerifier:: SubsetVerifier object
 * 
 * @param capacity maximum capacity
 */
SubsetVerifier::SubsetVerifier(int capacity) : max_capacity(capacity) {}

/**
 * @brief Verify if a subset is valid
 * 
 * @param subset subset to verify
 * @return std::pair<bool, int> true if valid, false otherwise
 */
std::pair<bool, int> SubsetVerifier::verify_subset(const std::vector<Item>& subset) {
    int total_weight = 0;
    int total_value = 0;

    for (const auto& item : subset) {
        total_weight += item.weight;
        total_value += item.value;
    }

    if (total_weight <= max_capacity) {
        return {true, total_value};
    }
    return {false, 0};
}
