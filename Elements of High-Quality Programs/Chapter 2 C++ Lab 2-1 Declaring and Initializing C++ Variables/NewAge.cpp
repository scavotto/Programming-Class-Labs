// This program calculates your age in the year 2050.

#include <iostream>
using namespace std;

int myCurrentAge = 29;
int myNewAge;
int currentYear = 2024;

int main()
{
	// Prompt user to input current age
   string my_str;

   cout << "My Current Age is " << myCurrentAge << ".\n";
   
	// Calculate age in 2050
   myNewAge = myCurrentAge + (2050 - currentYear);

	// Print out the calculated age in 2050
   cout << "I will be " << myNewAge << " in 2050." << endl;
   
   return 0;
}