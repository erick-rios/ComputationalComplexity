
# Computational Complexity Project Repository

## Owner: Erick Jesús  Ríos González

## Overview
This repository contains the work I have done for my **Computational Complexity** class. It includes implementations of various algorithms and problems, specifically focusing on the **Knapsack Problem** and the **Subset Product Problem**. Each problem is organized into its own directory with separate source code, headers, executables, and documentation. Additionally, the repository contains reports for each project.

## Repository Structure

```
.
├── Knapsack_problem              # Contains code and executable for solving the Knapsack Problem
│   ├── bin
│   │   └── knapsack              # Compiled executable for Knapsack Problem
│   ├── include                   # Header files for Knapsack Problem
│   │   ├── Item.hpp
│   │   ├── KnapsackSolver.hpp
│   │   ├── SubsetGenerator.hpp
│   │   └── SubsetVerifier.hpp
│   ├── README.md                 # Documentation for Knapsack Problem
│   └── src                       # Source files for Knapsack Problem
│       ├── Item.cpp
│       ├── KnapsackSolver.cpp
│       ├── main.cpp
│       ├── SubsetGenerator.cpp
│       └── SubsetVerifier.cpp
├── README.md                     # Main README for the repository
├── reports                       # Contains project reports written in LaTeX
│   ├── build
│   │   ├── practica_uno.pdf       # Compiled report in PDF format
│   └── practica_uno.tex           # LaTeX source for the report
└── Subset_product_problem        # Contains code and executable for solving the Subset Product Problem
    ├── bin
    │   └── subset_solver         # Compiled executable for Subset Product Problem
    ├── include                   # Header files for Subset Product Problem
    │   ├── SubsetGenerator.h
    │   ├── SubsetProductSolver.h
    │   └── SubsetVerifier.h
    ├── README.md                 # Documentation for Subset Product Problem
    └── src                       # Source files for Subset Product Problem
        ├── main.cpp
        ├── SubsetGenerator.cpp
        ├── SubsetProductSolver.cpp
        └── SubsetVerifier.cpp
```

## Knapsack Problem
The **Knapsack Problem** is a combinatorial optimization problem where the objective is to maximize the value of items placed in a knapsack without exceeding its weight capacity. This directory contains the following files:

- **Header files**: Define the structure and methods for solving the knapsack problem.
- **Source files**: Implement the logic to solve the problem using dynamic programming and other approaches.
- **Executable**: A precompiled executable that solves the knapsack problem with input provided by the user.

### Build Instructions:
To compile the knapsack solver:
```bash
g++ -I include -o bin/knapsack src/*.cpp
```

## Subset Product Problem
The **Subset Product Problem** involves finding a subset of elements from a given set such that their product is maximized without exceeding a specific target. The structure of this directory is similar to the knapsack problem:

- **Header files**: Contain the necessary function declarations for subset generation, product solving, and verification.
- **Source files**: Provide the logic to solve the subset product problem.
- **Executable**: A precompiled solver for the subset product problem.

### Build Instructions:
To compile the subset product solver:
```bash
g++ -I include -o bin/subset_solver src/*.cpp
```

## Reports
The `reports` directory contains LaTeX files and compiled PDFs of the reports for each project. These reports provide detailed explanations of the algorithms, complexity analysis, and results.

To compile the LaTeX report (assuming LaTeX is installed):
```bash
pdflatex -output-directory=reports/build reports/practica_uno.tex
```

## License
This project is licensed under the MIT License.
