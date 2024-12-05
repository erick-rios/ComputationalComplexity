/**
 * @file main.cpp
 * 
 * @brief This file contains the main function.
 * 
 * @details This function creates objects, assigns weights and profits to them, and solves the knapsack problem.
 * 
 * @version 1.00
 * 
 * @author Erick Jesús Ríos Gonzalez
 * 
 * @date 04/12/2024
 */
#include "KnapsackProblem.hpp"
#include <iostream>
using namespace std;

/**
 * @brief The main function.
 * 
 * @return 0 if the program executed successfully.
 * 
 * @details This function creates objects, assigns weights and profits to them, and solves the knapsack problem.
 */
int main() {
    srand(time(nullptr));
    KnapsackProblem knapsackProblem;
    ObjectManager objectManager;

    // Create objects
    vector<string> objects = knapsackProblem.createObjects();
    cout << "Created objects: ";
    for (const string& obj : objects) {
        cout << obj << " ";
    }
    cout << endl;

    // Assign weights and profits
    unordered_map<string, int> weights = objectManager.assignWeights(objects);
    unordered_map<string, int> profits = objectManager.assignProfits(objects);

    // Get user inputs for capacity and k
    int capacity = knapsackProblem.getCapacityInput();
    int k = knapsackProblem.getKInput(weights);

    // Check the knapsack solution
    string result = knapsackProblem.checkKnapsack(capacity, objects, weights, profits, k);
    cout << result << endl;

    return 0;
}
