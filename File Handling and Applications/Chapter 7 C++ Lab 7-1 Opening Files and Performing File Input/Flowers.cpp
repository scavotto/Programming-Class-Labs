// Flowers.cpp - This program reads names of flowers and whether they are grown in shade or sun from an input 
// file, stores them in arrays, and prints the information to the user's screen. 
// Input:  flowers.dat.
// Output: Names of flowers and the words sun or shade.

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

const int MAX_FLOWERS = 100; // Maximum number of flowers

int main() {
    // Declare variables here
    ifstream fin;
    string flowerNames[MAX_FLOWERS];
    string lightConditions[MAX_FLOWERS];
    int numFlowers = 0;

    // Open input file
    fin.open("flowers.dat");

    // Check if the file was successfully opened
    if (!fin) {
        cout << "Error opening the file." << endl;
        return 1;
    }

    // Read flower names and light conditions from the file and store them in arrays
    while (fin >> flowerNames[numFlowers] >> lightConditions[numFlowers]) {
        numFlowers++;
    }

    fin.close();

    // Print the flower names and their light conditions
    for (int i = 0; i < numFlowers; i++) {
        cout << flowerNames[i] << " is grown in the " << lightConditions[i] << "." << endl;
    }

    return 0;
}