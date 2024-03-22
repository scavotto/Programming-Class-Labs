// Each time a salesperson sells a car at the
// Pardeeville New and Used Auto Dealership,
// a record is created containing the salesperson’s
// name and the amount of the sale.
// Sales of new and used cars are kept in separate files,
// sorted by salesperson ID number.
// Management has requested a merged file so that
// all of a salesperson’s sales (both new and used cars)
// are displayed together. The following code is intended
// to merge the files.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function prototypes
void getReady();
void detailLoop();
void finish();

const int HIGH_ID = 99999;

ifstream newSalesIn;
ifstream usedSalesIn;
ofstream allSalesOut;

int newSalespersonID;
double newAmount;
int usedSalespersonID;
double usedAmount;

bool bothAtEof = false;

int main() {
    newSalesIn.open("newSales.dat");
    usedSalesIn.open("usedSales.dat");
    allSalesOut.open("AllSales.dat");

    getReady();

    while (!bothAtEof) {
        detailLoop();
    }

    finish();

    return 0;
}

void getReady() {
    if (newSalesIn >> newSalespersonID >> newAmount) {
        if (newSalesIn.eof()) {
            newSalespersonID = HIGH_ID;
        }
    }
    else {
        newSalespersonID = HIGH_ID;
    }

    if (usedSalesIn >> usedSalespersonID >> usedAmount) {
        if (usedSalesIn.eof()) {
            usedSalespersonID = HIGH_ID;
        }
    }
    else {
        usedSalespersonID = HIGH_ID;
    }

    if (newSalespersonID == HIGH_ID && usedSalespersonID == HIGH_ID) {
        bothAtEof = true;
    }
}

void detailLoop() {
    if (newSalespersonID < usedSalespersonID) {
        allSalesOut << newSalespersonID << " " << newAmount << endl;
        if (newSalesIn >> newSalespersonID >> newAmount) {
            if (newSalesIn.eof()) {
                newSalespersonID = HIGH_ID;
            }
        }
        else {
            newSalespersonID = HIGH_ID;
        }
    }
    else if (usedSalespersonID < newSalespersonID) {
        allSalesOut << usedSalespersonID << " " << usedAmount << endl;
        if (usedSalesIn >> usedSalespersonID >> usedAmount) {
            if (usedSalesIn.eof()) {
                usedSalespersonID = HIGH_ID;
            }
        }
        else {
            usedSalespersonID = HIGH_ID;
        }
    }
    else {
        allSalesOut << newSalespersonID << " " << newAmount << endl;
        allSalesOut << usedSalespersonID << " " << usedAmount << endl;
        if (newSalesIn >> newSalespersonID >> newAmount) {
            if (newSalesIn.eof()) {
                newSalespersonID = HIGH_ID;
            }
        }
        else {
            newSalespersonID = HIGH_ID;
        }
        if (usedSalesIn >> usedSalespersonID >> usedAmount) {
            if (usedSalesIn.eof()) {
                usedSalespersonID = HIGH_ID;
            }
        }
        else {
            usedSalespersonID = HIGH_ID;
        }
    }
    if (newSalespersonID == HIGH_ID && usedSalespersonID == HIGH_ID) {
        bothAtEof = true;
    }
}

void finish() {
    newSalesIn.close();
    usedSalesIn.close();
    allSalesOut.close();
}