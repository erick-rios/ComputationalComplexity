
# Subset Product Solver

## Overview
This project implements a solution to the **Subset Product Problem**, where the goal is to find a subset of elements whose product is maximized without exceeding a given target value. The solution involves generating subsets, calculating their product, and verifying if they meet the constraints.

The project is organized into different modules, including the subset generator, product solver, and subset verifier. The executable is generated in the `bin` directory.

## Project Structure

```
.
├── bin
│   └── subset_solver            # Compiled executable
├── include                      # Header files
│   ├── SubsetGenerator.h        # Generates subsets of elements
│   ├── SubsetProductSolver.h    # Solves the subset product problem
│   └── SubsetVerifier.h         # Verifies if subsets satisfy constraints
├── README.md                    # This file
└── src                          # Source files
    ├── main.cpp                 # Entry point for the subset solver
    ├── SubsetGenerator.cpp      # Subset generator implementation
    ├── SubsetProductSolver.cpp  # Implements the product-solving logic
    └── SubsetVerifier.cpp       # Verifies subset constraints
```

## Features
- **Subset Generator**: Efficiently generates all possible subsets of a given set.
- **Subset Product Solver**: Calculates the product of each subset and selects the subset with the maximum product that does not exceed a given threshold.
- **Subset Verifier**: Ensures that the subset's product meets the required constraints.

## Build Instructions
To compile the project, use a C++ compiler and run the following commands:

1. Navigate to the root directory of the project.
2. Run the following command to compile the project:

```bash
g++ -I include -o bin/subset_solver src/*.cpp
```

3. The compiled executable will be placed in the `bin` directory.

## Usage
After compiling, you can run the `subset_solver` executable with the following command:

```bash
./bin/subset_solver
```

The program will prompt you to input the elements of the set and the target product value. It will then output the subset with the maximum product that does not exceed the target value.

## Example

Sample run of the program:

```
Enter the number of elements in the set: 5
Enter the elements of the set: 3 5 7 9 11
Enter the target product value: 100
Subset with maximum product: {3, 5} with a product of 15
```

## Contributing
Feel free to fork this repository and submit pull requests to add new features or improve the efficiency of the algorithms.

## License
This project is licensed under the MIT License.
