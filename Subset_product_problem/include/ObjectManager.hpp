/**
 * @file ObjectManager.hpp
 * 
 * @brief This file contains the declaration of the ObjectManager class.
 * 
 * @details This class contains static methods that are used to create objects and assign sizes to them.
 * 
 * @version 1.00
 * 
 * @author Erick Jesús Ríos Gonzalez
 * @date 04/12/2024
 */
#ifndef OBJECT_MANAGER_HPP
#define OBJECT_MANAGER_HPP

#include <vector>
#include <string>
#include <unordered_map>

class ObjectManager {
public:
    // Genera un conjunto de objetos con nombres "obj 1", "obj 2", ...
    static std::vector<std::string> createObjects(int count);

    // Asigna un tamaño aleatorio a cada objeto
    static std::unordered_map<std::string, int> assignSizes(const std::vector<std::string>& objects);

    // Imprime los tamaños asignados a los objetos
    static void printSizes(const std::unordered_map<std::string, int>& sizes, const std::vector<std::string>& objects);
};

#endif
