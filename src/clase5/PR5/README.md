# PR5 Modular Design

## Overview
This project implements a modular design approach to solve various computational problems using C programming. Each module is designed to perform a specific task, promoting code reusability and maintainability.

## Modules
1. **CalcularMasaBolaModularPR.c**
   - Implements a function to calculate the mass of a ball made from different materials based on its diameter.
   - Includes input handling and output display.

2. **LeerRealIntervaloPR.c**
   - Provides functionality to read a real number within a specified interval.
   - Ensures that the input falls within the defined bounds.

3. **PasarPolaresPR.c**
   - Converts Cartesian coordinates to polar coordinates.
   - Reads input values and outputs the corresponding polar coordinates.

4. **TablaPotenciasPR.c**
   - Generates a table of powers for a given base within specified limits.
   - Includes input validation and utilizes a helper function for power calculations.

5. **EsBisiestoPR.c**
   - Checks if a given year is a leap year.
   - Reads the year from input and returns a boolean indicating whether it is a leap year.

6. **AckermannPR.c**
   - Implements the Ackermann function, a recursive function that takes two natural numbers as parameters.
   - Handles input and outputs the result of the function.

## Testing
The project includes a comprehensive testing framework with object files for each module. Test cases are provided in text files to validate the functionality of each module.

## Setup Instructions
1. Clone the repository to your local machine.
2. Navigate to the project directory.
3. Use the provided Makefile to compile the project:
   ```
   make
   ```
4. Run the desired module executable to test its functionality.

## Usage
Each module can be executed independently. Follow the prompts for input as specified in the documentation for each module.

## Documentation
Further details about the implementation and design of each module can be found in the `docs/PR5.md` file.