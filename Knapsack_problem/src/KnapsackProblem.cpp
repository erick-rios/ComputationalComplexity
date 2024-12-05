/**
 * @file KnapsackProblem.cpp
 * 
 * @brief This file contains the implementation of the KnapsackProblem class.
 * 
 * @details This class contains methods that are used to create objects and solve the knapsack problem.
 * 
 * @version 1.00
 * 
 * @author Erick Jesús Ríos Gonzalez
 * 
 * @date 04/12/2024
 */
#include "KnapsackProblem.hpp"
#include <iostream>
#include <cstdlib>
using namespace std;

/**
 * @brief Creates a set of objects.
 * 
 * @return A vector containing the names of the created objects.
 * 
 * @details This method prompts the user to enter the number of objects to create and generates a set of objects with names "obj 1", "obj 2", ..., "obj count".
 * 
 * @version 1.00
 */
vector<string> KnapsackProblem::createObjects() {
    int count;
    while (true) {
        cout << "Enter the number of objects to create (minimum 10): ";
        cin >> count;
        if (count >= 10) break;
        cout << "The number must be at least 10. Try again." << endl;
    }

    vector<string> objects;
    for (int i = 1; i <= count; ++i) {
        objects.push_back("obj " + to_string(i));
    }
    return objects;
}

/**
 * @brief Checks the knapsack problem.
 * 
 * @param capacity The capacity of the knapsack.
 * @param objects The objects to consider.
 * @param weights The weights of the objects.
 * @param profits The profits of the objects.
 * @param k The minimum profit required.
 * 
 * @return A string indicating whether the knapsack problem can be solved.
 * 
 * @details This method randomly selects a subset of the input objects and checks if the total weight is within the specified capacity and the total profit is at least k.
 * 
 * @version 1.00
 */
string KnapsackProblem::checkKnapsack(int capacity, const vector<string>& objects,
                                      const unordered_map<string, int>& weights,
                                      const unordered_map<string, int>& profits, int k) {
    vector<string> candidateSolution;
    for (const string& obj : objects) {
        if (rand() % 2 == 1) {
            candidateSolution.push_back(obj);
        }
    }

    cout << "Candidate solution: ";
    for (const string& obj : candidateSolution) {
        cout << obj << " ";
    }
    cout << endl;

    cout << "Weights:" << endl;
    objectManager.printWeights(weights, candidateSolution);

    cout << "Profits:" << endl;
    objectManager.printProfits(profits, candidateSolution);

    int totalWeight = 0;
    int totalProfit = 0;

    for (const string& obj : candidateSolution) {
        totalWeight += weights.at(obj);
    }
    cout << "Total Weight: " << totalWeight << endl;

    if (totalWeight > capacity) {
        return "Decision: NO";
    }

    for (const string& obj : candidateSolution) {
        totalProfit += profits.at(obj);
    }
    cout << "Total Profit: " << totalProfit << endl;

    if (totalProfit < k) {
        return "Decision: NO";
    }

    return "Decision: YES";
}

/**
 * @brief Prompts the user for the knapsack capacity.
 * 
 * @return The capacity entered by the user.
 * 
 * @details This method prompts the user to enter the capacity of the knapsack and validates the input.
 * 
 * @version 1.00
 */
int KnapsackProblem::getCapacityInput() {
    int capacity;
    while (true) {
        cout << "Enter the knapsack capacity: ";
        cin >> capacity;
        if (capacity > 0) break;
        cout << "Capacity must be greater than 0. Try again." << endl;
    }
    return capacity;
}

/**
 * @brief Prompts the user for the value of K.
 * 
 * @param weights The weights of the objects.
 * 
 * @return The value of K entered by the user.
 * 
 * @details This method prompts the user to enter the value of K and validates the input.
 * 
 * @version 1.00
 */
int KnapsackProblem::getKInput(const unordered_map<string, int>& weights) {
    int totalWeight = 0;
    for (const auto& pair : weights) {
        totalWeight += pair.second;
    }

    int k;
    while (true) {
        cout << "Enter the value of K: ";
        cin >> k;
        if (k >= 1 && k <= totalWeight) break;
        cout << "K must be between 1 and the total weight of all objects. Try again." << endl;
    }
    return k;
}

