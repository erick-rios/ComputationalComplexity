/**
 * @file SubsetGenerator.hpp
 * @brief Definition of the SubsetGenerator class
 * 
 * This file contains the definition of the SubsetGenerator class
 * 
 * @see SubsetGenerator.cpp
 * @author Erick Jesus Rios Gonzalez
 * @date 2025-09-19
 */
#ifndef SUBSET_GENERATOR_HPP
#define SUBSET_GENERATOR_HPP

#include <vector>
#include "Item.hpp"

/**
 * @brief SubsetGenerator class
 */
class SubsetGenerator {
public:
    SubsetGenerator(const std::vector<Item>& items);

    std::vector<Item> generate_subset();

private:
    std::vector<Item> items;
};

#endif
