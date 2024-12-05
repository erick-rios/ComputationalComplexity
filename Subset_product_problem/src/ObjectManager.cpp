/**
 * @file ObjectManager.cpp
 * 
 * @brief This file contains the implementation of the ObjectManager class.
 * 
 * @details This class contains static methods that are used to create objects and assign sizes to them.
 * 
 * @version 1.00
 * 
 * @author Erick Jesús Ríos Gonzalez
 * 
 * @date 04/12/2024
 */
#include "ObjectManager.hpp"
#include <iostream>
#include <random>

/**
 * @brief Creates a set of objects with names "obj 1", "obj 2", ...
 * 
 * @param count The number of objects to create.
 * 
 * @return A vector containing the names of the created objects.
 * 
 * @details This method creates a set of objects with names "obj 1", "obj 2", ..., "obj count".
 * 
 * @version 1.00
 */
std::vector<std::string> ObjectManager::createObjects(int count) {
    std::vector<std::string> objects;
    for (int i = 1; i <= count; ++i) {
        objects.push_back("obj " + std::to_string(i));
    }
    return objects;
}

/**
 * @brief Assigns a random size to each object.
 * 
 * @param objects The objects to assign sizes to.
 * 
 * @return A map containing the sizes assigned to each object.
 * 
 * @details This method assigns a random size to each object in the input vector.
 * 
 * @version 1.00
 */
std::unordered_map<std::string, int> ObjectManager::assignSizes(const std::vector<std::string>& objects) {
    std::unordered_map<std::string, int> sizes;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1, 200);

    for (const auto& obj : objects) {
        sizes[obj] = dist(gen);
    }
    return sizes;
}

/**
 * @brief Prints the sizes assigned to the objects.
 * 
 * @param sizes The map containing the sizes assigned to the objects.
 * 
 * @param objects The objects to print sizes for.
 * 
 * @details This method prints the sizes assigned to the objects in the input vector.
 * 
 * @version 1.00
 */
void ObjectManager::printSizes(const std::unordered_map<std::string, int>& sizes, const std::vector<std::string>& objects) {
    for (const auto& obj : objects) {
        auto it = sizes.find(obj);
        if (it != sizes.end()) {
            std::cout << "Object: " << obj << ", Size: " << it->second << '\n';
        }
    }
}
