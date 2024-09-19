#include "SubsetProduct.h"
#include "SubsetSolver.h"
#include <iostream>

int main() {
    int n = 10;            // Number of elements
    int threshold = 5000;   // Threshold for the product

    // Create the SubsetProduct instance
    SubsetProduct subsetProduct(threshold);

    // Generate a random set of elements
    subsetProduct.generateElements(n);

    // Print the elements
    subsetProduct.printElements();

    // Create the solver for the subset product problem
    SubsetSolver solver;

    // Find the maximum subset whose product is <= threshold
    std::vector<int> bestSubset = solver.findMaxSubset(subsetProduct);

    // Print the selected subset
    solver.printSubset(bestSubset, subsetProduct);

    return 0;
}
