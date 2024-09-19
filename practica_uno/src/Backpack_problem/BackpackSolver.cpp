#include "BackpackSolver.h"
#include <iostream>
#include <cstdlib>

BackpackSolver::BackpackSolver() {
    srand(time(0));
}

std::vector<int> BackpackSolver::selectSubset(const Backpack backpack) {
    int n = backpack.getObjects().size();
    std::vector<int> subset(n);
    for(int i = 0; i < n; ++i){
        subset[i] = rand() % 2; // select 0 or 1 pseudo-randomly
    }

    return subset;
}

bool BackpackSolver::verifySubset(const Backpack backpack, const std::vector<int>& subset) {
    int totalWeight = 0;
    int totalRevenue = 0;
    const auto& objects = backpack.getObjects();

    for (size_t i = 0; i < objects.size(); i++) {
        if (subset[i] == 1) {
            totalWeight += objects[i].getWeight();
            totalRevenue += objects[i].getRevenue();
        }
    }

    std::cout << "Total Weight: " << totalWeight << " Total Revenue: " << totalRevenue << std::endl;
    std::cout << "Total Revenue: " << totalRevenue << " Total Weight: " << totalWeight << std::endl;
    
    return totalWeight <= backpack.getCapacity();
}

void BackpackSolver::printSubset(const std::vector<int>& subset) {
    for (int i : subset) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}