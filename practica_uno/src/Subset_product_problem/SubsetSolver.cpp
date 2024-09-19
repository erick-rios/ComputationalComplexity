#include "SubsetSolver.h"
#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> SubsetSolver::findMaxSubset(const SubsetProduct& problem) {
    const auto& elements = problem.getElements();
    int threshold = problem.getThreshold();
    int n = elements.size();
    
    std::vector<int> bestSubset;
    long long bestProduct = 0;

    // Iterate over all possible subsets (2^n subsets)
    for (int i = 0; i < (1 << n); ++i) {
        long long currentProduct = 1;
        std::vector<int> currentSubset;

        // Check each element in the subset
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) { // If j-th bit is set in i, include the element
                currentProduct *= elements[j].getValue();
                currentSubset.push_back(j);
                if (currentProduct > threshold) {
                    currentProduct = 0; // Subset exceeds threshold, skip
                    break;
                }
            }
        }

        // Update best subset if the current subset has a higher valid product
        if (currentProduct > bestProduct && currentProduct <= threshold) {
            bestProduct = currentProduct;
            bestSubset = currentSubset;
        }
    }
    
    return bestSubset;
}

void SubsetSolver::printSubset(const std::vector<int>& subset, const SubsetProduct& problem) const {
    const auto& elements = problem.getElements();
    std::cout << "Selected subset (values):\n";
    for (int idx : subset) {
        std::cout << elements[idx].getValue() << " ";
    }
    std::cout << "\n";
}
