# Your Tasks

In this lab, you use the flowchart and pseudocode found in the figures below to add code to a partially created Python program. When completed, college admissions officers should be able to use the Python program to determine whether to accept or reject a student, based on his or her test score and class rank.

start
   input → test_score, class_rank

   if test_score >= 90 then
      if class_rank >= 25 then
         output "Accept"
      otherwise
         output "Reject"

   otherwise if test_score >= 80 then
      if class_rank >= 50 then
         output "Accept"
      otherwise
         output "Reject

   otherwise if test_score >= 70 then
      if class_rank >= 75 then
         output "Accept"
      otherwise
         output "Reject"
   otherwise
      output "Reject"
	  
	  
## Instructions

### Task 1

Write the interactive input statements to retrieve a student's test score (`test_score`) and class rank (`class_rank`) from the user of the program. Do not forget to prompt the user for the test score and class rank.

```python
test_score = input("Enter student's test score: ")
class_rank = input("Enter student's class rank: ")
```

### Task 2
Write the statements to convert the string representation of a student's test score and class rank to the integer data type.

```	python
test_score = int(test_score)
class_rank = int(class_rank)
```

The rest of the program is written for you.

Execute the program by entering 87 for the test score and 60 for the class rank. Execute the program by entering 60 for the test score and 87 for the class rank.

Examples of the program are shown below:

```python
Enter student's test score: 87
Enter student's class rank: 60
Accept

Enter student's test score: 60
Enter student's class rank: 87
Reject
```
