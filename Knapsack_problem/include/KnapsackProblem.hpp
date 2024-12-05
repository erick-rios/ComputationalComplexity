/**
 * @file KnapsackProblem.hpp
 * 
 * @brief This file contains the declaration of the KnapsackProblem class.
 * 
 * @details This class contains methods that are used to create objects and solve the knapsack problem.
 * 
 * @version 1.00
 * 
 * @author Erick Jesús Ríos Gonzalez
 * 
 * @date 04/12/2024
 */
#ifndef KNAPSACKPROBLEM_HPP
#define KNAPSACKPROBLEM_HPP

#include "ObjectManager.hpp"
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class KnapsackProblem {
public:
    vector<string> createObjects();
    string checkKnapsack(int capacity, const vector<string>& objects,
                         const unordered_map<string, int>& weights,
                         const unordered_map<string, int>& profits, int k);
    int getCapacityInput();
    int getKInput(const unordered_map<string, int>& weights);

private:
    ObjectManager objectManager;
};

#endif
