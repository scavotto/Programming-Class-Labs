// This program calculates your age in the year 2050.
#include <iostream>
using namespace std;

int myCurrentAge = 29;
const int YEAR = 2050;
int myNewAge;
int currentYear = 2024;

int main()
{
	// Prompt user to input current age
   string my_str;

   cout << "My Current Age is " << myCurrentAge << ".\n";
   
	// Calculate age in YEAR
   myNewAge = myCurrentAge + (YEAR - currentYear);

	// Print out the calculated age in YEAR
   cout << "I will be " << myNewAge << " in " << YEAR << "." << endl;
   
}