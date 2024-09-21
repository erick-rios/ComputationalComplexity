
# Knapsack Problem Solver

## Overview
This project provides an implementation of the **Knapsack Problem**, a combinatorial optimization problem where the objective is to maximize the value of items placed in a knapsack with a limited capacity. The solution involves generating subsets of items, verifying their validity, and selecting the subset with the optimal value-to-weight ratio.

The project is organized into modules that define items, solve the problem using different strategies, generate subsets, and verify constraints. The project structure follows a clear separation between header files and source files, with an executable for the main program.

## Project Structure

```
.
├── bin
│   └── knapsack                 # Compiled executable
├── include                      # Header files
│   ├── Item.hpp                 # Defines the Item class
│   ├── KnapsackSolver.hpp       # Contains the KnapsackSolver class definition
│   ├── SubsetGenerator.hpp      # Handles generation of subsets of items
│   └── SubsetVerifier.hpp       # Verifies subsets based on constraints
├── README.md                    # This file
└── src                          # Source files
    ├── Item.cpp                 # Implementation of the Item class
    ├── KnapsackSolver.cpp       # Implements the knapsack solving algorithm
    ├── main.cpp                 # Entry point of the program
    ├── SubsetGenerator.cpp      # Generates item subsets
    └── SubsetVerifier.cpp       # Verifies the validity of subsets
```

## Features
- **Item Class**: Represents an item with a value and a weight.
- **Knapsack Solver**: Implements the algorithm to solve the knapsack problem by evaluating different item subsets and finding the optimal solution.
- **Subset Generator**: Efficiently generates all possible subsets of items.
- **Subset Verifier**: Ensures subsets do not exceed the knapsack’s capacity and verifies solution constraints.

## Build Instructions
To compile the project, use a C++ compiler (e.g., g++ or clang) and the following steps:

1. Navigate to the root directory.
2. Run the following command to compile the project:

```bash
g++ -I include -o bin/knapsack src/*.cpp
```

3. The compiled executable will be available in the `bin` directory.

## Usage
After compiling the project, run the knapsack solver with:

```bash
./bin/knapsack
```

The program will prompt you to input the available items and the maximum capacity of the knapsack. It will then output the optimal solution (i.e., the subset of items that maximizes the total value without exceeding the weight limit).

## Contributing
If you'd like to contribute to this project, feel free to fork the repository, make your changes, and submit a pull request. Any contributions that improve the efficiency of the algorithms or add new solving methods are welcome.

## License
This project is licensed under the MIT License.