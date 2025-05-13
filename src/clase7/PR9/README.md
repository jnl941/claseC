# PR9 Project

## Overview
The PR9 project consists of a series of exercises focused on data structures and records in C programming. The project includes implementations for calculating elapsed time between two records and computing the area of various geometric figures. Additionally, it extends the functionality to maintain a list of geometric figures and analyze their properties.

## Directory Structure
- **bin/**: Contains the compiled binaries of the C programs.
- **src/**: Contains the source code files for the project.
  - `RegistroTiemposPR.c`: Program to read two time records and calculate the elapsed time.
  - `FigurasPR.c`: Program to calculate the area of different geometric figures.
  - `ListaFigurasPR.c`: Extended program to maintain a list of geometric figures and analyze them.
- **include/**: Contains header files for the project.
  - `tiempo.h`: Declarations for time record structures and functions.
  - `figuras.h`: Declarations for geometric figure structures and area calculation functions.
- **docs/**: Contains documentation files, including practice instructions.
  - `PR9.md`: Instructions and requirements for the exercises.
- **Makefile**: Build instructions for compiling the C programs and placing the output binaries in the bin directory.

## Setup Instructions
1. Clone the repository to your local machine.
2. Navigate to the project directory.
3. Use the provided Makefile to compile the programs:
   ```
   make
   ```
4. The compiled binaries will be located in the `bin/` directory.

## Exercises
1. **Registro de tiempos**: Implement a program to read two time records and calculate the elapsed time.
2. **Figuras geométricas**: Create a program to calculate the area of circles, rectangles, and triangles based on user input.
3. **Lista de figuras**: Extend the previous program to maintain a list of geometric figures and analyze their types and areas.

## License
This project is licensed under the MIT License. See the LICENSE file for more details.