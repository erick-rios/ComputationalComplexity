/**
 * @file Item.hpp
 * @brief Definition of the Item class
 * 
 * This file contains the definition of the Item class
 * 
 * @see Item.cpp
 * @author Erick Jesus Rios Gonzalez
 * @date 2025-09-19
 */
#ifndef ITEM_HPP
#define ITEM_HPP

/**
 * @brief Item class
 * 
 * This class represents an item with a weight and a value
 * 
 */
class Item {
public:
    int weight;
    int value;

    Item(int weight, int value);
};

#endif
