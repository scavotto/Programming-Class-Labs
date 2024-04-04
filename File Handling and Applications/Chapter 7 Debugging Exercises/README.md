# Car Sales Merger
This C++ program merges car sales data from two files into one.

## Description
The program reads sales data for new and used cars from separate files, sorted by salesperson ID. It merges the data into a single file, displaying all of a salesperson's sales together.

### How to Install and Run
1. Ensure you have a C++ compiler installed.
2. Download the source code files.
3. Create two input files: "newSales.dat" and "usedSales.dat".
  - Each line should contain a salesperson ID and a sale amount.
  - Example: "100 40000" (without quotes).
4. Open a terminal and navigate to the directory with the files.
5. Compile the code using your C++ compiler.
  - Example: "g++ -o carSales carSales.cpp" (without quotes).
6. Run the compiled program.
  - Example: "./carSales" (without quotes).

### How to Use
1. Ensure the input files "newSales.dat" and "usedSales.dat" are correctly formatted and in the same directory as the program.
2. Run the program.
3. The merged sales data will be written to "AllSales.dat".
4. Each line will contain a salesperson ID and a sale amount.
   
## Credits
This program was created as a debugging exercise from a programming textbook, Programming Logic and Design, Introductory, 9th Edition - 9781337109635 - Cengage.
