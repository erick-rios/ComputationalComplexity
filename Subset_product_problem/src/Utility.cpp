/**
 * @file Utility.cpp
 * 
 * @brief This file contains the implementation of the Utility class.
 * 
 * @details This class contains static methods that are used to prompt the user for input.
 * 
 * @version 1.00
 * 
 * @author Erick Jesús Ríos Gonzalez
 * 
 * @date 04/12/2024
 */
#include "Utility.hpp"
#include <iostream>

/**
 * @brief Prompts the user for the upper bound.
 * 
 * @return The upper bound entered by the user.
 * 
 * @details This method prompts the user to enter the upper bound (t) and validates the input.
 * 
 * @version 1.00
 */
int Utility::promptT() {
    int t;
    while (true) {
        std::cout << "Enter the upper bound (t): ";
        std::cin >> t;
        if (t > 0) break;
        std::cout << "Value must be greater than 0.\n";
    }
    return t;
}

/**
 * @brief Prompts the user for the value of K.
 * 
 * @param maxSize The maximum value allowed for K.
 * 
 * @return The value of K entered by the user.
 * 
 * @details This method prompts the user to enter the value of K and validates the input.
 * 
 * @version 1.00
 */
int Utility::promptK(int maxSize) {
    int k;
    while (true) {
        std::cout << "Enter the value of K: ";
        std::cin >> k;
        if (k > 0 && k <= maxSize) break;
        std::cout << "K must be greater than 0 and less than or equal to the total size.\n";
    }
    return k;
}
