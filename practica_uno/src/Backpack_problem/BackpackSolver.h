#ifndef BACKPACKSOLVER_H
#define BACKPACKSOLVER_H

#include "Backpack.h"
#include <vector>

class BackpackSolver {
    public:
        BackpackSolver();
        std::vector<int> selectSubset(const Backpack backpack);
        bool verifySubset(const Backpack backpack, const std::vector<int>& subset);
        void printSubset(const std::vector<int>& subset);
};

#endif // BACKPACKSOLVER_H
