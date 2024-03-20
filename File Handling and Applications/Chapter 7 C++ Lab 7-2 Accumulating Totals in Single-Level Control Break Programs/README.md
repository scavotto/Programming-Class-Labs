## Your Tasks

In this lab, you will use what you have learned about accumulating totals in a single-level control break program to complete a C++ program. The program should produce a report for a supermarket manager to help her keep track of the hours worked by her part-time employees. The report should include the day of the week, the number of hours worked by each employee for each day, and the total hours worked by all employees each day.

The program provided for this lab includes the necessary variable initializations and input and output statements. You need to implement the code that recognizes when a control break should occur. You also need to complete the control break code. Be sure to accumulate the daily totals for all days in the week. Comments in the code tell you where to write your code. You can use the ClientByState.cpp program in this chapter as a guide for this new program.

## Instructions

### Task 1
Write the control break code using a while loop.

### Task 2
The program accumulates totals and displays a report.

An example of the program is shown below:

```cpp
Enter day of week or done to quit: Monday
Enter hours worked: 6
Monday: 6
Enter a day of week or done to quit: Monday
Enter hours worked: 3
Monday: 3
Enter a day of week or done to quit: Tuesday
Enter hours worked: 4
              Previous Day Total: 9
Tuesday: 4
Enter a day of week or done to quit: Wednesday
Enter hours worked: 2
              Previous Day Total: 4
Wednesday: 2
Enter a day of week or done to quit: Thursday
Enter hours worked: 4
              Previous Day Total: 2
Thursday: 4
Enter a day of week or done to quit: Friday
Enter hours worked: 3
              Previous Day Total: 4
Friday: 3
Enter a day of week or done to quit: Saturday
Enter hours worked: 7
              Previous Day Total: 3
Saturday: 7
Enter a day of week or done to quit: Sunday
Enter hours worked: 0
              Previous Day Total: 7
Sunday: 0
Enter a day of week or done to quit: done
              Previous Day Total: 0
```