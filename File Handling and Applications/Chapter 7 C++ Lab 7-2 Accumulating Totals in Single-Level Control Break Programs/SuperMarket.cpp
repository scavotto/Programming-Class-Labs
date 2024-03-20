// SuperMarket.cpp - This program creates a report that lists weekly hours worked
// by employees of a supermarket. The report lists total hours for
// each day of one week.
// Input: Interactive
// Output: Report.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare variables.
    const string HEAD1 = "WEEKLY HOURS WORKED";
    const string DAY_FOOTER = " Day Total ";  // Leading spaces in DAY_FOOTER are intentional.
    const string SENTINEL = "done";            // Named constant for sentinel value.
    double hoursWorked = 0;                    // Current record hours.
    string dayOfWeek;                          // Current record day of week.
    double hoursTotal = 0;                     // Hours total for a day.
    string prevDay = "";                       // Previous day of week.
    bool notDone = true;                       // loop control

    // Print two blank lines.
    cout << endl << endl;

    // Print heading.
    cout << "\t\t\t\t\t" << HEAD1 << endl;

    // Print two blank lines.
    cout << endl << endl;

    // Read first record
    cout << "Enter day of week or done to quit: ";
    cin >> dayOfWeek;
    if (dayOfWeek == SENTINEL)
        notDone = false;
    else
    {
        cout << "Enter hours worked: ";
        cin >> hoursWorked;
        prevDay = dayOfWeek;
        hoursTotal = hoursWorked; // Initialize hoursTotal with the first record's hours
    }

    while (notDone)
    {
        // Implement control break logic here
        cout << "Enter day of week or done to quit: ";
        cin >> dayOfWeek;

        if (dayOfWeek == SENTINEL)
        {
            notDone = false;
            cout << "\t\t" << DAY_FOOTER << hoursTotal << endl; // Print the last day's total
        }
        else
        {
            cout << "Enter hours worked: ";
            cin >> hoursWorked;

            if (dayOfWeek == prevDay)
            {
                hoursTotal += hoursWorked; // Accumulate hours worked for the same day
            }
            else
            {
                cout << "\t\t" << DAY_FOOTER << hoursTotal << endl; // Print the previous day's total
                hoursTotal = hoursWorked; // Reset hoursTotal for the new day
                prevDay = dayOfWeek; // Update prevDay to the current day
            }
        }
    }

    return 0;
}