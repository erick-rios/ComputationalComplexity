/**
 * @file ObjectManager.hpp
 * 
 * @brief This file contains the declaration of the ObjectManager class.
 * 
 * @details This class contains static methods that are used to assign weights and profits to objects.
 * 
 * @version 1.00
 * 
 * @author Erick Jesús Ríos Gonzalez
 */
#ifndef OBJECTMANAGER_HPP
#define OBJECTMANAGER_HPP

#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

class ObjectManager {
public:
    unordered_map<string, int> assignWeights(const vector<string>& objects);
    unordered_map<string, int> assignProfits(const vector<string>& objects);
    void printWeights(const unordered_map<string, int>& weights, const vector<string>& objects);
    void printProfits(const unordered_map<string, int>& profits, const vector<string>& objects);

private:
    int getRandomNumber(int min, int max);
};

#endif
