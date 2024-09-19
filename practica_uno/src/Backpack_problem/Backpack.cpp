#include "Backpack.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Backpack::Backpack(int capacity) : capacity(capacity) {}

void Backpack::generateInstance(int n) {
    srand(time(0));
    for (int i = 0; i < n; i++) {
        int weight = rand() % 100 + 1;
        int revenue = rand() % 100 + 1;
        objects.emplace_back(weight, revenue);
    }
}

const std::vector<Object>& Backpack::getObjects() const {
    return objects;
}

int Backpack::getCapacity() const {
    return capacity;
}

void Backpack::printObjects() const {
    for (const Object& object : objects) {
        std::cout << "Weight: " << object.getWeight() << " Revenue: " << object.getRevenue() << std::endl;
    }
}

