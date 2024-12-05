/**
 * @file ObjectManager.cpp
 * 
 * @brief This file contains the implementation of the ObjectManager class.
 * 
 * @details This class contains static methods that are used to assign weights and profits to objects.  
 * 
 * @version 1.00
 * 
 * @author Erick Jesús Ríos Gonzalez
 * 
 * @date 04/12/2024
 */
#include "ObjectManager.hpp"
#include <iostream>
#include <cstdlib>

/**
 * @brief Assigns random weights to the objects.
 * 
 * @param objects The objects to assign weights to.
 * 
 * @return A map containing the weights assigned to each object.
 * 
 * @details This method assigns a random weight to each object in the input vector.
 * 
 * @version 1.00
 */
unordered_map<string, int> ObjectManager::assignWeights(const vector<string>& objects) {
    unordered_map<string, int> weights;
    for (const string& obj : objects) {
        weights[obj] = getRandomNumber(1, 100);
    }
    return weights;
}

/**
 * @brief Assigns random profits to the objects.
 * 
 * @param objects The objects to assign profits to.
 * 
 * @return A map containing the profits assigned to each object.
 * 
 * @details This method assigns a random profit to each object in the input vector.
 * 
 * @version 1.00
 */
unordered_map<string, int> ObjectManager::assignProfits(const vector<string>& objects) {
    unordered_map<string, int> profits;
    for (const string& obj : objects) {
        profits[obj] = getRandomNumber(1, 100);
    }
    return profits;
}

/**
 * @brief Prints the weights assigned to the objects.
 * 
 * @param weights The weights assigned to the objects.
 * @param objects The objects to print.
 * 
 * @details This method prints the weights assigned to the objects in the input vector.
 * 
 * @version 1.00
 */
void ObjectManager::printWeights(const unordered_map<string, int>& weights, const vector<string>& objects) {
    for (const string& obj : objects) {
        if (weights.find(obj) != weights.end()) {
            cout << "Object: " << obj << ", Weight: " << weights.at(obj) << endl;
        }
    }
}

/**
 * @brief Prints the profits assigned to the objects.
 * 
 * @param profits The profits assigned to the objects.
 * @param objects The objects to print.
 * 
 * @details This method prints the profits assigned to the objects in the input vector.
 * 
 * @version 1.00
 */
void ObjectManager::printProfits(const unordered_map<string, int>& profits, const vector<string>& objects) {
    for (const string& obj : objects) {
        if (profits.find(obj) != profits.end()) {
            cout << "Object: " << obj << ", Profit: " << profits.at(obj) << endl;
        }
    }
}

/**
 * @brief Generates a random number in the range [min, max].
 * 
 * @param min The minimum value.
 * @param max The maximum value.
 * 
 * @return A random number in the range [min, max].
 * 
 * @version 1.00
 */
int ObjectManager::getRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}
