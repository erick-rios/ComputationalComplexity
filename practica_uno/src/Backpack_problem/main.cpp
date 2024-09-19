#include "Backpack.h"
#include "BackpackSolver.h"
#include <iostream>

int main() {

    int n = 10;
    int capacity = 100;


    Backpack backpack(capacity);

    backpack.generateInstance(n);

    backpack.printObjects();

    BackpackSolver solver;

    std::vector<int> subset = solver.selectSubset(backpack);

    solver.printSubset(subset);

    bool valid = solver.verifySubset(backpack, subset);

    if(valid){
        std::cout << "YES. The subset is valid" << std::endl;
    } else {
        std::cout << "NO. The subset is invalid" << std::endl;
    }

    return 0;
}