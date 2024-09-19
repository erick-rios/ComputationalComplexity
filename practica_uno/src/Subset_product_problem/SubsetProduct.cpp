#include "SubsetProduct.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

SubsetProduct::SubsetProduct(int t) : threshold(t) {
    srand(time(0)); // Initialize random number generator
}

void SubsetProduct::generateElements(int n) {
    for (int i = 0; i < n; ++i) {
        int value = rand() % 100 + 1; // Random value between 1 and 100
        elements.emplace_back(value);
    }
}

const std::vector<Element>& SubsetProduct::getElements() const {
    return elements;
}

int SubsetProduct::getThreshold() const {
    return threshold;
}

void SubsetProduct::printElements() const {
    std::cout << "Elements generated (Value):\n";
    for (const auto& elem : elements) {
        std::cout << elem.getValue() << " ";
    }
    std::cout << "\n";
}
