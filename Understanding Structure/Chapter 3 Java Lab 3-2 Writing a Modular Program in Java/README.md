# Your Tasks

In this lab, you add the input and output statements to a partially completed Java program. When completed, the user should be able to enter a year and then click the **OK** button, enter a month and then click the **OK** button, and enter a day and then click the **OK** button to determine if the date is valid. Valid years are those that are greater than 0, valid months include the values 1 through 12, and valid days include the values 1 through 31.

## Instructions

_Note: Variables have been declared for you._

### Task 1: 
Write the simulated `housekeeping()` function that contains the prompts and input statements to retrieve a year, a month, and a day from the user. Include the output statements in the simulated `endOfJob()` function.

The format of the output is as follows:

month/day/year is a valid date.

OR

month/day/year is an invalid date.

	
	The rest of the program is written for you.

	Execute the program entering the following:

	- month = 5, day = 32, year = 2014.
	- month = 9, day = 21, year = 2002.
	

An example of the program is shown below:

	
	Enter year: 2002
	Enter month: 9
	Enter day: 21
	9/21/2002 is a valid date.
	

### Simulated `housekeeping()` function

	
	import java.util.Scanner;
	

	Scanner input = new Scanner(System.in);

	System.out.print("Enter year: ");
	int year = input.nextInt();

	System.out.print("Enter month: ");
	int month = input.nextInt();

	System.out.print("Enter day: ");
	int day = input.nextInt();
	

### Simulated `housekeeping()` function

	
	import java.util.Scanner;
	

Scanner input = new Scanner(System.in);

	 java
	System.out.print("Enter year: ");
	int year = input.nextInt();

	System.out.print("Enter month: ");
	int month = input.nextInt();

	System.out.print("Enter day: ");
	int day = input.nextInt();
	

Simulated endOfJob() function

	
	if (year > 0 && month >= 1 && month <= 12 && day >= 1 && day <= 31) {
		System.out.println(month + "/" + day + "/" + year + " is a valid date.");
	} else {
		System.out.println(month + "/" + day + "/" + year + " is an invalid date.");
	}
	
