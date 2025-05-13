# PR7 Project

## Overview
The PR7 project consists of several C programs that demonstrate the use of data structures, specifically vectors. The project includes functionalities for lottery number validation, polynomial differentiation, duplicate counting, and data analysis.

## Directory Structure
```
PR7
├── bin            # Directory for compiled binaries
│   └── .gitkeep   # Keeps the bin directory tracked by Git
├── src            # Source files for the project
│   ├── PrimitivaVectorPR.c       # Program for lottery number input and validation
│   ├── DerivadaPolinomioPR.c     # Program for polynomial differentiation
│   ├── ContarDuplicadosPR.c       # Program for counting duplicates in a vector
│   ├── AnalisisDatosPR.c          # Program for analyzing raw data
│   └── .vscode
│       └── test
│           └── TEST.h             # Header file for testing functions
├── include         # Directory for header files
│   └── .gitkeep   # Keeps the include directory tracked by Git
├── docs            # Documentation files
│   └── PR7.md     # Documentation for the practice exercise
├── Makefile        # Build automation file
├── .gitignore      # Specifies files to ignore in Git
└── README.md       # Project documentation
```

## Setup Instructions
1. Clone the repository to your local machine.
2. Navigate to the project directory.
3. Use the provided Makefile to compile the source files:
   ```
   make
   ```
4. The compiled binaries will be located in the `bin` directory.

## Usage
- Each program can be executed from the `bin` directory.
- Follow the prompts in each program to input data as required.

## Contribution
Feel free to contribute to the project by submitting issues or pull requests. Ensure to follow the coding standards and include tests for new features.

## License
This project is licensed under the MIT License. See the LICENSE file for more details.