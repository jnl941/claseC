# c-modular-decomposition

This project is designed to demonstrate modular programming in C through a series of exercises. Each exercise is implemented in its own directory under the `src` folder, and common utility functions are provided in the `common` directory for reuse across different exercises.

## Project Structure

- **src/**: Contains all source code files organized by exercise.
  - **common/**: Contains utility functions.
    - `utils.c`: Implementation of common utility functions.
    - `utils.h`: Header file for utility functions.
  - **ejercicio0/**: Contains the first exercise.
    - `menu.c`: Simple menu program.
  - **ejercicio1/**: Contains the second exercise.
    - `menu_dos_numeros.c`: Operations on two positive integers.
  - **ejercicio2/**: Contains the third exercise.
    - `menu_fechas.c`: Date management program.
  - **ejercicio3/**: Contains the fourth exercise.
    - `circunferencia.c`: Circle calculation based on three points.

- **bin/**: Contains compiled binaries.
  - `.gitkeep`: Keeps the bin directory in version control.
  - `README.md`: Information about the compiled binaries and how to run the programs.

- **docs/**: Contains documentation files.
  - `enunciados.md`: Problem statements and requirements for each exercise.
  - `ejemplos.md`: Examples and test cases for the implemented exercises.

- **Makefile**: Instructions for building the project, compiling source files, and linking them to create executable binaries.

## Building the Project

To build the project, navigate to the project root directory and run:

```
make
```

This will compile all source files and create the corresponding executable binaries in the `bin` directory.

## Running the Programs

After building the project, you can run each program from the `bin` directory. For example:

```
./menu
./menu_dos_numeros
./menu_fechas
./circunferencia
```

## Purpose

The purpose of this project is to practice modular programming techniques in C, enhance code organization, and improve code reusability through the use of utility functions. Each exercise focuses on different programming concepts and problem-solving skills.