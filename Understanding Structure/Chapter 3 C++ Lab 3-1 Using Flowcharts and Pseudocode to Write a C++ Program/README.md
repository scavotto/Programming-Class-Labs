# Your Tasks

In this lab, you use the flowchart and pseudocode found in the figures below to add code to a partially created C++ program. When completed, college admissions officers should be able to use the C++ program to determine whether to accept or reject a student, based on his or her test score and class rank.

start
   input testScore, classRank
   if testScore >= 90 then
      if classRank >= 25 then
         output "Accept"
      else
         output "Reject"
      endif
   else
      if testScore >= 80 then
         if classRank >= 50 then
            output "Accept"
         else
            output "Reject"
         endif
      else
         if testScore >= 70 then
            if classRank >= 75 then
               output "Accept"
            else
               output "Reject"
            endif
         else
            output "Reject"
         endif
      endif
   endif
stop

## Instructions

### Task 1

Declare two integer variables named `testScore` and `classRank`.

```cpp
int testScore, classRank;
```

### Task 2
Write the interactive input statements to retrieve a student's test score (testScore) and class rank (classRank) from the user of the program. Do not forget to prompt the user for the test score and class rank.

cout << "Enter the student's test score: ";
cin >> testScore;
cout << "Enter the student's class rank: ";
cin >> classRank;