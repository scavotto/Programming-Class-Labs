"""Program Name: CollegeAdmission.py
   Function: This program determines if a student will be admitted or rejected.
   Input:  Interactive
   Output: Accept or Reject
"""

# Get input and convert to correct data type
test_score = input("Enter the student's test score: ")
test_score = int(test_score)

class_rank = input("Enter the student's class rank: ")
class_rank = int(test_score)

# Test using admission requirements and print Accept or Reject
if test_score >= 90:
	if  class_rank >= 25:
		print("Accept")
	else:
		print("Reject")

elif test_score >= 80:

		if class_rank >= 50:
			print("Accept")
		else:
			print("Reject")

elif test_score >= 70:

			if class_rank >=75:
				print("Accept")
			else:
				print("Reject")

else:
	print("Reject")