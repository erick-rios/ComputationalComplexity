#ifndef SUBSETSOLVER_H
#define SUBSETSOLVER_H

#include "SubsetProduct.h"
#include <vector>

class SubsetSolver {
public:
    std::vector<int> findMaxSubset(const SubsetProduct& problem);
    void printSubset(const std::vector<int>& subset, const SubsetProduct& problem) const;
};

#endif
